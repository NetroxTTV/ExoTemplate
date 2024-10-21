#ifndef ITEM_H
#define ITEM_H



class Item {
    public:

    Item(const char* name, int poids);
    ~Item() = default;

    const char* m_nameObj;
    int m_poidsObj;

};



#endif //ITEM_H
