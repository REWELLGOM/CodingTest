#include <iostream>
using namespace std;

int main(void)
{
    int N;
    cin>>N;
    for(int i = 1; i< N+1; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}