/*
    아스키 코드를 이용한 방법
*/

#include <iostream>
#include <string>

int solution(std::string s) {
    int result = 0;
    int sign = 1;
    int i = 0;
    if (s[0] == '-') {
        sign = -1;
        i = 1;
    }
    for (; i < s.size(); ++i) {
        result = result * 10 + (s[i] - '0');
    }
    //'4' 문자는 ASCII 값(52)에서 '0'(48)을 뺀 결과인 52 - 48 = 4이므로 숫자 4
    return sign * result;
}



