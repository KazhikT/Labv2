#ifndef FIXEDCAPACITYSTACK_H
#define FIXEDCAPACITYSTACK_H
#include <iostream>
template <class T>
class FixedCapacityStack {
private:
    T* a;         // Массив, содержащий элементы стека
    int n;        // Количество элементов в стеке
    int capacity; // Максимальный размер стека

public:
    FixedCapacityStack(int capacity);  // Конструктор
    ~FixedCapacityStack();             // Деструктор

    bool empty() const;               // Проверка на пустоту стека
    bool full() const;                // Проверка на полноту стека
    void push(T item);                // Добавить элемент в стек
    T pop();                          // Удалить вершину стека
    T top() const;                    // Вернуть значение вершины стека
};

template <class T>
FixedCapacityStack<T>::FixedCapacityStack(int capacity) {
    this->capacity = capacity;
    a = new T[capacity];
    n = 0;
}

template <class T>
FixedCapacityStack<T>::~FixedCapacityStack() {
    delete[] a;
}

template <class T>
bool FixedCapacityStack<T>::empty() const {
    return n == 0;
}

template <class T>
bool FixedCapacityStack<T>::full() const {
    return n == capacity;
}

template <class T>
void FixedCapacityStack<T>::push(T item) {
    if (!full()) {
        a[n++] = item;
    }
    else {
        std::cout << "Stack is full. Cannot push more elements." << std::endl;
    }
}

template <class T>
T FixedCapacityStack<T>::pop() {
    if (!empty()) {
        return a[--n];
    }
    else {
        std::cout << "Stack is empty. Cannot pop from an empty stack." << std::endl;
        return T(); // Вернуть значение по умолчанию для типа T, если стек пуст
    }
}

template <class T>
T FixedCapacityStack<T>::top() const {
    if (!empty()) {
        return a[n - 1];
    }
    else {
        std::cout << "Stack is empty." << std::endl;
        return T(); // Вернуть значение по умолчанию для типа T, если стек пуст
    }
}

#endif

