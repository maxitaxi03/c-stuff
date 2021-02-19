#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int month, day, year;
public:
	Date() {
		month = 1;
		day = 1;
		year = 1;
	}
	Date(int m, int d, int y){
		month = m;
		day = d;
		year = y;
	}
	int getMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	int getYear() {
		return year;
	}
	void setMonth(int m) {
		month = m;
		if (m == 0 || m > 12) {
			cerr << "Invalid data entry; only 12 months" << endl;
		}
	}
	void setDay(int d) {
		day = d;
		if (d == 0 || d > 31) {
			cerr << "Invalid data entry" << endl;
		}
	}
	void setYear(int y) {
		year = y;
	}
	void printDate() {
		cout << "The date is (M-D-Y): " << month << " " << " " << day << " " << year;
	}
	//void sameMonth(int month) {
	//	int 
	//}
};
int main(){
	Date date1;
	Date date2;
	cout << date1.getMonth() << "-" << date1.getDay() << "-" << date1.getYear() << endl;
	int month, day, year;
	int month2, day2, year2;

	cout << "Please enter a date (Month Day Year): ";
	cin >> month >> day >> year;

	date1.setMonth(month);
	date1.setDay(day);
	date1.setYear(year);

	date1.printDate();
	
	cout << "Please enter another date (Month Day Year: ";
	cin >> month2 >> day2 >> year2;

	date2.setMonth(month2);
	date2.setDay(day2);
	date2.setYear(year2);

	date2.printDate();
	return 0;
}