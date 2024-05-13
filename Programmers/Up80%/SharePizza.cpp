/*
    https://school.programmers.co.kr/learn/courses/30/lessons/120814
*/
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count = 1;
    while(n > count*7)
    {
        count++;
    }
    answer = count;
    if(n <= 7)
    {
        answer = 1;
    }
    return answer;
}