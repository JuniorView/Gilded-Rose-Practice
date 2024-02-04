//
// Created by Ralf on 06.10.2022.
//

// I think Items could have a inheritance hierarchy.
// But I did not have the time to do it!

#include "ItemTypes.h"

const int BACKSTAGE_PASS_10_DAYS = 10;
const int BACKSTAGE_PASS_5_DAYS = 5;




ExpiringItem::ExpiringItem(string i_name, int i_sellIn, int i_quality) {
  name = i_name;
  sellIn = i_sellIn;
  quality = i_quality;
}
void ExpiringItem::updateItems() {

  if (sellIn > Min_Quality) {
    if (sellIn <= BACKSTAGE_PASS_10_DAYS && sellIn > BACKSTAGE_PASS_5_DAYS && quality <= 48) {
      this->quality += 2;
    } else if (sellIn <= BACKSTAGE_PASS_5_DAYS && quality <= 47) {
      quality += 3;
    } else {
      if (quality <= 49)
        quality++;
    }
  } else {
    quality = Min_Quality;
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



MaturingItem::MaturingItem(string i_name, int i_sellIn, int i_quality) {
  name = i_name;
  sellIn = i_sellIn;
  quality = i_quality;
};
void MaturingItem::updateItems() {

  if (quality < Max_Quality && sellIn > 0) {
    quality += 1;
  } else if (quality <= 48 && sellIn <= 0) {
    this->quality += 2;
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
};



ConjuredItem::ConjuredItem(string i_name, int i_sellIn, int i_quality) {
  name = i_name;
  sellIn = i_sellIn;
  quality = i_quality;
}

void ConjuredItem::updateItems() {

  if (quality > Min_Quality) {
    this->quality -= 2;
  }
  updatesellIn();

  // sicherstellen ,dass die  Qualität nicht negativ wird
  if (quality < Min_Quality) {
    quality = Min_Quality;
  }

  // Sicherstellen ,dass die Qualität nicht über 50 steigt (ausser bei" sulfuras" )
  if (quality > Max_Quality) {
    quality = Max_Quality;
  }
}



LegendaryItem::LegendaryItem(string i_name, int i_sellIn, int i_quality) {
  name = i_name;
  sellIn = i_sellIn;
  quality = i_quality;
}
void LegendaryItem::updateItems() {
  //
}