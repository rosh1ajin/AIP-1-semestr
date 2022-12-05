#include <iostream>
#include <array>
#include <cmath>

using namespace std;

float m1[10];
float m2[10];
float m3[10];

void filling(float a[10]) {
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 5 + 1;
    }
}

void creating_an_array() {
    for (int i = 0; i < 10; i++) {
        m3[i] = m1[i] / m2[i];
        std::cout << m3[i] << ' ';
    }
}

int main() {
}
