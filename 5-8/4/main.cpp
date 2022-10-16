#include <iostream>

using namespace std;

float H, M, W;

void data_input() {
    cout << "Enter step - ";
    cin >> W;
    cout << "Enter min - ";
    cin >> H;
    cout << "Enter max - ";
    cin >> M;
}

int main() {
    data_input();
    for (H; H <= M; H = H+W) {
        cout << H << " ";
    }
}
