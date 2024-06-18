/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12934
*/
#include <cmath>
using namespace std;

long long solution(long long n) {
    if (n == 1) {
        return 4; // 1의 다음 제곱수는 2의 제곱, 즉 4입니다.
    }

    for (long long i = 1; i * i <= n; ++i) {
        if (i * i == n) {
            return (i + 1) * (i + 1);
        }
    }

    return -1;
}
