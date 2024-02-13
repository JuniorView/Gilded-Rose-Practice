//
// Created by junio on 08.02.2024.
//

#include "ConcreteItemCreator.h"
Item * ConcreteItemCreator ::createItem(string name, int sellIn, int quality) const {
  if (name == "Backstage passes to a TAFKAL80ETC concert") {
    return new ExpiringItem(name, sellIn, quality);
  }
  if (name == "Sulfuras, Hand of Ragnaros") {
    return new LegendaryItem(name, sellIn, quality);
  }
  if (name == "Aged Brie") {
    return new MaturingItem(name, sellIn, quality);
  }
  if (name == "Conjured Mana Cake") {
    return new ConjuredItem(name, sellIn, quality);
  }

  return new NormalItem(name, sellIn, quality);
};
