#include <iostream>

#include "Navigation.h"
//#include "NaviEconomicStrategy.h"
#include "NaviFastStrategy.h"
#include "NaviScenicStrategy.h"
//#include "NavigationStrategy.h"

int main() {
    //NaviFastStrategy c;
    //NaviScenicStrategy c;
    //NaviEconomicStrategy c;
    //c.init();
   // NavigationStrategy* navigationStrategy= new NaviFastStrategy() ;
   auto*  fastStrategy = new NaviFastStrategy(); // using auto to avoid duplicate the type.
   Navigation navigation( fastStrategy);
   navigation.init();

   auto* pStrategy = new NaviScenicStrategy();
   navigation.setNavigationStrategy(pStrategy); //change strategies at runtime
   navigation.init();

   delete fastStrategy;
   delete pStrategy;



    return 0;
}
