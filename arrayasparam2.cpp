#include <iostream>

using namespace std;

int *fun(int size) {
    int *p;
    p = (int *)malloc(sizeof(size));
    for (int i = 0; i < size; i++) {
        p[i] = i + 1;
    }
    
    return p; // returns address of p[0] (to ptr in main)
}

int main() {

    int *ptr, sz = 5;
    ptr = fun(sz);
    printf("This is what address is ptr: %d, and what value is in ptr: %d\n\n", fun(sz), *ptr);

    for(int i = 0; i < sz; i++)
    cout << ptr[i] << endl;

    return 0;
}

