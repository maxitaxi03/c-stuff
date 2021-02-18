#include<iostream>
#include<string>
using namespace std;

enum EyeColor {brown, blue, green, grey, other}; //for switch case - based for selection
//function that returns value
float sum(float a, float b) {
	return a + b;
}
//function that returns nothing
void intro() {
	string name;
	int age;
	int salary[100];
	int j;
	int i, x;

	
	
	cout << "Enter the total number of employees: " << endl;
	cin >> j;
	cout << endl;
	
	for (i = 0; i < j; i++) {
		cout << "Enter name of employee" << endl;
		cin >> name;
		cout << "Age of Employee" << endl;
		cin >> age;
		cout << "Enter salary: ";
		cin >> salary[i];
	
	
	}
	for (i = 1; i < j; i++) {
		if (salary[0] < salary[i])
			salary[0] = salary[i];
		
	}
	cout << "the largest salary paid by company is: " << salary[0];
	cout << endl;
	for (i = 0; i < j; i++) {
		cout << salary[i];
	}
}
class Person {
private:
	float height;
	string name;
	int age;


public:
	void people() {
		cout << endl;
		cout << "Please enter your name" << endl;
		cin >> name;
		cout << "Please enter your age" << endl;
		cin >> age;
		cout << "please enter your height" << endl;
		cin >> height;
		cout << "You are:  " << name << "and you are " << age << "years old with a height of "<<height << endl;
	}
};
/* Parent class: this is a multilevel inheritence; there is a mutiple inheritence 
class MyClass {
public:
	void myFunction() {
		cout << "Some content in parent class.";
	}
};

// Child class
class MyChild : public MyClass {
};

// Grandchild class 
class MyGrandChild : public MyChild {
};
figure out what this multilevel inheritence would print
inheritence is using other classes(base/parent) to be used in other classes (child/derived) using the ':' symbol
*/

//--------------------------------------------------------------------------------------------------------------

/* Base class
class MyClass {
public:
	void myFunction() {
		cout << "Some content in parent class.\n";
	}
};

 Another base class
class MyOtherClass {
public:
	void myOtherFunction() {
		cout << "Some content in another class.\n";
	}
};

Derived class
class MyChildClass : public MyClass, public MyOtherClass {
};
this is a multiple inheritence between 2 base classes and a derived class
this uses the comma as the separator


*/

/*
this is a practical use of the inheritance
_____________________________

Base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

 Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
}; 




*/




int main()
{

	int x, y = 11;
	int counter = 0;
	int c = 0;
	string animals[20] = { "cat", "dog","cow","bee", "goat" };
	int i = 0;
	EyeColor eyeColor = brown;
	Person person;

	

	/*normal if else statement
	if (x == 10) {
		cout << x << "this is a nice number" << endl;
	}
	else {
		cout << x << "is not a nice number" << endl;
	}
	
	*/
	//instead of this, you can use ternary operator
	//x? cout << x << "this is a nice number" << endl: cout << x << "is not a nice number" << endl;

	/*nesting if else statements
	if (x = 10) {
		if (y = 11) {
			cout << "cha blood";
		}
		else
			cout << "go work";
	}*/
	

	//switch cases for the user-defined type

	

	/*
	switch (eyeColor) {
	case brown: cout << "imagine having brown eyes"; break;
	case blue: cout << "imagine having blue eyes"; break;
	case green: cout << "imagine having green eyes"; break;
	case grey: cout << "imagine having grey eyes"; break;
	case other: cout << "imagine having some other eye colour"; break; //break statements are used to stop the switch case when the case is true
	}
	*/

	//loops
	//while loops
	cout << "-while loops-"<<endl;
	while (counter <= 10) {
		cout << counter << endl;
		counter++;
	}
	//do while loops
	cout << "-dowile loops-"<<endl;
	do {
		cout << c << endl;
		c++;
	} while (c <= 10);
	//for loops
	

	for (i = 0; i < 5; i++) {
		cout << animals[i] << endl;
	}
	//functions
	cout << sum(2.4, 6.7) << endl;
	
	cout << endl;
	cout << "functions" << endl;
	intro();



	person.people();





	return 0;


}