//
// Created by Ralf on 06.10.2022.
//

// I think Items could have a inheritance hierarchy.
// But I did not have the time to do it!

#ifndef GILDEDROSE_ITEMTYPES_H
#define GILDEDROSE_ITEMTYPES_H

#include <string>
#include <vector>
using namespace std;

#include "Item.h"

// We should use inheritance but the goblin will not let me do it!
// Do not delete this code. You will need it!

class LegendaryItem : public Item {
public:
  LegendaryItem(string i_name, int i_sellIn, int i_quality);

  void updateItems() override;
};

class ConjuredItem : public Item {
public:
  ConjuredItem(string i_name, int i_sellIn, int i_quality);

  void updateItems() override;
};

class MaturingItem : public Item {
public:
  MaturingItem(string i_name, int i_sellIn, int i_quality);

  void updateItems() override;
};
class ExpiringItem : public Item {
public:
  ExpiringItem(string i_name, int i_sellIn, int i_quality);

  void updateItems() override;
};



#endif // GILDEDROSE_ITEMTYPES_H
