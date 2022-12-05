#include <iostream>
#include <array>
#include <cmath>

using namespace std;

float nums[10];

void filling() {
    for (int i = 0; i < 10; i++) {
        nums[i] = rand() % 30 - 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << nums[i] << endl;
    }
}

void sum9() {
    float sum;
    for (int i = 1; i < 10; i++) {
        if (nums[i] > 9) {
            sum = sum + nums[i];
        }
    }
}

void sum20() {
    float sum;
    for (int i = 1; i < 10; i++) {
        if (nums[i] < 20) {
            sum = sum + nums[i];
        }
    }
}

void sumif3() {
    float sum;
    for (int i = 1; i < 10; i++) {
        if (nums[i] < 3) {
            sum = sum + nums[i];
        }
    }
}

int main() {
    filling();
    return 0;
}
