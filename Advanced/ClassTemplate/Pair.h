//
// Created by arwit on 2/11/2023.
//

#ifndef CLASSTEMPLATE_PAIR_H
#define CLASSTEMPLATE_PAIR_H

template<typename K, typename V>

class Pair {

private:
    K key;
    V value;
public:
    Pair(K key, V value);


};

template<typename K, typename V>
Pair<K, V>::Pair(K key, V value):key(key), value(value) {}


#endif //CLASSTEMPLATE_PAIR_H
