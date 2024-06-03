/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12941
    하나는 내림차순 하나는 오름차순으로 곱하는게 가장 작게나온다
*/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Compare(int a, int b)
{
    return b < a;
}

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), Compare);
    
    for(int i = 0; i < A.size(); i++)
    {
        answer += A[i] * B[i];
    }
    return answer;
}


//다른 풀이
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int solution(vector<int> A, vector<int> B){
    sort(A.begin(),A.end());  
    sort(B.rbegin(),B.rend());
    return inner_product(A.begin(),A.end(),B.begin(),0);
}