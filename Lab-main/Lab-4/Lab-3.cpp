#include <iostream>
using namespace std;

void moveDisk(int disk, int source, int target) {
    cout << disk << " " << source << " " << target << endl;
}

void hanoi(int n, int source, int auxiliary, int target) {
    if (n == 1) {
        moveDisk(1, source, target);
        return;
    }
    
    hanoi(n - 1, source, target, auxiliary);
    moveDisk(n, source, target);
    hanoi(n - 1, auxiliary, source, target);
}

int main() {
    int n;
    cin >> n;

    hanoi(n, 1, 2, 3); // Вызываем функцию для перемещения n дисков с первого стержня на третий
    return 0;
}
