//
// Created by junio on 08.02.2024.
//

#ifndef GILDEDROSE_CONCRETEITEMCREATOR_H
#define GILDEDROSE_CONCRETEITEMCREATOR_H
#include "ItemCreator.h"
#include "item.h"

class ConcreteItemCreator : public ItemCreator {

public:
   Item *createItem(string, int, int) const override;
};

#endif // GILDEDROSE_CONCRETEITEMCREATOR_H
