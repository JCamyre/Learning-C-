#include <iostream>

using namespace std;

int main() {
    int a = 1025;
    int *p = &a;
    printf("size of integer %d bytes\n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    printf("Address = %d, value = %d\n", p+1, *(p+1)); // *(p+1) is garbage value we picked up

    char *p0;
    p0 = (char*)p; // typecasting. C++ doesn't like us trying to assign char pointer to address of int.
    printf("size of float %d bytes\n", sizeof(float));
    printf("Address = %d, value = %d\n", p0, *p0); // dereferencing with a float pointer pepelaugh. only reads the first byte in the address to get the value.

    // 1025 -> 00000000 00000000 00000100 00000001
    printf("Address = %d, value = %d\n", p0+1, *(p0+1)); // p0+1 goes to next memory address for chars (1 byte up). Dereferencing accesses the second byte of 1025 (00000100) -> 4
    
    float *p1;
    p1 = (float*)p; // something to do with how you can initialize pointer float* p1;
    printf("Address = %d, value = %d\n", p1+1, *(p1+1));
    // well this doesn't prove my point, we need a larger value

    void *p3 = p;
    printf("Address = %d", p3);


    return 0;
}