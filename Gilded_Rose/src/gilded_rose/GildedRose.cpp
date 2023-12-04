#include "GildedRose.h"

GildedRose::GildedRose(vector<Item *> &items)

    : items(items){};

GildedRose::~GildedRose() {
  for (auto &item : items) {
    delete item;
  }
};

void GildedRose::updateQuality() {
  for (auto &pitem : items) {
    pitem->updateAllItems();
  }
};

Item *GildedRose::createItem(string name, int sellIn, int quality) const {
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
