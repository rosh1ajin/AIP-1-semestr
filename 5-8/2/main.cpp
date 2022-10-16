#include <iostream>
#include <cmath>

using namespace std;

void data_input() {
    float n, min, max;
    cout << "Enter step - ";
    cin >> n;
    cout << "\nEnter min - ";
    cin >> min;
    cout << "\nEnter max - ";
    cin >> max;
}

int main()
{
    float n, min, max;
    data_input();
    if (max < min)
        cout << "\nmin bigger than max";
    while (min < max) {
        cout << "\nX-" << min << " Y-" << pow(2 + min, 2) + 3 * min;
        min = min + n;
    }
}
