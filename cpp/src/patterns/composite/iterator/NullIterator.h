#ifndef NULLITERATOR_H_
#define NULLITERATOR_H_

class NullIterator: public Iterator<MenuComponent> {
public:
    bool HasNext() {
        return false;
    }

    MenuComponent *Next() {
        return NULL;
    }
};
#endif /* NULLITERATOR_H_ */
