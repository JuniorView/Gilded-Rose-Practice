#include "Item.h"
#include "ItemTypes.h"
#include <string>
#include <vector>

using namespace std;

class GildedRose {
public:
  vector<Item *> &items;
  GildedRose(vector<Item *> &items);
  Item *createItem(string, int, int) const;

  virtual ~GildedRose();

  void updateQuality();
};
