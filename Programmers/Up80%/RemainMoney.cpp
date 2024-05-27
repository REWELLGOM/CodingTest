/*
    https://school.programmers.co.kr/learn/courses/30/lessons/82612

    int로 받은것을 어떻게 타입을 변환하는지를 묻는 문제이다
*/

#include <iostream>
using namespace std;

long long solution(int price, int money, int count)
{
    long long sum = 0;
    for(int i = 1; i <= count; i++)
    {
        sum += static_cast<long long>(price) * i;
    }
    
    long long answer = sum - money;
    
    return answer > 0 ? answer : 0;
}


//다른 풀이 가우스 공식을 이용함
using namespace std;
typedef long long ll;

long long solution(int price, int money, int count)
{
    ll answer = (ll)(count * (count+1) / 2) * price; //{(첫 항 + 마지막 항) * (항의 개수)} / 2
    return answer > money ? answer - money : 0;
}