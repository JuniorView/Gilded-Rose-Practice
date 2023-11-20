#include "GildedRose.h"

 const int Max_Quality = 50;
 const int Min_Quality = 0;
GildedRose::GildedRose(vector<Item *> &items)
    
    : items(items) {}

GildedRose::~GildedRose() {
  for (auto &item : items) {
    delete item;
  }
}
void GildedRose:: updatesellIn(Item* item){
  item->sellIn -= 1;
}
void GildedRose::updateQuality_ForAgedBrie(Item* item){
  if(item->quality< Max_Quality && item->sellIn> Min_Quality){
    item->quality+=1;
  }else if(item->quality<=48 && item->sellIn<= Min_Quality){
    item->quality += 2;
  }
  updatesellIn (item);
}

void GildedRose::updateQuality_ForBackstagePasses(Item* item){
  if(item->sellIn> Min_Quality){
    if(item->sellIn<=10 && item->sellIn>5){
      item->quality+=2;
    }else if(item->sellIn<=5){
      item->quality+=3;
    }else{
      item->quality++;
    }
  }else{
    item->quality= Min_Quality;
  }
  updatesellIn(item);
}

void GildedRose::updateQuality_ForConjuredManacake(Item* item){
  // conjured Artikel verlieren doppekt so schnell an Qualität wie normale Artikel
  if(item->quality> Min_Quality){
    item->quality-=2;
  }
  updatesellIn(item);
}
void GildedRose::updateQuality_ForNormalItem(Item* item){
   if(item->quality> Min_Quality){
    item->quality -=1;
   }
   updatesellIn(item);
}
void GildedRose::updateQuality(){
  for (auto & pItem : items) {// using range-based
     if (pItem->typeOf()== EXPIRING){
      updateQuality_ForBackstagePasses(pItem);
     }else if(pItem->typeOf()== MATURING){
      updateQuality_ForAgedBrie(pItem);
     }else if(pItem->typeOf()==CONJURED){
      updateQuality_ForConjuredManacake(pItem);
     }else if(pItem->typeOf()==NORMAL){
      updateQuality_ForNormalItem(pItem);
     }else if(pItem->typeOf()==LEGENDARY){
      continue;
     }

     // sicherstellen ,dass die  Qualität nicht negativ wird
     if(pItem->quality< Min_Quality){
      pItem->quality= Min_Quality;
     }

     // Sicherstellen ,dass die Qualität nicht über 50 steigt (ausser bei" sulfuras" )
     if(pItem->quality > Max_Quality && pItem->typeOf()!= LEGENDARY){
      pItem->quality= Max_Quality;
     }
  }
}


Item *GildedRose::createItem(string name, int sellIn, int quality) const { return new Item(name, sellIn, quality); }
