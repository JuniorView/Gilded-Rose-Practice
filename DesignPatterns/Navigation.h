#ifndef NAVIGATION_H
#define NAVIGATION_H
#include "NaviEconomicStrategy.h"
#include "DisplayStrategy.h"
class Navigation {
public:
    explicit Navigation(NavigationStrategy* navigationStrategy,DisplayStrategy* displayStrategy);
    void setNavigationStrategy(NavigationStrategy *navigation_Strategy);
    void setDisplayStrategy(DisplayStrategy *_displayStrategy);
    void init();
    ~Navigation();

private:
    //virtual void calculateRoute()=0; //removed from Navigation
    NavigationStrategy*  navigationStrategy;
    DisplayStrategy* displayStrategy ;






    // The copy constructor and the copy assignment operator should be declared private
    // For simplicity of the exercise we ignore the rule of three
    //Navigation(const Navigation&);
    //Navigation& operator=(const Navigation&);
};

#endif //NAVIGATION_H
