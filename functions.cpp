#include<iostream>
using namespace std;

int addition(int a, int b) {
	return (a + b);
}


int main() {
	int a, b;

	cout << "Enter any 2 numbers buddy: ";
	cin >> a >> b;

	

	cout << addition(a, b);
	
	return 0;

}