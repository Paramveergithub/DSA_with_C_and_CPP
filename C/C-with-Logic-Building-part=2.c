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