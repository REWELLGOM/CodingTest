/*
    https://school.programmers.co.kr/learn/courses/30/lessons/12947
*/
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int count = 0, sum = 0;
    int origin = x;
    
    for (int i = 1; i < x; ++i) {
        if (x <= pow(10, i)) {
            break;
        }
        count++;
    }
    
    for (int n = count; n > 0; n--) {
        int divisor = pow(10, n); 
        sum += x / divisor;
        x = x % divisor; 
    }
    sum += x;  
    
    if (origin % sum == 0) {
        answer = true;
    } else {
        answer = false;
    }
    
    return answer;
}

/*
    다른 풀이
*/

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int src = x;
    int sum=0;
    while(x >0)
    {
        sum+=x%10;
        x/=10;
    }

    return src%sum==0;

}