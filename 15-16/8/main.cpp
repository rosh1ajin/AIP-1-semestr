#include <iostream>
#include <cmath>

using namespace std;

int mat[2][10];

void fillMat() {
    for (int j = 0; j < 10; j++) {
        mat[0][j] = rand() % 50 + 1;
        mat[1][j] = rand() % 3 + 1;
    }
}

void output() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void zadacha() {
    int numbest = 0;
    int Wbest = 0;
    for (int j = 0; j < 10; j++) {
        if (mat[1][j] == 3)
            if (mat[0][j] > Wbest) {
                Wbest = mat[0][j];
                numbest = j;
            }
        }

}

int main() {
    fillMat();
    output();
    zadacha();
    return 0;
}
