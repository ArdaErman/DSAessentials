#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int length = 0, breadth = 0;
    cout << "Enter Length and Breadth: " << endl;
    cin >> length >> breadth;

    int area = length * breadth;
    int peri = 2*(length+breadth);

    printf("Area = %d\nPerimeter = %d\n", area, peri);

    return 0;
}