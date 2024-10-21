#include "item.h"

#include <iostream>
#include <ostream>

Item::Item(const char* name, int poids) {
    m_nameObj = name;
    m_poidsObj = poids;
}