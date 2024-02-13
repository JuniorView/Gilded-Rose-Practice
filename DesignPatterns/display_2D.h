//
// Created by junio on 08.02.2024.
//

#ifndef STRATEGY_DISPLAY_2D_H
#define STRATEGY_DISPLAY_2D_H
#include "DisplayStrategy.h"
#include <iostream>

class display_2D : public DisplayStrategy {
public:
     void display() override;
     ~display_2D() override=default;
};


#endif //STRATEGY_DISPLAY_2D_H
