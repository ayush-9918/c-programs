#include<stdio.h>
#include<stdlib.h>
int sum(int a, int b){
    return a + b;
}
int main(int argc, char* argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("%d\n", sum(a, b));
    return 0;
}