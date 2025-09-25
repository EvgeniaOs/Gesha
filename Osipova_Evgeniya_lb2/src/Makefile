all: menu

menu: menu.o max.o min.o diff.o sum.o max.h min.h diff.h sum.h
	gcc menu.o max.o min.o diff.o sum.o -o menu
	make clean

menu.o: menu.c max.h min.h diff.h sum.h   
	gcc menu.c -c -o menu.o

max.o: max.c max.h
	gcc max.c -c -o max.o

min.o: min.c min.h
	gcc min.c -c -o min.o

diff.o: diff.c diff.h
	gcc diff.c -c -o diff.o

sum.o: sum.c sum.h
	gcc sum.c -c -o sum.o

clean: 
	rm *.o
