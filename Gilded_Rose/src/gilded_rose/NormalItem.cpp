//
// Created by junio on 04.02.2024.
//

#include "NormalItem.h"
NormalItem::NormalItem(string i_name, int i_sellIn, int i_quality) {
  name = i_name;
  sellIn = i_sellIn;
  quality = i_quality;
}
void NormalItem::updateItems() {

  if (quality > Min_Quality) {
    quality--;
  }
  updatesellIn();

  // sicherstellen ,dass die  Qualität nicht negativ wird
  if (this->quality < Min_Quality) {
    this->quality = Min_Quality;
  }

  // Sicherstellen ,dass die Qualität nicht über 50 steigt (ausser bei" sulfuras" )
  if (this->quality > Max_Quality) {
    this->quality = Max_Quality;
  }
}