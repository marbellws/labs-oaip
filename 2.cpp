#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    double b1, q = 0.5;
    cout << "¬ведите b1: ";
    cin >> b1;
    cout << b1 / (1 - q);
    return 0;
}