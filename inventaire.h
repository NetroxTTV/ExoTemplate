#ifndef INVENTAIRE_H
#define INVENTAIRE_H
#include <vector>
#include "item.h"


class Inventaire {
public:
    Inventaire();
    ~Inventaire() = default ;

    std::vector<Item*> m_inv;

    void addItem(Item *item);
    void RemoveItem(const char* itemName);
    void FindObj(const char* itemName);

protected:
    std::vector<Item*>::iterator FindItem(const char* itemName);
};

#endif
