/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12903
*/
#include <string>

using namespace std;

string solution(string s) {
    string answer = "";
    int mid = s.size() / 2;

    if (s.size() % 2 == 0) {
        answer.insert(0, 1, s[mid - 1]);
        answer.insert(1, 1, s[mid]);
    } else {
        answer.insert(0, 1, s[mid]);
    }
    
    return answer;
}
