//
// Created by Sebastian Knell on 4/11/20.
//

#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H

#include <cctype>
#include <iostream>
using namespace std;

namespace utec {
    struct node_t {
        int value_ = 0;
        node_t* next_ = nullptr;
    };

    inline namespace first {
        class linked_list_t {
            node_t* head_ = nullptr;
            node_t* tail_ = nullptr;
            size_t size_ = 0;
        public:
            // constructors
            linked_list_t() = default;
            linked_list_t(const linked_list_t& other);
            linked_list_t&operator=(const linked_list_t& other);
            /* Move constructors:
            linked_list_t(linked_list_t&& other) noexcept ;
            linked_list_t&operator=(linked_list_t&& other) noexcept ;
            */
            // destroyers
            ~linked_list_t();

            // add operations
            void push_front(int value);
            void push_back(int value);
            void insert(size_t index, int value);

            // remove operations
            void pop_front();
            void pop_back();
            void erase(size_t index);

            // traversal operations
            int& item(size_t index);
            const int& item(size_t index) const;

            // get size of list
            size_t size() const;
        };
    }
}

#endif //LINKED_LIST_LINKED_LIST_H
