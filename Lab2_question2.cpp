// This program prints a series of triangles.
// Both the height and the character used to draw each 
// triangle are supplied by the user.

#include <iostream>
#include<string>
using namespace std;



// declare the function prototype for "DrawTriangle" here
void DrawTriangle(int h, char c);

    int main()
    {
        //local variables
        int height;          //the height of the triangle
        char character;      //the character used in drawing the triangle
        int stop = 1;
        cout << "Enter the height of the triangle. ";
        cout << "Enter the end-of-file character to quit. " << endl;
        cin >> height;
        cout << "Enter the character used to draw the triangle. ";
        cout << "Enter the end-of-file character to quit. " << endl;
        cin >> character;

        //loop to continue processing triangles until the user
        //type the end-of-file character.
        while (stop > 0)
        {
            cout << endl << endl;


            //fill in the activation statement for DrawTriangle here
            DrawTriangle(height, character);


            cout << "Enter the height of the triangle. ";
            cout << "Enter the end-of-file character to quit. " << endl;
            cin >> height;
            cout << "Enter the character used to draw the triangle. ";
            cout << "Enter the end-of-file character to quit. " << endl;
            cin >> character;
            cout << "Should we draw a next one? Negative number to stop. Positive number to contnue. " << endl;
            cin >> stop;
        }   //end of while loop
        return 0;
    }

    //fill in the function definition here 
    //Hint:  Use a nested loop to draw the triangle
    void DrawTriangle(int h, char c){
        // {
           //for (int i = 0; i < h; i++){
            //   for (int j = 0; j <= i; j++) {
               //    cout << c;
               //}
               //cout<<endl;
         //}
        
        int len;
        len = h.length();
}