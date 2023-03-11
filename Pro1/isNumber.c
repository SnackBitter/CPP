#include "functions.h"
#include <ctype.h>

//返回1表示不是num
int isNumber(char *n){
    int dotNum = 0;
    for(int i = 0; n[i] != '\0';i++){
        if(isdigit(n[i]) == 0){
            if((n[i] != '.') + dotNum == 0){
                dotNum++;
                continue;
            }
            return 1;
        }
    }
    return 0;
}
