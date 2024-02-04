#include "Navigation.h"
#include <iostream>


Navigation::Navigation(NavigationStrategy* navigationStrategy) : navigationStrategy(navigationStrategy) {

}
void Navigation::init() {
    std::cout << "Welcome to the Simulator of Navigation Devices!" << std::endl;

    //this->calculateRoute();
    navigationStrategy->calculateRoute();

}

void Navigation::setNavigationStrategy(NavigationStrategy *navigation_Strategy) {
    Navigation::navigationStrategy = navigation_Strategy;
}

Navigation::~Navigation() {
    delete navigationStrategy;
}
