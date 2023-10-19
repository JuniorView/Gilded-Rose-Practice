#ifndef NAVIECONOMIC_H
#define NAVIECONOMIC_H


#include "Navigation.h"

class NaviEconomic: public Navigation {
private:
    void calculateRoute() override;
};


#endif //NAVIECONOMIC_H
