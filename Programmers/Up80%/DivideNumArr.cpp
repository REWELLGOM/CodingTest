/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12910
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    sort(arr.begin(), arr.end());
    for (size_t i = 0; i < arr.size(); i++) 
    {
        if (arr[i] % divisor == 0) 
        {
            answer.push_back(arr[i]);
        }
    }
    
    if (answer.empty()) 
    {
        answer.push_back(-1);
    }
    return answer;
}