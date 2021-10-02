#include<stdio.h>
   
int main() 
{
   int sum(int num1, int num2); 
   int sub(int num1, int num2);
   int num1, num2, add, diff;
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);
  add = sum(num1, num2);
 
   printf("\nAddition of two number is : %d",add);

   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);
   diff = sub(num1, num2);
   printf("\nDifference of two number is : %d",diff);

   return 0;
}
 int sum(int num1, int num2)
 {
   int a = num1 + num2;
   return a;
 }
int sub(int num1, int num2)
{
  int d = num1 - num2;
  return d;
}
