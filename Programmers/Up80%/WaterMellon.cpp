/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12922
*/

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 1; i < n+1; i++)
    {
        if(i % 2 != 0)
        {
            answer.append("수");
        }
        else
        {
            answer.append("박");
        }
    }
    return answer;
}