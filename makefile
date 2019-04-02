CC = gcc
CC_FLAGS = -g -ansi -pedantic -Wall
FILES = assignment1.c addStudents.c sort.c display.c

OUT_EXE = assignment1

build: $(FILES) 
	$(CC) $(CC_FLAGS) -o $(OUT_EXE) $(FILES)

clean:
	rm -f *.o core *.exe *~

rebuild: clean build
