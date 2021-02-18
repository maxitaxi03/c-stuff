#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ifstream inside;
	ofstream outside;
	int x;
	inside.open("numbers.txt", ios::in);
	if (inside.fail()) {
		cerr << "There was some error opening this file. ";
		exit(1);
	}
	else {
		while (!inside.eof()) {
			inside >> x;
		}
		cout << x;
	}
	outside.open("numbers.txt", ios::app);
	if (outside.fail()) {
		cerr << "Error opening file. ";
		exit(1);
	}
	else {
		for (int i = x; i < x + 10; i++) {
			outside << i + 1 << endl;
		}
	}
	inside.close();
	outside.close();
	return 0;
}