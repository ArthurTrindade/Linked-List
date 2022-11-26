#include <iostream>

#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList<int> a;

    cout << a.empty() << endl;

    a.addFront(100);
    cout << a.empty() << endl;

    cout << a.front() << endl;

    a.removeFront();
    cout << a.empty() << endl;

    return 0;
}