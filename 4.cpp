//4. Write a C++ program to calculate the area of a circle

#include <iostream>
using namespace std;

int main() {
    float radius, area;
    const float pi = 3.14159;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = pi * radius * radius;
    cout << "Area of the circle = " << area << endl;
    return 0;
}
