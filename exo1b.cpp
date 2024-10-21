#include "exo1b.h"

#include <iostream>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>

#include "inventaire.h"
#include "item.h"

int main() {

    Inventaire inventory;

    Item* chat = new Item("meow", 10);
    Item* liam = new Item("liam", 69);

    inventory.addItem(chat);
    inventory.addItem(liam);

    inventory.FindObj("liam");


    return 0;
}

