#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout << "Enter two numbers" << endl;
	cin >> a >> b;
	if(a>b){
		a = a + b;
		b = a - b;
		a = a - b;
	}
	int i = a;
	while(i<=b){
		cout << i << endl;
		++i;
	}
	return 0;
}