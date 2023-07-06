//Write a program to print the below pattern using nested for loop.

#include<stdio.h>
#include<conio.h>

void main(){

int x,y,z;

clrscr();
for(y=1;y<=5;y++)
{
for(z=1;z<=y;z++)
{
  printf(" ");
}
for(x=5;x>=y;x--)
{
  printf("%d",x);
}
  printf("\n");
}

getch();
}