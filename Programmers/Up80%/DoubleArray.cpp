/*
    https://school.programmers.co.kr/learn/courses/30/lessons/120809?language=cpp
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer = {0};
    for(int i = 0; i < numbers.size();i++)
    {
        answer[i] = numbers[i] * 2;
    }
    return answer;
}