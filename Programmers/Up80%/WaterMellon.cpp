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

//다른 풀이 비트연산자를 이용한

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";

    for(int i = 0; i < n; i++)
        i & 1 ? answer += "박" : answer += "수";

    return answer;
}