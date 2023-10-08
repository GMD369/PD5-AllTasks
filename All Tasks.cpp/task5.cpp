#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void takeValues(string var)
{
    cout << "Enter the value of " << var << ": ";
}

main()
{
    float a, b, c, discriminant;

    takeValues("a"); cin >> a;
    takeValues("b"); cin >> b;
    takeValues("c"); cin >> c;

    discriminant = pow(b, 2) - (4 * a * c);

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant))/(2*a);
        float root2 = (-b - sqrt(discriminant))/(2*a);
        cout << "Solutions: x = " << root1 << " and x = " << root2;
    }
    if (discriminant == 0) {
        float root = -b/(2*a);
        cout << "Solution: x = " << root;
    }
    if (discriminant < 0) {
        cout <<
        "Complex Solutions: x = " << (-b/(2*a)) << " + " << (sqrt(-discriminant)/(2*a)) << "i";
        cout <<
        " and x = " << (-b/(2*a)) << " - " << (sqrt(-discriminant)/(2*a)) << "i";
    }
}