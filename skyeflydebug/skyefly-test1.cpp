// This is a simple program to test the creation of the SkyeFly class.


#include<iostream> //header file for IO function
using namespace std;

class SkyeFly{ //creation of the SkyeFly class
    double value;
    public:
    void setValue(double);
    double printValue();
};


//definition of the SkyeFly functions
void SkyeFly::setValue(double input_val){
    value = input_val;
}

double SkyeFly::printValue(){
    return value;
}

//main function
int main ()
{
    SkyeFly skoi;
    double input;

    cout << "We are testing SkyeFly! Please input a double value." << endl;
    cin >> input;
    
    //instantiating SkyeFly class
    skoi.setValue(input);
    cout << "Value is: " << skoi.printValue() << endl;
    return 0;
}