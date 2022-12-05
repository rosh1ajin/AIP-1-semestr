#include <iostream>
#include <array>
#include <cmath>

using namespace std;

float nums[1000];
void filling() {
    for (int i = 0; i < 100; i++) {
        nums[i] = rand() % 100;
    }
    for (int i = 0; i < 100; i++) {
        cout << nums[i] << endl;
    }
}

int main() {
    filling();
    return 0;
}
