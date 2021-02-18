
//This program draws a house by printing characters
//to the screen.

#include <iostream>

using namespace std;

// declare all function prototypes here
void PrintParallel();
void PrintIntersecting();
void PrintHorizontal();
void asterisk_circle();
void print_square();
void print_dollar_signs();

int main()
{
    PrintIntersecting();      //draw the roof
    PrintHorizontal();        //draw the base of the roof
    PrintParallel();          //draw the sides of the house
    PrintHorizontal();        //draw the base of the house 


    asterisk_circle();
    print_square();
    print_dollar_signs();
    return 0;
}


// function : PrintParallel()
// Print out two parallel lines

void PrintParallel()
{
    cout << "|        |" << endl;
    cout << "|        |" << endl;
    cout << "|        |" << endl;
    cout << "|        |" << endl;
    cout << "|        |" << endl;
    return;
}


// function : PrintIntersecting()
// Print out two intersecting lines

void PrintIntersecting()
{
    cout << "     $     " << endl;
    cout << "    $ $    " << endl;
    cout << "   $   $   " << endl;
    cout << "  $     $  " << endl;
    cout << " $       $ " << endl;
    return;
}


// function : PrintHorizontal()
// Print out a horizontal line

void PrintHorizontal()
{
    cout << "-----------" << endl;
    return;
}
void asterisk_circle() {
    cout << "\t\t\t*\t\t\t"<<endl;
    cout << "\t\t*\t\t*"<<endl;
    cout << "\t*\t\t\t\t*"<<endl;
    cout << "\t*\t\t\t\t*"<<endl;
    cout << "\t*\t\t\t\t*"<<endl;
    cout << "\t\t*\t\t*" << endl;
    cout << "\t\t\t*\t\t\t" << endl;

    return;
}
void print_square() {
    cout << "\t -------------------------------" << endl;
    cout << "\t|               \t\t|" << endl;
    cout << "\t|               \t\t|" << endl;
    cout << "\t|               \t\t|" << endl;
    cout << "\t|               \t\t|" << endl;
    cout << "\t|               \t\t|" << endl;
    cout << "\t -------------------------------" << endl;
    return;
}
void print_dollar_signs() {
    cout << "\t\t\t$\t\t\t" << endl;
    cout << "\t\t$\t\t$" << endl;
    cout << "\t$\t\t\t\t$" << endl;
    cout << "   $\t\t\t\t\t    $  " << endl;
    cout << "$\t\t\t\t\t\t$" << endl;
    return;
    
}