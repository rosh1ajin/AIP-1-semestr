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

void minabs() {
    float minI, min;
    for (int i = 1; i < 10; i++) {
        if (min > abs(nums[i])) {
            min = abs(nums[i]);
            minI = i;
        }
    }
}

void maxabs() {
    float maxI, max;
    for (int i = 1; i < 10; i++) {
        if (max < abs(nums[i])) {
            max = abs(nums[i]);
            maxI = i;
        }
    }
}

int main() {
    return 0;
}
