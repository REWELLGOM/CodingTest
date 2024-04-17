#include <iostream>

//fixed와 setprecision을 이용하기위한 라이브러리
#include <iomanip>
using namespace std;

int main()
{
    double a, b;
    cin>>a;
    cin>>b;
    double result = a/b;

    //setprecision으로 범위 설정 fixed로 범위 하나로 확정
    cout << fixed << setprecision(9) << result << endl;
    
    return 0;
}