#include "iostream"
#include "ListNode.h"
#include "Queue.h.h"
#include "ListNode.cpp"
#include "Queue.cpp"
int main() {
    Queue myQueue;

    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);

    std::cout << "Front of the queue: " << myQueue.front() << std::endl;
    std::cout << "Back of the queue: " << myQueue.back() << std::endl;

    while (!myQueue.empty()) {
        std::cout << "Dequeued: " << myQueue.dequeue() << std::endl;
    }

    return 0;
}
