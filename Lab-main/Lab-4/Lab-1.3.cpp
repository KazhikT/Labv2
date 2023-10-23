#include <iostream>
using namespace std;

const int MAX_N = 10;

int calculateRoomArea(char maze[MAX_N][MAX_N], int N, int row, int col) {
    if (row < 0 || row >= N || col < 0 || col >= N || maze[row][col] == '*') {
        return 0;
    }

    maze[row][col] = '*';

    int area = 1 + calculateRoomArea(maze, N, row - 1, col) + calculateRoomArea(maze, N, row + 1, col)
        + calculateRoomArea(maze, N, row, col - 1) + calculateRoomArea(maze, N, row, col + 1);

    return area;
}

int main() {
    int N;
    cin >> N;

    char maze[MAX_N][MAX_N];
    for (int i = 0; i < N; i++) {
        cin >> maze[i];
    }

    int startRow, startCol;
    cin >> startRow >> startCol;

    int roomArea = calculateRoomArea(maze, N, startRow - 1, startCol - 1);

    cout << roomArea << endl;

    return 0;
}
