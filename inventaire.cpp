#include "inventaire.h"
#include <algorithm>
#include <iostream>
#include <ostream>


Inventaire::Inventaire() : m_inv(){
}

void Inventaire::addItem(Item *item) {

    m_inv.push_back(item);

}

void Inventaire::RemoveItem(const char* itemName) {

    m_inv.erase( FindItem(itemName));

}

void Inventaire::FindObj(const char* itemName) {
    Item* pItem = *FindItem(itemName);
    std::cout << "name : " << pItem->m_nameObj << " \nweight : " << pItem->m_poidsObj << "\n" << std::endl;
}

std::vector<Item*>::iterator Inventaire::FindItem(const char* itemName) {

    return find_if(m_inv.begin(), m_inv.end(), [itemName](Item* item){ return item->m_nameObj == itemName; });

}
