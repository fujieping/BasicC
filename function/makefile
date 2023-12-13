count:demoFunc.o calculateFunc.o String.o
	gcc demoFunc.o calculateFunc.o String.o -o count

demoFunc.o:demoFunc.c
	gcc -c demoFunc.c -o demoFunc.o

calculateFunc.o:calculateFunc.c
	gcc -c calculateFunc.c -o calculateFunc.o

String.o:String.c
	gcc -c String.c -o String.o

clean:
	@rm -rf *.o count
