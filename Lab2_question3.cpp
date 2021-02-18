#include<iostream>
#include<fstream>
using namespace std;

void ProcessTests(ifstream &os);

int main() {
    float highest=0.0,         //the highest score in the file 
          lowest=0.0,          //the lowest score in the file
          average=0.0;         //the average score in the file
    ifstream  datafile;        //an input file stream object

    //open the data file
    datafile.open("lab2_p3.txt");
    if (datafile.fail()) {
        cerr << "Error opening file." << endl;
        exit(1);
    }
    // fill in the activation statement for function "ProcessTests" here
    ProcessTests(datafile);


    //cout << "The highest score is " << highest << endl;
    //cout << "The lowest score is " << lowest << endl;
    //cout << "The average score is " << average << endl;

    datafile.close();
    return 0;
}
// define the function here

// ProcessTests
// This function finds the highest, lowest, and
// the average test score

void ProcessTests(ifstream &os){
    int v;
    bool a = true;
    //cout << "Enter";
    float add=0.0;
    float avg=0.0;
    int high = 0;
    int low = 0;
    int count = 0;
    while (os >> v) {
        if (v > high) {
            high = v;
        }
        if (a) {
            low = v;
            a = false;
        }
        if (v < low) {
            low = v;
        }
        add += v;
        count++;
    }
    avg = add / count;
    cout << "The average is: " << avg<<endl;
    cout << "The amount of numbers are: " << count << endl;
    cout <<"The highest number in this list is: "<< high << endl;
    cout << "The lowest value in this list is: " << low;

 }
    



