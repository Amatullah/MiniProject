project : Func_Main.o Func.o
	cc -o project Func_Main.o Func.o
Func_Main.o : Func.h Func_Main.c
	cc -c Func_Main.c -Wall
Func.o : Func.h Func.c
	cc -c Func.c -Wall
clean :
	rm *.o
