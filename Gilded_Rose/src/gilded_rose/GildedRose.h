#include "Item.h"
#include <string>
#include <vector>
#include "ItemTypes.h"


using namespace std;

class GildedRose {
public:
  vector<Item *> &items;
  GildedRose(vector<Item *> &items);
  Item *createItem(string, int, int) const;

  void updateQuality();
  virtual ~GildedRose();
  static void updateQuality_ForAgedBrie(Item *item);
  static void updatesellIn(Item *item);
  static void updateQuality_ForBackstagePasses(Item *item);
  static void updateQuality_ForConjuredManacake(Item *item);
  static void updateQuality_ForNormalItem(Item *item);
};
