#include<iostream>
#include<string>
using namespace std;

template <class t>
void bubblesort(t a[], int n){
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; i < j; j--) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
		}
	}
}

int main() {
	/*
	int number, remainder, reversed=0;

	cout << "Enter the number you wish to be returned backwards: ";
	cin >> number;

	while (number > 0) {
		remainder = number % 10;
		number = number / 10;
		reversed = (reversed * 10) + remainder;

	}
	cout << "The inverse of the number you just entered is: " << reversed;
	return 0;
	*/



	string word;
	int length;
	

	cout << "Enter a word to determine if this word is a palindrome or not- ";
	getline(cin, word);

	length = word.length();

	for (int i = 0; i < (length / 2); i++) {
		if (word[i] != word[(length - 1)-i]){
			cout << "The word entered is not a palindrome." << endl;
			break;

		}
		else {
			cout << "The word entered is a palindrome" << endl;
			break;
		}
	}


	int num[20];
	int n;
	int len = sizeof(num) / sizeof(num[0]);


	cout << "How many numbers do you want sorted? ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Enter the numbers you want added partner: ";
		cin >> num[i];
	}

	bubblesort<int>(num, n);
	for (int j = 0; j < len; j++) {
		cout << num[j] << " ";
	}



	return 0;






}