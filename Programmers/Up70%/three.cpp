/*
    https://school.programmers.co.kr/learn/courses/30/lessons/68935
*/
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    vector<int> ternaryDigits;
    
    while (n > 0) {
        ternaryDigits.push_back(n % 3);
        n /= 3;
    }
    int answer = 0;
    int size = ternaryDigits.size();
    for (int i = 0; i < size; ++i) {
        answer += ternaryDigits[i] * pow(3, size - 1 - i);
    }
    
    return answer;
}