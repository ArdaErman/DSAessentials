#include <iostream>

using namespace std;

int main() {

    int a = 10;
    int &r = a;

    int b = 30;
    r = b;

    printf("%d\n%d\n", a, r);
    return 0;
}