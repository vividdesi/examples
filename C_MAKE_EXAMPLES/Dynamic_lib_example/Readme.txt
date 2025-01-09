dynamic
Create programs
Bash
Vi main.c
#include<stdio.h>
#include"header.h"
int main()
{
        add(2,5);
        sub(5,4);
        return 0;
}
Save :wq

bash
Vi header.h
#pragma once
void add(int,int);
void sub(int,int);
Save :wq


bash
Vi calc.c

#include<stdio.h>
#include"header.h"
void add(int a,int b)
{
        printf("The addition value is %d\n",a+b);
}
void sub(int a,int b)
{
        printf("The sub value is %d\n",a-b);
}

Save:wq

Bash
Vim CMakeLists.txt
make_minimum_required(VERSION 3.9.1)
project(static_lib)
add_library(calc SHARED calc.c)
add_executable(executable main.c)
target_link_libraries(executable calc)

Save:wq

Bash
Cmake -H. -Bbuild
Cd build 
Make
./executable
