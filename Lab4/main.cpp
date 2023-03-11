#include <iostream>
#include "fib.h"

using namespace std;
int main(){
    start:
    cout<<"Please input a positive integer: ";
    int a;
    scanf("%d",&a);
    if(a<=0){
        goto start;
    }

    int t[a]{};

    for(int i = 0;i<a;i++){
        if(t[i] == 0){
            t[i] = fib(i+1);
        }
        printf("%d ",t[i]);
    }

    cout<<endl;

    return 0;
}