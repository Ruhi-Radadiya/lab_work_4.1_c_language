#include<stdio.h>
#include<conio.h>
void main()
{
int A,B;
clrscr();
printf("enter value of A:");
scanf("%d",&A);
printf("enter value of B:");
scanf("%d",&B);
A=A+B;
B=A-B;
A=A-B;
printf("A=%d\n",A);
printf("B=%d",B);
getch();
}