/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12934
*/
#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int i = 1;
    while(1)
    {
        if(n / i == i)
        {
            answer = i;
            break;
        }
        else
        {
            return -1;
        }
        i++;
    }
    answer = (answer + 1)* (answer + 1);
    
    return answer;
}