
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    double x, y, z;
    cout << "Введите длины сторон: ";
    cin >> x >> y >> z;
    if ((x + y) > z && (z + y) > x && (x + z) > y) cout << "Треугольник существует";
    else cout << "Треугольник не существует";

    return 0;
}

