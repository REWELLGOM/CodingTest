/*
    else if사용과 논리연산자를 이용할줄 아는가를 보는것 같다
*/
#include <iostream>
using namespace std;

int main(void)
{
    int p1,p2;
    cin>>p1>>p2;

    if(p1 >0 && p2 > 0)
    {
        cout<<1;
    }
    else if(p1 < 0 && p2 > 0)
    {
        cout<<2;
    }
    else if(p1 < 0 && p2 < 0)
    {
        cout<<3;
    }
    else if(p1 > 0 && p2 < 0)
    {
        cout<<4;
    }
}