/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12948
*/
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int length = phone_number.size();
    
    answer = phone_number.replace(0, length - 4, length - 4, '*');
    return answer;
}