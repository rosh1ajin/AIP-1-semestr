#include <iostream>
#include <cmath>
using namespace std;

void zadD() {
    float x, y;
    cin >> x;
    if (x>1) {
        y = 3 * x - 7;
    }
    if (x == 1) {
        y = 3;
    }
    if (x < 1) {
        y = 3 * abs(x+2) - 7;
    }
}

void zadG() {
    float x, y;
    cin >> x;
    if (x > -8) {
        y = pow(2 + x,2) + 7;
    }
    if (x == -8) {
        y = 5;
    }
    if (x < -8) {
        y = abs(2 * x - 1) - 1;
    }
}

int main() {

}
