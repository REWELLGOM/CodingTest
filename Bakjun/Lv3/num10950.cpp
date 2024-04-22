/*
    간단한 for문 사용 문제이다
*/
#include <iostream>
using namespace std;

int main()
{
    int ncase, n1, n2;
    cin>>ncase;
    for(int i = 0; i < ncase; i++)
    {
        cin>>n1>>n2;
        cout<<n1+n2<<endl;
    }
}