// Call by value, call by address, call by reference
#include <iostream>

using namespace std;

/* // call by value (no impact when value change in function)
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1 = 10, num2 = 15;

    swap(num1, num2);

    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
} */

/* // call by address
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1 = 10, num2 = 15;

    swap(&num1, &num2);

    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
} */ 

// call by reference
void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int num1 = 10, num2 = 15;

    swap(num1, num2);

    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}