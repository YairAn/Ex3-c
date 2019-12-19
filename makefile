CC = gcc
AR = ar
FLAGS = -Wall -g

# $@ - the file on the left side of the :
# $< - the first name in the dependencies list
# $^ - the right side of :

all: textfind isort
txtfind: main.o textfind.o
	$(CC) $(FLAGS) -o $@ $^
isort: mainIsort.o isort.o
	$(CC) $(FLAGS) -o $@ $^
textfind.o: textfind.c textfind.h
	$(CC) $(FLAGS) -fPIC -c $<
main.o: main.c textfind.h
	$(CC) $(FLAGS) -c $<
isort.o: isort.c isort.h
	$(CC) $(FLAGS) -fPIC -c $<
mainIsort.o: mainIsort.c isort.h
	$(CC) $(FLAGS) -c $<

.PHONY: clean all

clean:
	rm -f *.o textfind isort
