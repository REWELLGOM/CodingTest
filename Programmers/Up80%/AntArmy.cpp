/*
    https://school.programmers.co.kr/learn/courses/30/lessons/120837
*/
#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int count = 0, count1 = 0, count2 = 0;
    
    // 5  3  1
    
    if(hp >= 5)
    {
        count = hp / 5;
        hp = hp - count * 5;
        count1 = hp / 3;
        hp = hp - count1 * 3;
        count2 = hp;
    }
    else
    {
        count1 = hp / 3;
        hp = hp - count1 * 3;
        count2 = hp;
    }
    answer = count + count1 + count2;
    return answer;
}