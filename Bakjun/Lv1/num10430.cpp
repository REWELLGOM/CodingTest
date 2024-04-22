/*
    사칙연산을 할줄 아는가
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(a+b)%c<<endl;
    cout<<((a%c)+(b%c))%c<<endl;
    cout<<(a*b)%c<<endl;
    cout<<((a%c)*(b%c))%c;
}