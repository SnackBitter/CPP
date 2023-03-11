#include <stdio.h>

int fib(int n){
    int result;
    if (n == 1)
        result = 1;
    else if (n == 2)
    {
        result = 1;
    }
    else  
        result = fib(n-2) + fib(n-1);
    return result;
}