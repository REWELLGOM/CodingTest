#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    if(price >= 500000)
    {
        price = price * 0.8;
    }  
    else if(price >= 300000)
    {
        price = price * 0.9;
    }
    else
    {
        price = price * 0,95;
    }
    answer = price;
    return answer;
}