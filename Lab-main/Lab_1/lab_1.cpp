#include <iostream>
using namespace std;
const int M = 5;  // Размер массива A
const int N = 5;  // Размер массива B

void separateArrays(int* staticArray, int size, int*& positiveArray, int& positiveSize, int*& negativeArray, int& negativeSize, int*& zeroArray, int& zeroSize) {
    positiveSize = 0;
    negativeSize = 0;
    zeroSize = 0;

    for (int i = 0; i < size; ++i) {
        if (staticArray[i] > 0) {
            positiveSize++;
        }
        else if (staticArray[i] < 0) {
            negativeSize++;
        }
        else {
            zeroSize++;
        }
    }

    positiveArray = new int[positiveSize];
    negativeArray = new int[negativeSize];
    zeroArray = new int[zeroSize];

    int positiveIndex = 0;
    int negativeIndex = 0;
    int zeroIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (staticArray[i] > 0) {
            positiveArray[positiveIndex++] = staticArray[i];
        }
        else if (staticArray[i] < 0) {
            negativeArray[negativeIndex++] = staticArray[i];
        }
        else {
            zeroArray[zeroIndex++] = staticArray[i];
        }
    }
}




int main() {
    setlocale(LC_ALL, "Russian");

    


    /*
    int A[M]; // 2
    int B[N];
    // Вводите элементы массивов A и B
    cout << "Введите элементы массива A:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Введите элементы массива B:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    // Создайте третий массив для хранения общих элементов без повторений
    int C[M + N];
    int k = 0;

    // Пройдитесь по элементам массива B
    for (int i = 0; i < N; i++) {
        bool isDuplicate = false;

        // Проверьте, есть ли такой элемент в массиве A и отсутствует ли он в массиве C
        for (int j = 0; j < M; j++) {
            if (B[i] == A[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            C[k++] = B[i];
        }
    }

    // Пройдитесь по элементам массива A
    for (int i = 0; i < M; i++) {
        bool isDuplicate = false;

        // Проверьте, есть ли такой элемент в массиве B и отсутствует ли он в массиве C
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            C[k++] = A[i];
        }
    }

    

    // Выведите третий массив
   cout << "Общие элементы без повторений: ";
    for (int i = 0; i < k; i++) {
        cout << C[i] << " ";
    }
   cout << endl;*/

    /*

        int A[M];//3
        int B[N];

        // Вводите элементы массивов A и B
       cout << "Введите элементы массива A:" << endl;
        for (int i = 0; i < M; i++) {
            cin >> A[i];
        }

        cout << "Введите элементы массива B:" << endl;
        for (int i = 0; i < N; i++) {
           cin >> B[i];
        }

        // Создайте третий массив для хранения уникальных элементов
        int C[M + N];
        int k = 0;

        // Проверьте каждый элемент массива A
        for (int i = 0; i < M; i++) {
            bool isDuplicate = false;

            // Проверьте, есть ли такой элемент в массиве B
            for (int j = 0; j < N; j++) {
                if (A[i] == B[j]) {
                    isDuplicate = true;
                    break;
                }
            }

            // Если элемент не найден в массиве B, добавьте его в третий массив
            if (!isDuplicate) {
                bool alreadyInC = false;

                // Проверьте, не добавлен ли элемент ранее в третий массив
                for (int l = 0; l < k; l++) {
                    if (A[i] == C[l]) {
                        alreadyInC = true;
                        break;
                    }
                }

                // Если элемент не добавлен ранее, добавьте его
                if (!alreadyInC) {
                    C[k++] = A[i];
                }
            }
        }

        // Проверьте каждый элемент массива B
        for (int i = 0; i < N; i++) {
            bool isDuplicate = false;

            // Проверьте, есть ли такой элемент в массиве A
            for (int j = 0; j < M; j++) {
                if (B[i] == A[j]) {
                    isDuplicate = true;
                    break;
                }
            }

            // Если элемент не найден в массиве A, добавьте его в третий массив
            if (!isDuplicate) {
                bool alreadyInC = false;

                // Проверьте, не добавлен ли элемент ранее в третий массив
                for (int l = 0; l < k; l++) {
                    if (B[i] == C[l]) {
                        alreadyInC = true;
                        break;
                    }
                }

                // Если элемент не добавлен ранее, добавьте его
                if (!alreadyInC) {
                    C[k++] = B[i];
                }
            }
        }

        // Выведите третий массив
       cout << "Элементы, не являющиеся общими без повторений: ";
        for (int i = 0; i < k; i++) {
           cout << C[i] << " ";
        }
        cout << endl;*/






/*
    int staticArray[] = { 3, -1, 0, 5, -2, 7, 0, -8 }; //8
    int size = sizeof(staticArray) / sizeof(staticArray[0]);

    int* positiveArray;
    int positiveSize;
    int* negativeArray;
    int negativeSize;
    int* zeroArray;
    int zeroSize;

    separateArrays(staticArray, size, positiveArray, positiveSize, negativeArray, negativeSize, zeroArray, zeroSize);

    cout << "Положительные элементы: ";
    for (int i = 0; i < positiveSize; ++i) {
        std::cout << positiveArray[i] << " ";
    }
    cout << std::endl;

    cout << "Отрицательные элементы: ";
    for (int i = 0; i < negativeSize; ++i) {
        cout << negativeArray[i] << " ";
    }
    cout << std::endl;

   cout << "Нулевые элементы: ";
    for (int i = 0; i < zeroSize; ++i) {
        cout << zeroArray[i] << " ";
    }
    cout << std::endl;

    // Освобождаем выделенную память
    delete[] positiveArray;
    delete[] negativeArray;
    delete[] zeroArray;
*/


    return 0;
}
