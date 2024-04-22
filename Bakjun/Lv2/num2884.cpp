#include <iostream>
using namespace std;

// 너무 오래걸림
int Calculator(int &hour, int &minute)
{
    if(minute - 45 < 0)
    {
        hour = hour - 1;
        minute = -1 * (minute - 45);
        minute = 60 - minute;
    }
    else if(minute == 0)
    {
    }
    else
    {
        minute = minute -45;
    }
    return 0;
}

int main()
{
    int h,m;
    cin>>h>>m;

    int *ph = &h;
    int *pm = &m;

    if(h > 0)
    {
        Calculator(*ph,*pm);
    }
    else
    {
        int minute = m;
        Calculator(*ph,*pm);
        if(minute - 45 > 0)
        {
            h = 0;
        }
        else
        {
            h = 23;
        }

    }

    cout<<h<<" "<<m;
    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int h, m;
//     cin >> h >> m;

//     m -= 45;  // 분에서 45분을 빼기
//     if (m < 0) {  // 분이 음수가 되면
//         m += 60;  // 60분을 더하고
//         h--;      // 시간을 1시간 빼기
//     }
//     if (h < 0) {  // 시간이 음수가 되면 (0시에서 1시간을 빼면)
//         h = 23;  // 23시로 설정
//     }

//     cout << h << " " << m;  // 결과 출력
//     return 0;
// }
