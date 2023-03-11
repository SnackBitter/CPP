#include <cstdio>
#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    float a = 0.1;
    float b = 0.2;
    float c = 0.3;

    //printf("%.2f\n%.2f\n%.2f\n",a,b,c);
    cout<<fixed<<setprecision(2)<<a<<"\n"<<fixed<<setprecision(2)<<b<<"\n"<<fixed<<setprecision(2)<<c<<endl; 
}