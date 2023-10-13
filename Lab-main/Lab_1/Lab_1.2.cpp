#include <iostream>
using namespace std;
const int M = 5;  // Размер массива A
const int N = 5;  // Размер массива B
int main() {
    setlocale(LC_ALL, "Russian");
  

    // Создание и заполнение массивов A и B
    int A[M];
    int B[N];

    cout << "Введите элементы массива A через пробел: ";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    cout << "Введите элементы массива B через пробел: ";
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    // Создание и заполнение третьего массива C
    int C[M + N]; // Максимальный размер третьего массива

    int index = 0; // Индекс для массива C

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (A[i] == B[j]) {
                bool isDuplicate = false;
                // Проверяем, не является ли элемент дубликатом в массиве C
                for (int k = 0; k < index; ++k) {
                    if (C[k] == A[i]) {
                        isDuplicate = true;
                        break;
                    }
                }
                if (!isDuplicate) {
                    C[index++] = A[i];
                }
            }
        }
    }

    // Выводим общие элементы
    cout << "Общие элементы массивов A и B: ";
    for (int i = 0; i < index; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}
