/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12943
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