/*
    논리 연산자를 사용할줄 아는가
*/
#include <iostream>
using namespace std;

int main(void)
{
    int score;
    cin>>score;
    if(score >= 90)
    {
        cout<<"A";
    }
    else if(90>score && score>= 80)
    {
        cout<<"B";
    }
    else if(80>score && score>=70)
    {
        cout<<"C";
    }
    else if(70 > score && score>=60)
    {
        cout<<"D";
    }
    else
    {
        cout<<"F";
    }
}