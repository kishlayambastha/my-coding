#include<stdio.h>
int main() {
    int a=6;
    int* x = &a;
    printf("%p\n", x);
    printf("%p\n", &x);
    printf("%p",*x);
    
    return 0;
}