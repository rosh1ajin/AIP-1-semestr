#include <iostream>

using namespace std;

struct sensor {
    float max, min, speed, erate;
};

void comparison(sensor a, sensor b) {
    if (a.erate < b.erate)
        cout << "min - " << a.min << " max - " << a.max << " speed - " << a.speed << " erate - " << a.erate;
    if (b.erate < a.erate)
        cout << "min - " << b.min << " max - " << b.max << " speed - " << b.speed << " erate - " << b.erate;
}

int main() {
    sensor mk40;
    sensor mk31;
    mk40.min = 0.1;
    mk40.max = 0.5;
    mk40.speed = 1;
    mk40.erate = 0.001;
    mk31.min = 0.3;
    mk31.max = 5;
    mk31.speed = 2;
    mk31.erate = 0.0001;
    comparison(mk40, mk31);
    return 0;
}
