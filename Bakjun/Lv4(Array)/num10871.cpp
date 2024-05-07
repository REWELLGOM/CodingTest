#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num,maximum;
    cin>>num>>maximum;
    vector<int> numbers(num);

    for(int i = 0; i < num; i++)
    {
        cin>>numbers[i];
    }    
    for(int i = 0; i < num; i++)
    {
        if(numbers[i] < maximum)
        {
            cout<<numbers[i]<<" ";
        }
    }
    return 0;
}
