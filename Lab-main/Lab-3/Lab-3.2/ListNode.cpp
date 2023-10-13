
#include "ListNode.h"

template <class T>
ListNode<T>::ListNode() : val(0), next(nullptr) {}

template <class T>
ListNode<T>::ListNode(T x) : val(x), next(nullptr) {}

template <class T>
ListNode<T>::ListNode(T x, ListNode* next) : val(x), next(next) {}
