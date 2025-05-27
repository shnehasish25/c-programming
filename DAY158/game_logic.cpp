#include <iostream>

bool check_win(char b[3][3], char p) {
    for (int i = 0; i < 3; i++) {
        if (b[i][0] == p && b[i][1] == p && b[i][2] == p) return true;
        if (b[0][i] == p && b[1][i] == p && b[2][i] == p) return true;
    }
    if (b[0][0] == p && b[1][1] == p && b[2][2] == p) return true;
    if (b[0][2] == p && b[1][1] == p && b[2][0] == p) return true;
    return false;
}

int main() {
    char board[3][3] = {{'X','X','X'}, {' ',' ',' '}, {' ',' ',' '}};
    std::cout << "X won: " << check_win(board, 'X') << std::endl;
    return 0;
}
