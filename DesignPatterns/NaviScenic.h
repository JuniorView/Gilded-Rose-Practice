#ifndef NAVISCENIC_H
#define NAVISCENIC_H

#include "Navigation.h"

class NaviScenic: public Navigation {
private:
    void calculateRoute() override;
};



#endif //NAVISCENIC_H
