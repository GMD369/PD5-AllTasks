#include <iostream>
using namespace std;

void calculatePoolState(int Vol, int x, int y, float h)
{
    float pool1Fill = x * h, pool2Fill = y* h;
    float fill = pool1Fill + pool2Fill;
    if (fill > Vol) {
        cout << "For " << h << " hours, the pool overflows with " << (fill - Vol) << " liters.";
    }
    if (fill <= Vol) {
        int fillPercentage = (fill/Vol) * 100;
        int pool1FillPercentage = (pool1Fill/fill) * 100, p2FillPercentage = (pool2Fill/fill) * 100;
        cout << "The pool is " << fillPercentage << "% full. Pipe 1: " << pool1FillPercentage << "%. Pipe 2: " << p2FillPercentage << "%.";
    }
}

int main()
{
    int Volume, pool1, pool2; float height;
    cout << "Enter volume of the pool in liters: "; cin >> Volume;
    cout << "Enter flow rate of the first pipe per hour: "; cin >> pool1;
    cout << "Enter flow rate of the second pipe per hour: "; cin >> pool2;
    cout << "Enter hours that the worker is absent: "; cin >> height;
    calculatePoolState(Volume, pool1, pool2, height);
}