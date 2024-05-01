#include <string>
#include <vector>

using namespace std;

//간편하게 해주는 프레임웤이 있다

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer(2);
    int denom = 0 , i = 0, j = 0;
    // 1,3 | 1,20
    if(denom1 < denom2)
    {
        for(i = 1; i <= denom1 * denom2; i++)
        {
            if((denom1 * i) % denom2 == 0)
            {
                break;
                //i = 20
            }
        }
        denom1 = denom1 * i;
        numer1 = numer1 * i;
        // 20/60 + 1/20
        if(denom1 != denom2)
        {
            j = denom1 / denom2;
        
            denom2 = denom2 * j;
            numer2 = numer2 * j;   
        }
        answer[1] = denom1;
        answer[0] = numer1 + numer2;
        return answer;
    }
    else if(denom1 > denom2)
    {
         for(i = 1; i <= denom1 * denom2; i++)
        {
            if((denom2 * i) % denom1 == 0)
            {
                break;
            }
        }
        denom2 = denom2 * i;
        numer2 = numer2 * i;
        
        if(denom1 != denom2)
        {
            j = denom2 / denom1;
        
            denom1 = denom1 * j;
            numer1 = numer1 * j;   
        }
        answer[1] = denom2;
        answer[0] = numer1 + numer2;
        return answer;
    }
    else
    {
        answer[0] = numer1 + numer2;
        answer[1] = denom1;
        return answer;
    }
}