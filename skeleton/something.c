#include <stdio.h>

int mul(int a, int b) {
    return a*b;
}

int add(int a, int b) {
    int c = mul(a, b);
    return a+b+c;
}

int main(int argc, char *argv[]) {
    printf("Hello world!, %d\n", add(10, 20));

}