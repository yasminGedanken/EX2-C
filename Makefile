CC = gcc 
OBJECT_MAIN = main.o
OBJECTS_LTB = myBank.o
FLAGS = -Wall



myBanky: liby.so $(OBJECTS_LTB)
	$(CC) $(FLAGS) -g -o myBanky $(OBJECT_MAIN) ./liby.so
liby.so: $(OBJECTS_LTB) 
	$(CC) -shared -o liby.so $(OBJECTS_LTB)
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -g -fPIC -c myBank.c
main.o: main.c myBank.h
	$(CC) $(FLAGS) -g -c main.c

.PHONY:clean 

clean:
	rm -f *.o *.so myBanky
