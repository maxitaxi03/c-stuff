#include<iostream>
using namespace std;

double avg(int N[], int n); 
int max(int N[], int n);
int main() {
	int N[100] = {};
	float sum = 0;
	int n;
	double average;
	int maximum = 0;
	int min = 0;

	

	cout << "Enter the amount of numbers you're calculating: ";
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "Enter the number then: ";
		cin >> N[i];
	}
	average = avg(N, n);
	cout <<"The average is: "<<average;
	cout << endl;
	cout << "Max part: "<<endl;

	max(N, n);
	maximum = N[n - 1];
	cout << "The maximum value is: " << maximum<<endl;
	min = max(N, n);
	cout << "The minimum value is: " << min<<endl;
	int range;
	range = maximum - min;
	cout << "The range is: " << range;




	return 0;




}

double avg(int N[], int n) {
	float sum = 0;
	double mean;

	for (int i = 0; i < n; i++) {
		sum += N[i];
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	mean = sum / n;
	return mean;
}
int max(int N[], int n) {
	int min = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; i < j; j--) {
			if (N[j] < N[j - 1]) {
				swap(N[j], N[j - 1]);
			}
		}
	}
	//max = N[n - 1];
	//return max;
	min = N[0];
	return min;

}