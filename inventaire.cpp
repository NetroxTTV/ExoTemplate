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

void Inventaire::OrderInv() {
    std::sort(m_inv.begin(), m_inv.end(), [](Item* pItem1, Item* pItem2){return pItem1->m_poidsObj < pItem2->m_poidsObj;});
}

void Inventaire::ShowInv() {
    m_poidsTotal = 0;
    for ( int i =0; i < m_inv.size(); i++ ) {
        m_poidsTotal += m_inv[i]->m_poidsObj;
        std::cout << m_inv[i]->m_nameObj << " " << m_inv[i]->m_poidsObj << std::endl;
    }
    std::cout << "\nPOIDS TOTAL : " << m_poidsTotal <<std::endl;
}

void Inventaire::FilterInv(std::function<bool(Item*)> filter) {
    auto it = std::remove_if(m_inv.begin(), m_inv.end(), filter);
    m_inv.resize(std::distance(m_inv.begin(), it));
}

void Inventaire::StatsInv(float seuil) {

    // POIDS MOYEN
    int sizeinv = m_inv.size();
    std::cout << m_poidsTotal/sizeinv << std::endl;
    //

    // POIDS TOTAL
    std::cout << m_poidsTotal;

    //  Nombre d'items pesant plus qu'un seuil donné
    FilterInv([seuil](Item* pItem1){return pItem1->m_poidsObj < seuil;});
    std::cout << m_inv.size();

}

std::vector<Item*>::iterator Inventaire::FindItem(const char* itemName) {

    return find_if(m_inv.begin(), m_inv.end(), [itemName](Item* item){ return item->m_nameObj == itemName; });

}
