Creating a basic cmake file

I)Write a c program
Bash

Vi main.c
#include<stdio.h>
Int main()
{
printf(“hello world);
Return 0;
}
:wq


II)Create a CMakeList.txt
Bash
Vim CMakeList.txt
cmake_minimun_required(VERSION 3.91)
project(hello)
add_executable(executable main.c)

:wq


III)To run the script

     cmake .
  
     Creates Makefile and other files

     make
     To generate a executable code


IV)run the executable

     Bash
    ./executable
