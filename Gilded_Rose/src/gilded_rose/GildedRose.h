#include "Item.h"
#include "ItemTypes.h"
#include "NormalItem.h"
#include "ItemCreator.h"
#include "ConcreteItemCreator.h"
#include <string>
#include <vector>

/*    NOTICE    */
/*   All the subtypes/subclasses(items) are implemented in ItemType.h   */

using namespace std;

class GildedRose {
public:
  vector<Item *> &items ;
  GildedRose(vector<Item *> &items);
  Item *createItem(string, int, int) const;

  virtual ~GildedRose();

  void updateQuality();

private:

  ItemCreator *itemCreator;
};
