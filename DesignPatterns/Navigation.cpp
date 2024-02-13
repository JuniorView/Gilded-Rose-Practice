#include "Navigation.h"
#include <iostream>


Navigation::Navigation(NavigationStrategy* navigationStrategy,DisplayStrategy* displayStrategy1) : navigationStrategy(navigationStrategy), displayStrategy(displayStrategy1) {

}
void Navigation::init() {
    std::cout << "Welcome to the Simulator of Navigation Devices!" << std::endl;

    //this->calculateRoute();
    navigationStrategy->calculateRoute();
    displayStrategy->display();

}

void Navigation::setNavigationStrategy(NavigationStrategy *navigation_Strategy) {
    Navigation::navigationStrategy = navigation_Strategy;
}

Navigation::~Navigation() {
    delete navigationStrategy;
    delete displayStrategy;
}

void Navigation::setDisplayStrategy(DisplayStrategy *_displayStrategy) {
    Navigation::displayStrategy = _displayStrategy;
}
