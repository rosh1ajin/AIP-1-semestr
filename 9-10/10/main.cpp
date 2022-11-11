#include <iostream>

using namespace std;

char x1 = 1;
char y1 = 1;

char x2 = -1;
char y2 = 1;

char x3 = -1;
char y3 = -1;

char x4 = 1;
char y4 = -1;

char Quarter(char x, char y) {
    if (x > 0 && y > 0)
        cout << "1 quarter";
    if (x < 0 && y > 0)
        cout << "2 quarter";
    if (x < 0 && y < 0)
        cout << "3 quarter";
    if (x > 0 && y < 0)
        cout << "4 quarter";
}

int main() {
    Quarter(x1,y1);
    Quarter(x2, y2);
    Quarter(x3, y3);
    Quarter(x4, y4);
}
