#ifndef NAVIFAST_H
#define NAVIFAST_H

#include "NavigationStrategy.h"
#include "Navigation.h"

    class NaviFastStrategy: public NavigationStrategy {
    private:
        void calculateRoute() override;
    };

#endif //NAVIFAST_H
