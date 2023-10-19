#ifndef NAVIFAST_H
#define NAVIFAST_H


#include "Navigation.h"

    class NaviFast: public Navigation {
    private:
        void calculateRoute() override;
    };

#endif //NAVIFAST_H
