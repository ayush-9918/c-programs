#include<stdio.h>
#include<stdlib.h>
int sum(int a, int b, int c){
    return a + b + c;
}
int main(int argc, char* argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    printf("%d\n", sum(a, b, c));
    return 0;
}