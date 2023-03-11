# CPP Project 1���� ***Calculator***
## ������ 12012018
## **һ. ����������**
����ʹ����Make�������б����������
> make  //��ִ���ļ�����
>
�ļ�:
+ calculator.c
+ functions.h
+ isInteger.c
+ isNumber.c
+ Makefile

Makefile�ļ�:
```
calculator: calculator.o isInteger.o isNumber.o
	gcc -o calculator calculator.o isInteger.o isNumber.o
calculator.o: calculator.c
	gcc -c calculator.c
isInteger.o: isInteger.c
	gcc -c isInteger.c
isNumber.o: isNumber.c
	gcc -c isNumber.c
clean:
	rm calculator calculator.o isInteger.o isNumber.o
```
�������� **num1 ���� num2** �ĸ�ʽ�������뼴��
>./calculator 1 + 1 // ʾ��
>
---
## **��. ��������**
### *1. �ӷ�(+)*
```
./calculator 145 + 347
# ���ӦΪ:
145 + 347 = 492
```
### *2. ����(-)*
```
./calculator 87 - 23
# ���ӦΪ:
87 - 23 = 64

./calculator 45 - 123
# ���ӦΪ:
45 - 123 = -78
```
### *3. �˷�(x)*
**ע�⣺������ʹ�õ�Сд��ĸx��Ϊ�˷��ķ���**
```
./calculator 123 x 456
# ���ӦΪ:
123 x 456 = 56088
```
### *4. ����(\\)*
```
./calculator 763 / 123
# ���ӦΪ:
763 / 123 = 6.20325203
```
---
## **��. �쳣����**
### *1. ����Ĳ�������*��
```
./calculator a x r
# ���������num�ֱ����ERROR��
ERROR: Input num1 is not a number!!
ERROR: Input num2 is not a number!!
```
### *2. ����ķ����쳣*
```
./calculator 12 * 34
# ���
ERROR: The input operator is illegal
```

### *3. ����0��Ϊ�����ĳ���*
```
./calculator 3.14 / 0
# ���
ERROR: The divisor cannot be 0!!
```
---
## **��. ���������µĴ���**
### *1. �����ֵĳ˷�*
```
./calculator 987654321 x 123456789
# ���
987654321 x 123456789 = 121932631112635269
```

---
## **��. �ܽ�**
### ����Ĵ����߼���: 
+ �����е���������long double���д洢�Լ����㣬��������ʱ���ڽ����ж�
+ ���Ϊ�������С�����0ȥ�����������Ͱ�С�������

�����������������ֱ����ж��Ƿ�Ϊ�����Լ��Ƿ�Ϊ����
```
int isInteger(char *n);
int isNumber(char *n);
```

�������ܵ�˼·�ܼ򵥣�������Ҫͬʱ��˴����֣�������С��������������쳣������Ҫ���ǵĶ������Ǻܶ�ģ�������ڸո�ѧϰc���Ե�����˵�ܶ�ķ����ܶ�Ŀⶼ���������ֲ�ģ�ѧϰ��ôʹ��Ҳ������ͦ���ʱ�䡣

�ܵ���˵����һ�����ŵĺ���Ŀ���ܹ���Ϥc���﷨��һЩ������ĵ��ã��������ֵĴ���Ҳ�ܹ�ʹ����c��һЩ��ֵ������и��õ���⡣

