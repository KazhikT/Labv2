#include <iostream>
using namespace std;

int fibo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    setlocale(LC_ALL, "Rus");
    int n;
   
    cin >> n;

    int result = fibo(n);
    cout <<  result << endl;

    return 0;
}
