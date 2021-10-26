//Brenda Kiptim - 081315 - DBIT EC
#include <iostream>
using namespace std;

int main()
{
    //declare and initialize variables
    int base = 10;
    int height = 7;
    int hypotenuse = 12;
    int area;
    int perimeter;

    // formula is area = 1/2 * height * base
    area = 0.5 * height * base;

    // formular of perimeter = height + base + hypotenuse
    perimeter = height + base + hypotenuse;
    cout << "If your height, base and hypotenuse are " << height << "  " << base << " and " << hypotenuse << " \n";
    cout << "The area of the right angled triange is " << area << " \n";
    cout << "The perimeter of the right angled triange is " << perimeter << " \n";

    return 0;
}