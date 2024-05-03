/*
    끝이 알려지지않을 경우 어떻게 해야하는지가 관건인 문제이다
*/
#include <iostream>
using namespace std;
 
int main(int argc, const char *argv[]) {
 
	int a, b;
	while (!(cin >> a >> b).eof()) {	
		cout << a + b <<endl;
	}
 
	return 0;
}