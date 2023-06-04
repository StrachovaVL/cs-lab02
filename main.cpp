#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:\n";
    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
    << "A - B = " << a - b << '\n'
    << "A * B = " << a * b << '\n'
    << "A / B = " << a / b << '\n';
    cout << "Max number: ";
    if (a > b)
    {
        cout << a << '\n';
    }
    else
    {
        cout << b << '\n';
    }
    cout << "Min number: ";
    if (a < b)
    {
        cout << a << '\n';
    }
    else
    {
        cout << b << '\n';
    }
    return 0;
}
