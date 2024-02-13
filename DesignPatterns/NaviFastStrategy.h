#ifndef NAVIFAST_H
#define NAVIFAST_H

#include "NavigationStrategy.h"
#include "Navigation.h"

    class NaviFastStrategy: public NavigationStrategy {
    public:
        void calculateRoute() override;
        ~NaviFastStrategy() override=default;
    };

#endif //NAVIFAST_H
