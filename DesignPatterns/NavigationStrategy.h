//
// Created by junio on 25.01.2024.
//

#ifndef STRATEGY_NAVIGATIONSTRATEGY_H
#define STRATEGY_NAVIGATIONSTRATEGY_H

class NavigationStrategy {
public:

   virtual void calculateRoute() =0;

   virtual ~NavigationStrategy();
};



#endif //STRATEGY_NAVIGATIONSTRATEGY_H
