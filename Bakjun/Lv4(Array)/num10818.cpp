#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(void)
{
    int N,num;
    cin>>N;
    vector<int>array(N);
    for(int i = 0; i < N; i++)
    {
        cin>>num;
        array[i] = num;
    }
    sort(array.begin(), array.end()); 
    cout<<array[0]<<" "<<array[N-1];
}