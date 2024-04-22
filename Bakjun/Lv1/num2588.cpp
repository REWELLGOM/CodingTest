/*
    곱셈 나눗셈을 할줄 아는가
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,f1,f2,f3;
    cin>>a>>b;
    int b1 = b/100;
    int b2 = (b-b1*100)/10;
    int b3 = (b-b1*100-b2*10);
    f1 = a*b3;
    f2 = a*b2;
    f3 = a*b1;
    cout<<f1<<endl;
    cout<<f2<<endl;
    cout<<f3<<endl;
    cout<<a*b<<endl;
}