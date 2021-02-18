#include<iostream>
#include<fstream>
using namespace std;

int main() {
	//ifstream t;
	//t.open("numbers.txt");
	//if (t.fail()) {
//		cerr << "Error opening this file";
//		exit(1);
//	}
	//int x, y, z;
//	int count = -1, input;
	//t >> x >> y >> z;

	//cout << "Num 1 is: " << x;
	//cout << "Num 2 is: " << y;
	//cout << "Num 3 is: " << z;

//	while (!t.eof()) {
//		t >> input;
//		count++;
//	}
//	cout << count << " numbers found!";
	ofstream z;
	z.open("sample.txt");

	z << "This is sample text: " << 90 << endl;

	z.close();
	//t.close();
	return 0;
}