#include <iostream>
#include <string>
using namespace std;

void swapValues(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Before Swap: x = " << a << ", y = " << b << endl;
    swapValues(a, b);
    cout << "After Swap: x = " << a << ", y = " << b << endl;

    return 1;
}