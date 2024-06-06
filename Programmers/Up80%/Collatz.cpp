/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12943

    이 문제의 함정은 홀수형을 처리할때 int형을 넘어간다는 것이다.
    double float을 해결하기위해서 cmath의 fmod를 사용했다
    %는 int만 가능함
*/
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int num) {
    int count = 0;
    double number = num;

    if (number == 1) {
        return 0;
    }

    while (number != 1) {
        if (fmod(number, 2)== 0) {
            number = number / 2;
        } else {
            number = number * 3 + 1;
        }
        count++;

        if (count >= 500) {
            return -1;
        }
    }
    return count;
}