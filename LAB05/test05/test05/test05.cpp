#include <iostream>
#include <string>
using namespace std;
double rArea(double leight, double width)
{
    double area = leight * width;
    return area;
}

double cArea(double r)
{
    const double PI = 3.14159;
    double carea = PI * r * r;
    return carea;

}
int main()
{
    double r, leight, width;
    cout << "=======Rectangle Area======= " << endl;
    cout << "Enter Length: ";
    cin >> leight;
    cout << "Enter Width: ";
    cin >> width;
    cout << "Area of Rectangle: " << rArea(leight, width) << endl;


    cout << "=======Circle Area======= " << endl;
    cout << "Enter Radius: ";
    cin >> r;
    cout << "Area of Circle: " << cArea(r) << endl;
    return 0;
}