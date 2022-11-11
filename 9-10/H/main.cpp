#include <iostream>

using namespace std;

float x;

void data_input() {
    cout << "enter the X coordinate" << endl;
    cin >> x;
}

int main() {
    float y;
    data_input();
    if (x > 3)
        y = 2 * x - 10;
    if (x == 3)
        y = 10;
    if (x < 3)
        y = (2 * x + 1,2)-1;
}
