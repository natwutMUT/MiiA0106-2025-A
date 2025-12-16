#include <iostream>
#include <string>
using namespace std;

int maxofThree(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}

int main()
{
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "The maximum value is: " << maxofThree(a, b, c) << endl;
    return 0;
}