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