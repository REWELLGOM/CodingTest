/*
    https://school.programmers.co.kr/learn/courses/30/lessons/77884#
*/

#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int count = 0;
    for(int i = left; i <= right; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count % 2 == 0)
        {
            answer += i;
        }
        else
        {
            answer -= i;
        }
        count = 0;
    }
    
    return answer;
}

//다른 풀이
int sign(int n, int count = 1) 
{
    for (int i = 1, last = n >> 1; i <= last; ++i) 
    {
        if (n % i == 0) 
        {
            ++count;
        }
    }
    return count & 1 ? -1 : 1;
}
int solution(int left, int right) 
{ 
    return left > right ? 0 : sign(left)*left + solution(left + 1, right); 
}
