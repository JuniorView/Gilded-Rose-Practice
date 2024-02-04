#ifndef NAVIECONOMIC_H
#define NAVIECONOMIC_H


#include "NavigationStrategy.h"

class NaviEconomicStrategy: public NavigationStrategy {
private:
    void calculateRoute() override;
};


#endif //NAVIECONOMIC_H
