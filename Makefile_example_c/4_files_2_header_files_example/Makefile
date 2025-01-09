all:main.o file1.o file2.o file3.o program

main.o:main.c header_file.h header_file1.h
	${CC} -c main.c
file1.o:file1.c header_file.h header_file1.h
	${CC} -c file1.c
file2.o:file2.c header_file.h header_file1.h
	${CC} -c file2.c
file3.o:file3.c header_file.h header_file1.h
	${CC} -c file3.c
program: main.o file1.o file2.o file3.o
	${CC} main.o file1.o file2.o file3.o -o program
clean :
	rm -rf *.o program

