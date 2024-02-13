//
// Created by junio on 08.02.2024.
//

#ifndef STRATEGY_DISPLAY_3D_H
#define STRATEGY_DISPLAY_3D_H
#include "DisplayStrategy.h"
#include <iostream>

class display_3D: public DisplayStrategy {
public:
    ~display_3D() override= default;

     void display() override;

};


#endif //STRATEGY_DISPLAY_3D_H
