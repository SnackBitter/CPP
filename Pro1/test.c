#include <stdio.h>

int main(int argc, char *argv[]){
    long double a = 987654321.0;
    long double b = a*a;

    printf("%lld",(long long int)b);

    return 0;
}

