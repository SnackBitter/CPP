//Ҫ�� ʹ�ú�������ƽ��ֵ��ʹ�ú궨�����ƽ��ֵ�����ܽ���ߵ�����
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
/*int SQ(int y){
	return ((y)*(y));
}
int main(){
	int i=1;
	while(i<=5){//1,4,9,16,25
		printf("%d^2 = %d\n",(i-1),SQ(i++));
	}
	system("pause");
	return 0;
}*/

using namespace std;
#define SQ(y) y*y
int main(){
	cout<<SQ(9+3)<<endl;
	return 0;
}