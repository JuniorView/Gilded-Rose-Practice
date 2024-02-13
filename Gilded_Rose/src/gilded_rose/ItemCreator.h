//
// Created by junio on 08.02.2024.
//

#ifndef GILDEDROSE_ITEMCREATOR_H
#define GILDEDROSE_ITEMCREATOR_H
#include "item.h"
#include "ItemTypes.h"
/*   All  the subtypes/subclasses(items) are implemented in ItemTypte.h   */
#include "NormalItem.h"

class ItemCreator {

public:
   virtual Item *createItem(string, int, int) const =0 ;
   virtual ~ItemCreator()=default ;
};

#endif // GILDEDROSE_ITEMCREATOR_H
