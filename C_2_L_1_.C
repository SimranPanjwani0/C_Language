//WAP to perform all arithmetic such as +,-,*,/ and %

#include<stdio.h>
#include<conio.h>

void main ()
{

  int a,b;
  clrscr();
  printf("Enter the value of a : ");
  scanf("%d",&a);
  printf("Enter the value of b : ");
  scanf("%d",&b);
  printf("The sum of a and b is : ",a+b);
  printf("The subtraction of a and b is : ",a-b);
  printf("The multiplication of a and b is : ",a*b);
  printf("The divison of a and b is : ",a/b);
  printf("The modulo of a and b is : ",a%b);
  getch();
}