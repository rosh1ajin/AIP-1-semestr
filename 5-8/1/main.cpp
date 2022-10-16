#include <iostream>

using namespace std;

float n;

void data_input() {
    cin >> n;
}

int main()
{
    data_input();
    for (int i = 0; i < n; i++) {
        cout << "" << endl;
        for (int j = -1; j < i; j++) {
            cout << "0";
        }
    }
    return 0;
}
