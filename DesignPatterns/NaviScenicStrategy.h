#ifndef NAVISCENIC_H
#define NAVISCENIC_H

#include "NavigationStrategy.h"
#include "Navigation.h"

class NaviScenicStrategy: public NavigationStrategy {
private:
    void calculateRoute() override;
};



#endif //NAVISCENIC_H
