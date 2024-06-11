/*
    https://school.programmers.co.kr/learn/courses/30/lessons/68935
*/
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec;
    int count = 0;
    
    while(n == 1)
    {
        vec[count] = n % 3;
        n = n /3;
        count++;
    }
    count = 0;
    reverse(vec.begin(), vec.end());
    
    for(int j = vec.size(); j < 0; j--)
    {
        answer +=  count* pow(3, vec[j]);    
        count++;
    }
    return answer;
}