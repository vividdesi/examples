#include<stdio.h>
#include"header_file.h"
#include"header_file1.h"
int main()
{
  printf("This is main file \n");
  int a=20,b=30,c=40,d=70;
  add(a,b);
  sub(a,b);
  div(c,d);
  mul(c,d);
  add_mul(a,b,c,d);
  return 0;
}

