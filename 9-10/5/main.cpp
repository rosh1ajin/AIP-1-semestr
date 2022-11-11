#include <iostream>

using namespace std;

float A; float B; float C; float D;
void Minmax(float X, float Y) {
    float k;
    if (Y < X) {
        k = Y;
        Y = X;
        X = k;
    }
}

void data_input() {
    cout << "enter the values A B C D" << endl;
    cout << "A - ";
    cin >> A;
    cout << "B - ";
    cin >> B;
    cout << "C - ";
    cin >> C;
    cout << "D - ";
    cin >> D;
}


int main() {
    data_input();
    Minmax(A, B);
    Minmax(A, C);
    Minmax(A, D);
    Minmax(B, C);
    Minmax(C, D);
    return 0;
}
