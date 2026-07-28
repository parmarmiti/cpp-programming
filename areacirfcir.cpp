#include <iostream>
using namespace std;

int main()
{
    float radius;
    float pi = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area = " << pi * radius * radius << endl;
    cout << "Circumference = " << 2 * pi * radius;

}
