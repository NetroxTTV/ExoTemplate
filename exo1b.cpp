#include "exo1b.h"

#include <iostream>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>

#include "inventaire.h"
#include "item.h"

int main() {

    int crit;
    Inventaire inventory;

    Item* chat = new Item("meow", 10);
    Item* chien = new Item("chien", 100);
    Item* liam = new Item("liam", 69);

    inventory.addItem(chat);
    inventory.addItem(chien);
    inventory.addItem(liam);

    inventory.FilterInv([](Item* pItem1){return pItem1->m_poidsObj < 5.0f;});
    inventory.ShowInv();
    inventory.StatsInv(15.0f);
    return 0;
}

