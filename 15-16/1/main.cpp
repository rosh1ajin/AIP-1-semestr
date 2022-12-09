#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int mat[5][5];

void fillingMat() {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            mat[i][j] = (rand() % 50) + 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void replacement() {
    int min = 0;
    int min_i = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
                min_i = i;
            }
        }
    }
    for (int j = 0; j < 5; j++)
        mat[min_i][j] = 0;
}

void outputMat() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cout << mat[i][j] << " ";
            cout << endl;

    }
}

int main() {
    fillingMat();
    cout << endl;
    replacement();
    cout << endl;
    outputMat();
    return 0;
}
