#include "Navigation.h"
#include <iostream>


Navigation::Navigation(){
}
void Navigation::init() {
    std::cout << "Welcome to the Simulator of Navigation Devices!" << std::endl;

    this->calculateRoute();
}

