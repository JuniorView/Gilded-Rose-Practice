//
// Created by Ralf on 06.10.2022.
//

// Probably Item should have some methods, too.
// But be aware! Did you read the requirements?
// So do not touch this!

#include "Item.h"
#include "ItemTypes.h"

Item::Item(){

};
bool Item::equals(const std::string name, int sellIn, int quality) {
  return this->name == name && this->sellIn == sellIn && this->quality == quality;
}

ostream &operator<<(ostream &s, const Item &item) {
  s << item.name << ", " << item.sellIn << ", " << item.quality;
  return s;
}

void Item::updatesellIn() { sellIn -= 1; }
