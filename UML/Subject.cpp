#include "Subject.h"
#include <iostream>
void Subject::attach(Observer *observer) {
    std::cout <<"method attach entered \n";
    this->observers.push_back(observer);
    std::cout<<"method  attach left \n";
}

void Subject::detach(Observer *observer) {
    std::cout <<"method detach entered \n";
    observers.remove(observer);
    std::cout<<"method detach left \n";
}

void Subject::notify() {
    std::cout <<"method notify entered \n";
    auto iterator = observers.begin();
    while (iterator != observers.end()) {
        (*iterator)->update();
        ++iterator;
    }
    std::cout<<"method notify left \n";
}

Subject::~Subject() = default;