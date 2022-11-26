#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
class LinkedList;

template <typename T>
class Node
{
private:
    T elem;
    Node<T> *next;

    friend class LinkedList<T>;
};

template <typename T>
class LinkedList
{
private:
    Node<T> *head;

public:
    LinkedList();
    ~LinkedList();
    bool empty() const;
    const T& front() const;
    void addFront(const T&);
    void removeFront();
};

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <typename T>
LinkedList<T>::~LinkedList() {
    while ( !empty() ) {
        removeFront();
    }
}

template <typename T>
bool LinkedList<T>::empty() const {
    return head == nullptr;
}

template <typename T>
const T& LinkedList<T>::front() const {
    return head->elem;
}

template <typename T>
void LinkedList<T>::addFront( const T& e) {
    Node<T> *v = new Node<T>;
    v->elem = e;
    v->next = head;
    head = v; 
} 

template <typename T>
void LinkedList<T>::removeFront() {
    Node<T> *old = head;
    head = old->next;
    delete old;
}

#endif