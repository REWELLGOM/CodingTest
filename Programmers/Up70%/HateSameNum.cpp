/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12906
*/
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm> 

using namespace std;

vector<int> solution(vector<int> arr) 
{
    queue<int> q;
    vector<int> result;

    if (!arr.empty())
    {
        q.push(arr[0]);
    }

    for (int i = 1; i < arr.size(); i++)
    {
        if (q.back() != arr[i])
        {
            q.push(arr[i]);
        }
    }

    while (!q.empty())
    {
        result.push_back(q.front());
        q.pop();
    }

    return result;
}
