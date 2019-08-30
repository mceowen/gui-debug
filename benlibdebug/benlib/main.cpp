#include "BenLib.h"
#include <iostream>

int main(void) {
    BenLib bl;
    
    bl.setValue(1); 
    std::cout << "Hello" << bl.getValue();

    return 0;
}