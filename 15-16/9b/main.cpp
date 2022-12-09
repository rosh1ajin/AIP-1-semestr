#include <iostream>

using namespace std;

struct chessbot {
    int charge_level, speed;
};

int chessboard[8][8];

void fillingMas(chessbot chessboard[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            chessboard[i][j].charge_level = rand() % 100 + 1;
            chessboard[i][j].speed = rand() % 4 + 1;
        }
    }
}

int main() {
    return 0;
}
