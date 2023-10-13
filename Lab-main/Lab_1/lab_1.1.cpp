#include <iostream>
using namespace std;
// Функция для проверки, является ли число простым
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Функция для удаления простых чисел из массива
int* removePrimes(int* arr, int size, int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            arr[newSize++] = arr[i];
        }
    }

    // Создаем новый динамический массив
    int* newArray = new int[newSize];
    for (int i = 0; i < newSize; ++i) {
        newArray[i] = arr[i];
    }

    // Освобождаем исходный массив
    delete[] arr;

    return newArray;
}

int main() {
    setlocale(LC_ALL, "Russian"); //7
    int size = 10;
    int* arr = new int[size] {2, 3, 5, 7, 8, 11, 13, 16, 17, 19};
    int newSize;

    int* result = removePrimes(arr, size, newSize);

  cout << "Массив без простых чисел: ";
    for (int i = 0; i < newSize; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] result;

    return 0;
}
