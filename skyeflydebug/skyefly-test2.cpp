// This is a simple program to test the creation of the SkyeFly class
    // with separate header and cpp files 

//Header file for IO functions
#include<iostream>
#include "SkyeFly.h"
using namespace std;

//main function
int main ()
{
    SkyeFly skoi; //instantiating SkyeFly class
    double time_input; //defining user input

    cout << "Please input a time horizon value." << endl;
    cin >> time_input;
    
    
    skoi.setTimeHorizon(time_input);
    cout << "Value is: " << skoi.printTimeHorizon() << endl;
    return 0;
}