#include <iostream>
#include "linked_list.h"

using namespace std;

int main() {
    utec::first::linked_list_t l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    for (int i = 0; i < l1.size(); i++) {
        cout << l1.item(i) << endl;
    }
    cout << "\n";
    l1.erase(1);
    for (int i = 0; i < l1.size(); i++) {
        cout << l1.item(i) << endl;
    }
    return 0;
}
