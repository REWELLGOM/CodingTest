/*
    https://school.programmers.co.kr/learn/courses/30/lessons/120819
*/
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer(2);
    
    if(money >= 5500)
    {
        answer[0] = int(money/5500);
        answer[1] = money - answer[0] * 5500;
    }
    else
    {
        answer[0] = 0;
        answer[1] = money;
    }
    return answer;
}