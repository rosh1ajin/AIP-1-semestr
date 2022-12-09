#include <iostream>

using namespace std;

struct robot {
    float weight, speed, dimensions;
};

void comparison(robot a, robot b) {
    if (a.robot < b.robot)
        cout << "weight - " << a.weight << " speed - " << a.speed << " dimensions - " << a.dimensions;
    if (b.robot < a.robot)
        cout << "weight - " << b.weight << " speed - " << b.speed << " dimensions - " << b.dimensions;
}

int main() {
    robot t1000;
    robot t150;
    t1000.weight = 0.1;
    t1000.speed = 1;
    t1000.dimensions = 0.001;
    t150.weight = 0.3;
    t150.speed = 2;
    t150.dimensions = 0.0001;
    comparison(t150, t1000);
    return 0;
}
