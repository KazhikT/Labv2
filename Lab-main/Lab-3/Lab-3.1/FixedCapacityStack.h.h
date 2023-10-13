#ifndef FIXEDCAPACITYSTACK_H
#define FIXEDCAPACITYSTACK_H




class FixedCapacityStack {
private:
    int* a;       // Массив, содержащий элементы стека
    int n;        // Количество элементов в стеке
    int capacity; // Максимальный размер стека

public:
    FixedCapacityStack(int capacity);  // Конструктор
    ~FixedCapacityStack();             // Деструктор

    bool empty() const;               // Проверка на пустоту стека
    bool full() const;                // Проверка на полноту стека
    void push(int item);              // Добавить элемент в стек
    int pop();                        // Удалить вершину стека
    int top() const;                  // Вернуть значение вершины стека
    friend std::ostream& operator<<(std::ostream& os, const FixedCapacityStack& st);  // Перегрузка оператора <<
};

FixedCapacityStack::FixedCapacityStack(int capacity) {
    this->capacity = capacity;
    a = new int[capacity];
    n = 0;
}

FixedCapacityStack::~FixedCapacityStack() {
    delete[] a;
}

bool FixedCapacityStack::empty() const {
    return n == 0;
}

bool FixedCapacityStack::full() const {
    return n == capacity;
}

void FixedCapacityStack::push(int item) {
    if (!full()) {
        a[n++] = item;
    }
    else {
        std::cout << "Stack is full. Cannot push more elements." << std::endl;
    }
}

int FixedCapacityStack::pop() {
    if (!empty()) {
        return a[--n];
    }
    else {
        std::cout << "Stack is empty. Cannot pop from an empty stack." << std::endl;
        return -1; // Вернуть какое-то значение по умолчанию, если стек пуст
    }
}

int FixedCapacityStack::top() const {
    if (!empty()) {
        return a[n - 1];
    }
    else {
        std::cout << "Stack is empty." << std::endl;
        return -1; // Вернуть какое-то значение по умолчанию, если стек пуст
    }
}

std::ostream& operator<<(std::ostream& os, const FixedCapacityStack& st) {
    for (int i = 0; i < st.n; i++) {
        os << st.a[i] << " ";
    }
    return os;
}
#endif
