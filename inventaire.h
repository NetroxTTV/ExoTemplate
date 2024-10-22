#ifndef INVENTAIRE_H
#define INVENTAIRE_H
#include <functional>
#include <vector>
#include "item.h"


class Inventaire {
public:
    Inventaire();
    ~Inventaire() = default ;
    int m_poidsTotal;

    std::vector<Item*> m_inv;

    void addItem(Item *item);
    void RemoveItem(const char* itemName);
    void FindObj(const char* itemName);
    void OrderInv();
    void FilterInv(std::function<bool(Item*)> filter);
    void ShowInv(bool e);

    void StatsInv(float seuil);



protected:
    std::vector<Item*>::iterator FindItem(const char* itemName);
};

#endif
