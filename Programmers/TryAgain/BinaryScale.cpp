/*
    https://school.programmers.co.kr/learn/courses/30/lessons/70129

    0과 1로 이루어진 어떤 문자열 x에 대한 이진 변환을 다음과 같이 정의합니다.

    x의 모든 0을 제거합니다.
    x의 길이를 c라고 하면, x를 "c를 2진법으로 표현한 문자열"로 바꿉니다.

*/





#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    int transformCount = 0;
    int zeroCount = 0;

    while (s.length() > 1) {
        string withoutZeros = "";
        int count = 0;

        for (char c : s) {
            if (c == '0') {
                count++;
            } else {
                withoutZeros += c;
            }
        }

        zeroCount += count;

        int length = withoutZeros.length();
        string binary = "";
        while (length > 0) {
            binary = (length % 2 == 0 ? "0" : "1") + binary;
            length /= 2;
        }

        s = binary;

        transformCount++;
    }

    vector<int> answer = {transformCount, zeroCount};
    return answer;
}
