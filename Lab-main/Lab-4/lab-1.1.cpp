#include <iostream>
#include <string>
using namespace std;

string zezda(const string& input, int a = 0, string out = "") {
    if (a >= input.length() - 1) {
        return out + input[a];
    }
    else {
        out += input[a];
        out += '*';
        return zezda(input, a + 1, out);
    }
}

int main() {
    string s;
    cin >> s;

    string result = zezda(s);
    cout << result << endl;

    return 0;
}
