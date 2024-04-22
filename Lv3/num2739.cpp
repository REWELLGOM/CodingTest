/*
    for문을 사용할줄 아는지를 물어보는 간단한 문제이다
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i = 1; i < 10; i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
}