#include <gtest/gtest.h>

#include "GildedRose.h"
#include "Item.h"

// #define TEST_CONJURED_ITEMS

TEST(GildedRoseTest, Day01) {
  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  G.updateQuality();
  EXPECT_TRUE(G.items[0]->equals("+5 Dexterity Vest", 9, 19));
  EXPECT_TRUE(G.items[1]->equals("Aged Brie", 1, 1));
  EXPECT_TRUE(G.items[2]->equals("Elixir of the Mongoose", 4, 6));
  EXPECT_TRUE(G.items[3]->equals("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_TRUE(G.items[4]->equals("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_TRUE(G.items[5]->equals("Backstage passes to a TAFKAL80ETC concert", 14, 21));
  EXPECT_TRUE(G.items[6]->equals("Backstage passes to a TAFKAL80ETC concert", 9, 50));
  EXPECT_TRUE(G.items[7]->equals("Backstage passes to a TAFKAL80ETC concert", 4, 50));
}

TEST(GildedRoseTest, Day02) {
  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  G.updateQuality();
  G.updateQuality();

  EXPECT_TRUE(G.items[0]->equals("+5 Dexterity Vest", 8, 18));
  EXPECT_TRUE(G.items[1]->equals("Aged Brie", 0, 2));
  EXPECT_TRUE(G.items[2]->equals("Elixir of the Mongoose", 3, 5));
  EXPECT_TRUE(G.items[3]->equals("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_TRUE(G.items[4]->equals("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_TRUE(G.items[5]->equals("Backstage passes to a TAFKAL80ETC concert", 13, 22));
  EXPECT_TRUE(G.items[6]->equals("Backstage passes to a TAFKAL80ETC concert", 8, 50));
  EXPECT_TRUE(G.items[7]->equals("Backstage passes to a TAFKAL80ETC concert", 3, 50));
}

TEST(GildedRoseTest, Day05) {
  const int NO_OF_DAYS = 5;

  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_TRUE(G.items[0]->equals("+5 Dexterity Vest", 5, 15));
  EXPECT_TRUE(G.items[1]->equals("Aged Brie", -3, 8));
  EXPECT_TRUE(G.items[2]->equals("Elixir of the Mongoose", 0, 2));
  EXPECT_TRUE(G.items[3]->equals("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_TRUE(G.items[4]->equals("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_TRUE(G.items[5]->equals("Backstage passes to a TAFKAL80ETC concert", 10, 25));
  EXPECT_TRUE(G.items[6]->equals("Backstage passes to a TAFKAL80ETC concert", 5, 50));
  EXPECT_TRUE(G.items[7]->equals("Backstage passes to a TAFKAL80ETC concert", 0, 50));
}

TEST(GildedRoseTest, Day20) {
  const int NO_OF_DAYS = 20;

  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_TRUE(G.items[0]->equals("+5 Dexterity Vest", -10, 0));
  EXPECT_TRUE(G.items[1]->equals("Aged Brie", -18, 38));
  EXPECT_TRUE(G.items[2]->equals("Elixir of the Mongoose", -15, 0));
  EXPECT_TRUE(G.items[3]->equals("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_TRUE(G.items[4]->equals("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_TRUE(G.items[5]->equals("Backstage passes to a TAFKAL80ETC concert", -5, 0));
  EXPECT_TRUE(G.items[6]->equals("Backstage passes to a TAFKAL80ETC concert", -10, 0));
  EXPECT_TRUE(G.items[7]->equals("Backstage passes to a TAFKAL80ETC concert", -15, 0));
}

TEST(GildedRoseTest, Day30) {
  const int NO_OF_DAYS = 30;

  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
  items.push_back(G.createItem("Aged Brie", 2, 0));
  items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
  items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
  items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

  for (int i = 1; i <= NO_OF_DAYS; i++) {
    G.updateQuality();
  }

  EXPECT_TRUE(G.items[0]->equals("+5 Dexterity Vest", -20, 0));
  EXPECT_TRUE(G.items[1]->equals("Aged Brie", -28, 50));
  EXPECT_TRUE(G.items[2]->equals("Elixir of the Mongoose", -25, 0));
  EXPECT_TRUE(G.items[3]->equals("Sulfuras, Hand of Ragnaros", 0, 80));
  EXPECT_TRUE(G.items[4]->equals("Sulfuras, Hand of Ragnaros", -1, 80));
  EXPECT_TRUE(G.items[5]->equals("Backstage passes to a TAFKAL80ETC concert", -15, 0));
  EXPECT_TRUE(G.items[6]->equals("Backstage passes to a TAFKAL80ETC concert", -20, 0));
  EXPECT_TRUE(G.items[7]->equals("Backstage passes to a TAFKAL80ETC concert", -25, 0));
}

#ifdef TEST_CONJURED_ITEMS

TEST(NewConjuredItemsTest, Day01) {
  const int NO_OF_DAYS = 1;

  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int Max_Quality = 1; Max_Quality <= NO_OF_DAYS; Max_Quality++) {
    G.updateQuality();
  }
  cout << "\"Conjured\" items degrade in Quality twice as fast as normal items";

  EXPECT_TRUE(G.items[0]->equals("Conjured Mana Cake", 2, 4));
}

TEST(NewConjuredItemsTest, Day02) {
  const int NO_OF_DAYS = 2;

  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int Max_Quality = 1; Max_Quality <= NO_OF_DAYS; Max_Quality++) {
    G.updateQuality();
  }

  EXPECT_TRUE(G.items[0]->equals("Conjured Mana Cake", 1, 2));
}

TEST(NewConjuredItemsTest, Day05) {
  const int NO_OF_DAYS = 5;

  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int Max_Quality = 1; Max_Quality <= NO_OF_DAYS; Max_Quality++) {
    G.updateQuality();
  }

  EXPECT_TRUE(G.items[0]->equals("Conjured Mana Cake", -2, 0));
}

TEST(NewConjuredItemsTest, Day20) {
  const int NO_OF_DAYS = 20;

  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int Max_Quality = 1; Max_Quality <= NO_OF_DAYS; Max_Quality++) {
    G.updateQuality();
  }

  EXPECT_TRUE(G.items[0]->equals("Conjured Mana Cake", -17, 0));
}

TEST(NewConjuredItemsTest, Day30) {
  const int NO_OF_DAYS = 30;

  vector<Item *> items;
  GildedRose G(items);

  items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

  for (int Max_Quality = 1; Max_Quality <= NO_OF_DAYS; Max_Quality++) {
    G.updateQuality();
  }

  EXPECT_TRUE(G.items[0]->equals("Conjured Mana Cake", -27, 0));
}
#endif
