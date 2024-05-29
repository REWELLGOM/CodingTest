/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12912
*/
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if(a < b)
    {
        for(int i = a; i <= b ; i++)
        {
            answer += i;
        }
    }
    else if(a > b)
    {
        for(int j = a; j >= b; j--)
        {
            answer += j;
        }
    }
    else
    {
        answer = a;
    }
    return answer;
}