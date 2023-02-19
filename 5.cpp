//5. Write a C++ program to calculate the volume of a cuboid.

#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;
    cout << "Enter the length, width, and height of the cuboid: ";
    cin >> length >> width >> height;
    volume = length * width * height;
    cout << "Volume of the cuboid = " << volume << endl;
    return 0;
}
