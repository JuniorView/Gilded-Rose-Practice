//
// Created by junio on 04.02.2024.
//

#ifndef GILDEDROSE_NORMALITEM_H
#define GILDEDROSE_NORMALITEM_H

#include "Item.h"
class NormalItem : public Item {
public:
  NormalItem(string i_name, int i_sellIn, int i_quality);

  void updateItems() override;
};

#endif // GILDEDROSE_NORMALITEM_H
