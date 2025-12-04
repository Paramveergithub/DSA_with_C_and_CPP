// Question 156**********Assignment-26_Question-5 ***************
// Write a recursive function to print reverse of a given number
/*
#include <stdio.h>
typedef struct {
  int last;
  int p;
} Result;
Result pNreverse(int n){
  Result result;
  int r = n % 10;
  if(n == 0){
    result.last = 0;
    result.p = 1;
    return result;
  }
  Result lastPD = pNreverse(n / 10);
  result.last = lastPD.p * r + lastPD.last;
  result.p = lastPD.p * 10;
  return result;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  Result result = pNreverse(n);
  printf("Reverse of %d is %d\n", n, result.last);
  return 0;
}
*/

// Question 157**********Assignment-27_Question-1 ***************
// Write a recursive function to calculate sum of first N natural numbers
/*
#include <stdio.h>
int fNnaturalSum(int n){
  if(n == 1){
    return 1;
  }
  int sum = n + fNnaturalSum(n - 1);
  return sum;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Sum of first %d natural numbers is %d\n", n, fNnaturalSum(n));
}
*/

// Question 158**********Assignment-27_Question-2 ***************
// Write a recursive function to calculate sum of first N odd natural numbers
/*
#include <stdio.h>
int nOddNaturalSum(int n){
  if(n == 1){
    return 1;
  }
  int s = 2*n-1 + nOddNaturalSum(n - 1);
  return s;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Sum of first %d odd natural numbers is %d\n", n, nOddNaturalSum(n));
}
*/

// Question 159**********Assignment-27_Question-3 ***************
// Write a recursive function to calculate sum of first N even natural numbers
/*
#include <stdio.h>
int sumOfNEvenNatural(int n){
  if(n == 1){
    return 2;
  }
  int sum = 2*n + sumOfNEvenNatural(n - 1);
  return sum;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Sum of first %d even natural numbers is %d\n", n, sumOfNEvenNatural(n));
  return 0;
}
*/

// Question 160**********Assignment-27_Question-4 ***************
// Write a recursive function to calculate sum of squares of first n natural numbers
/*
#include <stdio.h>
int sumOfNSquare(int n){
  if(n == 1){
    return 1;
  }
  int sum = n*n + sumOfNSquare(n - 1);
  return sum;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Sum of first %d natural numbers's square is %d\n", n, sumOfNSquare(n));
  return 0;
}
*/

// Question 161**********Assignment-27_Question-5 ***************
// Write a recursive function to calculate sum of digits of a given number
/*
#include <stdio.h>
int sumOfDigits(int n){
  if(n == 0){
    return 0;
  }
  int sum = n % 10 + sumOfDigits(n / 10);
  return sum;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Sum of digits of %d is %d\n", n, sumOfDigits(n));
  return 0;
}
*/

// Question 162**********Assignment-28_Question-1 ***************
//Write a recursive function to calculate factorial of a given number.
/*
#include <stdio.h>
int factorial(int n){
  if(n == 1){
    return 1;
  }
  int fact = n * factorial(n - 1);
  return fact;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("factorial of %d is: %d ", n, factorial(n));
}
*/

// Question 163**********Assignment-28_Question-2 ***************
// Write a recursive function to calculate HCF of two numbers
/*
#include <stdio.h>
int hcf(int a, int b, int min){
  if(a % min == 0 && b % min == 0){
    return min;
  }
  int h = hcf(a, b, min - 1);
  return h;
}
int main(){
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  int min = (a < b) ? a : b;
  printf("HCF of %d and %d is: %d", a, b, hcf(a, b, min));
}
*/

// Question 164**********Assignment-28_Question-3 ***************
// Write a recursive function to print first N terms of Fibonacci series.
/*
#include <stdio.h>
int fib(int n){
  if(n == 1 || n == 2){
    return n - 1;
  }
  return fib(n - 2) + fib(n - 1);
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Fibonacci of %d is: %d\n", n, fib(n));
  return 0;
}
*/

// Question 165**********Assignment-28_Question-4 ***************
// Write a program in C to count the digits of a given number using recursion.
/*
#include <stdio.h>
int countDigits(int n){
  if(n == 0){
    return 0;
  }
  return 1 + countDigits(n / 10);
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("There are %d digits in %d", countDigits(n), n);
  return 0;
}
*/
