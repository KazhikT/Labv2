#include "Queue.h.h"
Queue::Queue() {
    first = last = nullptr;
    n = 0;
}

bool Queue::empty() const {
    return n == 0;
}

int Queue::size() const {
    return n;
}

void Queue::enqueue(int item) {
    ListNode<int>* newNode = new ListNode<int>(item, nullptr);
    if (empty()) {
        first = last = newNode;
    }
    else {
        last->next = newNode;
        last = newNode;
    }
    n++;
}

int Queue::dequeue() {
    if (empty()) {
        std::cerr << "Queue is empty. Cannot dequeue from an empty queue." << std::endl;
        return -1; // Вернуть какое-то значение по умолчанию, если очередь пуста
    }
    int item = first->val;
    ListNode<int>* temp = first;
    first = first->next;
    delete temp;
    n--;
    return item;
}

int Queue::front() const {
    if (empty()) {
        std::cerr << "Queue is empty." << std::endl;
        return -1; // Вернуть какое-то значение по умолчанию, если очередь пуста
    }
    return first->val;
}

int Queue::back() const {
    if (empty()) {
        std::cerr << "Queue is empty." << std::endl;
        return -1; // Вернуть какое-то значение по умолчанию, если очередь пуста
    }
    return last->val;
}