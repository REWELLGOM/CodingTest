/*
    https://school.programmers.co.kr/learn/courses/30/lessons/68935
*/

#include <vector>
#include <cmath>


using namespace std;

int solution(int n) {
    vector<int> vec;

    while (n > 0) {
        vec.push_back(n % 3);
        n = n / 3;
    }

    int answer = 0;

    for (int i = 0; i < vec.size(); ++i) {
        answer += vec[i] * pow(3, vec.size() - 1 - i);
    }
}