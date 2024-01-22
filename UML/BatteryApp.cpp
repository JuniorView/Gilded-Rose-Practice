#include "BatteryApp.h"
#include <iostream>

BatteryApp::BatteryApp(SystemBattery &subject, std::string name) : subject(subject), name(std::move(name)) {
    std::cout <<"create batteryApp\n";
    this->subject.attach(this);
}

BatteryApp::~BatteryApp() {
    std::cout <<"delete BatteryApp \n";
    this->subject.detach(this);
}

void BatteryApp::update() {
    std::cout <<"method update entered \n";
    int newValue = this->subject.getData();
    std::cout << "This is " << name << "! Received value " << newValue << "\n";
    std::cout<<"method getData left \n";
}
