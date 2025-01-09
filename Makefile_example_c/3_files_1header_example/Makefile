

all: file1.o file2.o file3.o program

file1.o:
	${CC} -c  file1.c 
file2.o:
	${CC} -c  file2.c 
file3.o:
	${CC} -c file3.c 
program:
	${CC} file1.o file2.o file3.o -o program

clean:
	rm -rf *.o program
