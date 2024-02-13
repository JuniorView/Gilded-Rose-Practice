#ifndef NAVISCENIC_H
#define NAVISCENIC_H

#include "NavigationStrategy.h"
#include "Navigation.h"

class NaviScenicStrategy: public NavigationStrategy {
public :
    void calculateRoute() override;
    ~NaviScenicStrategy() override =default;
};



#endif //NAVISCENIC_H
