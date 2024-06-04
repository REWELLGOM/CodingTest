/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12909
*/
#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int balance = 0; 
    
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s.at(i) == '(')
        {
            balance++;
        }
        else
        {
            balance--;
        }
        
        if(balance < 0)
        {
            return false;
        }
    }
    if(balance == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}