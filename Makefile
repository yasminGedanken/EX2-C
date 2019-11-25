myBanky: liby.so main.o
	gcc -Wall -g -o myBanky main.o ./liby.so
liby.so: myBank.o 
	gcc -shared -o liby.so myBank.o
myBank.o: myBank.c myBank.h
	gcc -Wall -g -fPIC -c myBank.c
main.o: main.c myBank.h
	gcc -Wall -g -c main.c

.PHONY:clean

clean:
	rm -f *.o *.so myBanky