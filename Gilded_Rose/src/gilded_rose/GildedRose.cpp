#include "GildedRose.h"

GildedRose::GildedRose(vector<Item *> &items)
    : items(items) {}

GildedRose::~GildedRose() {
  for (auto &item : items) {
    delete item;
  }
}

void GildedRose::updateQuality() {
  for (int i = 0; i < items.size(); i++) {
    Item *&pItem = items[i];

    if (pItem->name != "Aged Brie" && pItem->name != "Backstage passes to a TAFKAL80ETC concert") {
      if (pItem->quality > 0) {
        if (pItem->name != "Sulfuras, Hand of Ragnaros") {
          pItem->quality = pItem->quality - 1;
        }
      }
    } else {
      if (pItem->quality < 50) {
        pItem->quality = pItem->quality + 1;

        if (pItem->name == "Backstage passes to a TAFKAL80ETC concert") {
          if (pItem->sellIn <= 10) {
            if (pItem->quality < 50) {
              pItem->quality = pItem->quality + 1;
            }
          }

          if (pItem->sellIn <= 5) {
            if (pItem->quality < 50) {
              pItem->quality = pItem->quality + 1;
            }
          }
        }
      }
    }

    if (pItem->name != "Sulfuras, Hand of Ragnaros") {
      pItem->sellIn = pItem->sellIn - 1;
    }

    if (pItem->sellIn < 0) {
      if (pItem->name != "Aged Brie") {
        if (pItem->name != "Backstage passes to a TAFKAL80ETC concert") {
          if (pItem->quality > 0) {
            if (pItem->name != "Sulfuras, Hand of Ragnaros") {
              pItem->quality = pItem->quality - 1;
            }
          }
        } else {
          pItem->quality = pItem->quality - pItem->quality;
        }
      } else {
        if (pItem->quality < 50) {
          pItem->quality = pItem->quality + 1;
        }
      }
    }
  }
}

Item *GildedRose::createItem(string name, int sellIn, int quality) const { return new Item(name, sellIn, quality); }
