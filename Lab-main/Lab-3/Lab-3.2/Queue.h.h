
#ifndef Queue_H
#define Queue_H
#include "ListNode.h"

class Queue {
private:
    ListNode<int>* first; // указатель на начало очереди
    ListNode<int>* last; // указатель на конец очереди
    int n; // количество элементов в очереди

public:
    // Конструктор: инициализация пустой очереди
    Queue();

    // Проверка на пустоту очереди
    bool empty() const;

    // Вернуть размер очереди
    int size() const;

    // Добавить элемент в очередь
    void enqueue(int item);

    // Удалить элемент из очереди
    int dequeue();

    // Вернуть значение первого добавленного элемента в очередь
    int front() const;

    // Вернуть значение последнего добавленного элемента в очередь
    int back() const;
};

#endif 