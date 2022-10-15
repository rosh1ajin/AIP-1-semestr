//Пользователь вводит параметры фигуры. Найти периметр и площадь фигур:
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265

int main() {
   double a, b, alpha, h=0;
   cin >> a >> b >> alpha;
   h = ((a-b) / 2 ) * tan(alpha);
   cout << h * ( (a+b) / 2);
   return 0;
}
