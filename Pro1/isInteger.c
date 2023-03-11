#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//是整数返回0，反之返回1

int isInteger(char *n){
    int afterDot = 0;
    for(int i = 0; n[i] != '\0';i++){
        if(n[i] == '.'){
            afterDot = 1;
            continue;
        }
        if(afterDot == 1){
            if(n[i] != '0'){
                return 1;
            }
        }
    }
    return 0;
}