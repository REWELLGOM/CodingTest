/*
    hour를 분으로 다 모은후 몫은 시 나머지는 분으로 나타내는 로직이다
*/
#include <iostream>
using namespace std;

int main(void)
{
    int h,m,minute;
    cin>>h>>m;
    cin>>minute;

    h = h * 60;
    int result = h + m;
    result += minute;

    h = result/60;
    m = result % 60;
    if(h >= 24)
    {
        h = h % 24;
    }
    cout<<h<<" "<<m;
}