#include<iostream>
#include<string>
using namespace std;

void square() {
	int square1, square2, square3;
	int area1, area2, area3;
	int biggest_square = 0;

	cout << "Enter the sides of the squares: ";
	cin >> square1 >> square2 >> square3;

	if (square1 == 0 || square2 == 0 || square3 == 0) {
		cout << "Cmon buddy, you done know the area would be 0; that didn't make too much sense." << endl;
	}
	else{
		area1 = square1 * square1;
		area2 = square2 * square2;
		area3 = square3 * square3;

		if (area1 > area2 && area1 > area3) {
			biggest_square = area1;
		}
		else if (area2 > area1 && area2 > area3) {
			biggest_square = area2;
		}
		else if (area3 > area2 && area3 > area1) {
			biggest_square = area3;
		}
		cout << "The largest square has an area of: " << biggest_square;

	}
}

int main() {

	square();
	return 0;


}