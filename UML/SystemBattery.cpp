#include "SystemBattery.h"
#include <iostream>

void SystemBattery::setBatteryLevel(int _data) {
    std::cout <<"method setBatteryLevel entered \n";
    this->BatteryLevel = _data;
    std::cout << "New value " << BatteryLevel << " received! \n";
    this->notify();
    std::cout<<"method setBatteryLevel left \n";
}

int SystemBattery::getData() const {
    std::cout <<"method getData entered \n";
    std::cout<<"method getData left \n";
    return this->BatteryLevel;

}
