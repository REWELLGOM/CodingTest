#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, v;
    cin >> N; 
    vector<int> numbers(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i]; 
    }
    
    cin >> v; 

    int count = 0;
    for (int num : numbers) {
        if (num == v) {
            count++; 
        }
    }

    cout << count << endl; 

    return 0;
}
