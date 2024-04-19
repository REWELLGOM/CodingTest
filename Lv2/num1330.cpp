/*
    비교 연산자를 사용할줄 아는가
*/
#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin>>a;
    cin>>b;
    
    if(a>b)
    {
        cout<<">"<<endl;
    }
    else if(a < b)
    {
        cout<<"<"<<endl;
    }
    else
    {
        cout<<"=="<<endl;
    }
}