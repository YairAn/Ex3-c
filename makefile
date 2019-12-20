CC = gcc
AR = ar
FLAGS = -Wall -g

# $@ - the file on the left side of the :
# $< - the first name in the dependencies list
# $^ - the right side of :

all: txtfind isort
txtfind: main.o txtfind.o
	$(CC) $(FLAGS) -o $@ $^
isort: mainIsort.o isort.o
	$(CC) $(FLAGS) -o $@ $^
txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -fPIC -c $<
main.o: main.c txtfind.h
	$(CC) $(FLAGS) -c $<
isort.o: isort.c isort.h
	$(CC) $(FLAGS) -fPIC -c $<
mainIsort.o: mainIsort.c isort.h
	$(CC) $(FLAGS) -c $<

.PHONY: clean all

clean:
	rm -f *.o txtfind isort
