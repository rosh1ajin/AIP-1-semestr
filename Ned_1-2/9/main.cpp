//Мощность (гигакалорий, калорий, джоуль, эрг)
#include <iostream>

using namespace std;

int main()
{
    int begin = 1, val;
    cout << "1 - GigCC/min, 2 - CC/hour, 3 - Dj/hour, 4 - ERG/sec" << endl;
    cin >> begin;
    cout << "Power - ";
    cin >> val;
    switch (begin) {
    case 1:
        cout << "GigCC/min - " << val << " G" << endl;
        break;

    case 2:
        cout << "CC/hour - " << val * 100000 << " C" << endl;
        break;

    case 3:
        cout << "Dj/hour - " << val * 4186800000 << " D" << endl;
        break;
    case 4:
        cout << "ERG/sec - " << val * 1160000000 << " E" << endl;
        break;

    default:
        cout << "error" << endl;
        break;
    }
    return 0;
}
