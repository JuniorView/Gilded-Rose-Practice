#ifndef NAVIECONOMIC_H
#define NAVIECONOMIC_H


#include "NavigationStrategy.h"

class NaviEconomicStrategy: public NavigationStrategy {
public:
    void calculateRoute() override;
    ~NaviEconomicStrategy() override=default;
};


#endif //NAVIECONOMIC_H
