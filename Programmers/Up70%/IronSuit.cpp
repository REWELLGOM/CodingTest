/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12980
5000	5  
2500
1250
625 1점
624
312
156
78
39 1점
38
19 1점
18
9 1점
8
4
2
1 1점
*/

#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;

    //홀수일때 +1 필요함
    while(n == 1)
    {
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n -= 1;
            ans++;
        }

    }    

    return ans;
}