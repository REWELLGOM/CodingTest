/*
    https://school.programmers.co.kr/learn/courses/30/lessons/120818
*/
#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    if(price >= 500000)
    {
        price = price * 0.8;
    }  
    else if(price >= 300000)
    {
        price = price * 0.9;
    }
    else if(price >= 100000)
    {
        price = int(price * 0.95);
    }
    else
    {
    }
    answer = price;
    return answer;
}