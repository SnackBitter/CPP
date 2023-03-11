#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "functions.h"

int main(int argc, char *argv[]){
//�����������ʽ: num1 operator num2
    long double num1;
    long double num2;
    long double result;
    int isError = 0;
    char operator;

    

//��ȡ����
    if(isNumber(argv[1]) == 1){
        isError = 1;
        printf("ERROR: Input num1 is not a number!!\n");
    }else{
        sscanf(argv[1], "%Lf", &num1);
    }

    if(isNumber(argv[3]) == 1){
        isError = 1;
        printf("ERROR: Input num2 is not a number!!\n");
    }else{
        sscanf(argv[3], "%Lf", &num2);
    }
    
//��������
    operator = argv[2][0];
    switch (operator) {
        case '+' :
            result = num1 + num2;
            break;
        case '-' :
            result = num1 - num2;
            break;
        case 'x' :
            result = num1 * num2;
            break;
        case '/' :
            if (num2 == 0){
            //����Ϊ��
            printf("ERROR: The divisor cannot be 0!!\n");
            isError = 1;
            break;
            }
            result = num1 / num2;
            break;
        
        default: //�����operator�쳣
            printf("ERROR: The input operator is illegal\n");
            isError = 1;
            break;
    }

//������
    if(isError == 0){
        char temp[100];
        sprintf(temp,"%Lf",result);
        if(isInteger(argv[1]) ==0 ){
            printf("%lld",(long long int)num1);
        }else{
            printf("%0.9Lg", num1);
        }

        printf(" %s ",&operator);

        if(isInteger(argv[3]) == 0 ){
            printf("%lld = ",(long long int)num2);
        }else{
            printf("%0.9Lg = ", num2);
        }

        if(isInteger(temp) == 0 ){
            printf("%lld\n", (long long int)result);
        }else{
            printf("%0.9Lg\n", result);
        }
    }

    return 0;
}