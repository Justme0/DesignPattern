#ifndef ITERATOR_H_
#define ITERATOR_H_

template<class T> 
class Iterator {
public:
    virtual ~Iterator() {}
    virtual bool HasNext() = 0;
    virtual T *Next() = 0;
};
#endif /* ITERATOR_H_ */
