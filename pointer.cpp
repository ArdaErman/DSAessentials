#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main() {

    /* int a = 10;
    int *p; // declaration (after use is dereferencing)
    p = &a; // initialization

    cout << a << endl;
    printf("using pointer %d", *p); */

    /* int A[5] = {2, 4, 6, 8, 10};
    int *p;
    p = A; // you don't have to give ampersand
    // when giving array name to pointer
    // don't use &A when it is array! Error

    for (int i = 0; i < 5; i++)
        cout << p[i] << endl; */

    /* int *p;
    p = (int *)malloc(5*sizeof(int));
    // p = new int[5]; in C++

    p[0] = 10; p[1] = 15; p[2] = 14; p[3] = 21; p[4] = 31;

    for (int i = 0; i < 5; i++)
        cout << p[i] << endl;

    // delete []p; C++
    free(p); // C */

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}