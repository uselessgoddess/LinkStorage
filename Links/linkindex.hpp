#ifndef LINKINDEX_HPP
#define LINKINDEX_HPP


template <typename T>
struct LinkIndex
{
    T root_as_source; // Корень дерева связей использующих эту связь как источник
    T left_as_source; // Левый узел дерева связи которую эта связь использует как источник
    T right_as_source; // Правый узел дерева связи которую эта связь использует как источник
    T size_as_source; // Размер, колечество узлов у этой связи
    T root_as_target;  // Корень дерева связей использующих эту связь как цель
    T left_as_target; // Левый узел дерева связи которую эта связь использует как цель
    T right_as_target; // Правый узел дерева связи которую эта связь использует как цель
    T size_as_target; // Размер, колечество узлов у этой связи
};


#endif
