#include<stdio.h>
// function declarations
int input();
void display(int n1, int n2, char ch, int result);
void add(int n1, int n2);
void subtract(int n1, int n2);
// main function
int main()
{
  int n1, n2;
  n1 = input();
  n2 = input();

  add(n1, n2);
  subtract(n1, n2);
  
  return 0;
}

// function for taking input from user
int input()
{
  int n;
  printf("Enter number: ");
  scanf("%d",&n);
  return n;
}

// function for displaying the result.
void display(int n1, int n2, char ch, int result)
{
  printf("%d %c %d = %d\n", n1, ch, n2, result);
}

// function for addition of two numbers
void add(int n1, int n2)
{
  int result;
  result = n1 + n2;
  display(n1, n2, '+', result);
}

// function for subtraction of two numbers
void subtract(int n1, int n2)
{
  int result;
  result = n1 - n2;
  display(n1, n2, '-', result);
}
