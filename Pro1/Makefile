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
