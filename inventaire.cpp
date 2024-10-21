#include "inventaire.h"

#include <algorithm>


Inventaire::Inventaire() : m_inv(){
}

void Inventaire::addItem(Item *item) {
    m_inv.push_back(item);
}

void Inventaire::RemoveItem(const char* itemName) {


    m_inv.erase( FindItem(itemName));

}

std::vector<Item*>::iterator Inventaire::FindItem(const char* itemName) {

    return find_if(m_inv.begin(), m_inv.end(), [itemName](Item* item){ item->m_nameObj = itemName; });

}
