#include <iostream>

using namespace std;

int main(){
	int sum = 0;
	int value;
	while(cin >> value){
		sum += value;
	}
	cout << "Sum: " << sum << endl;

	return 0;
}