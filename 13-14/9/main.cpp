#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int n = 10;
    srand(time(NULL));
    int Digit = rand() % 100;
    int Arr[n];
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        Arr[i] = rand() % 100;
        cout << Arr[i] << ' ';
        if (Arr[i] > Digit) counter++;
    }
    cout << endl;
    cout << "BOLSHE 0: " << Digit;
    cout << endl;
     cout << "KOL-VO " << counter;
}
