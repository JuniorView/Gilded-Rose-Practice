//
// Created by Ralf on 06.10.2022.
//

// Probably Item should have some methods, too.
// But be aware! Did you read the requirements?
// So do not touch this!

#ifndef ITEM_H
#define ITEM_H

#include <ostream>
#include <string>
#include <vector>

using namespace std;

// enum ItemType { LEGENDARY, CONJURED, MATURING, EXPIRING, NORMAL };

class Item {
public:
  const int Max_Quality = 50;
  const int Min_Quality = 0;

  string name;
  int sellIn;
  int quality;

  Item();

  friend ostream &operator<<(ostream &os, const Item &item);

  bool equals(const std::string name, int sellIn, int quality);

  void updatesellIn();

  virtual void updateAllItems() = 0;
  virtual ~Item() = default;

protected:
};

#endif // ITEM_H
