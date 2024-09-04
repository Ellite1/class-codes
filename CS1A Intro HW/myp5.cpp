/*
Write a C++ Program that declares 2 variables x, and y (both integer) 
and reads value of x from the input and assigns twice as x into y and 
print both x and y on the screen.
*/
#include<iostream>
using namespace std; 
int main() {

    // Declaring variables
    int x;
    int y;

    // Prompting user for input x
    cout << "x: ";
    cin >> x ;

    y = 2 * x;

    // Prompting user for input y

    cout << "\ny: " << y << endl;  

    return 0;
}