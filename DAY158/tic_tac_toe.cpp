#include <iostream>
#include <vector>

class TicTacToe {
    char board[3][3];
public:
    TicTacToe() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) board[i][j] = ' ';
    }
    void print() {
        for (int i = 0; i < 3; i++) {
            std::cout << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << "\n";
            if (i < 2) std::cout << "-----\n";
        }
    }
    bool play(int r, int c, char player) {
        if (r >= 0 && r < 3 && c >= 0 && c < 3 && board[r][c] == ' ') {
            board[r][c] = player;
            return true;
        }
        return false;
    }
};

int main() {
    TicTacToe game;
    game.play(0, 0, 'X');
    game.play(1, 1, 'O');
    game.play(0, 1, 'X');
    game.print();
    return 0;
}
