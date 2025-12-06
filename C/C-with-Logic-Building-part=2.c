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

// Question 166**********Assignment-28_Question-5 ***************
// Write a program in C to calculate the power of any number using recursion.
/*
#include <stdio.h>
int powerCalc(int n, int power){
  if(power == 0){
    return 1;
  }else if(power > 0){
    return n * powerCalc(n, power - 1);
  }else
  {
    return powerCalc(n, -power);
  }
}
int main(){
  int n, power;
  printf("Enter a number and its power: ");
  scanf("%d %d", &n, &power);
  printf("The power of %d is: %d", n, powerCalc(n, power));
}
*/

// Question 167**********Assignment-29_Question-1 ***************
// Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
/*
#include <stdio.h>
int main(){
  int arr[10], sum = 0;
  printf("Enter 10 elements: ");
  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  printf("Sum of the elements is: %d\n", sum);
  return 0;
}
*/

// Question 168**********Assignment-29_Question-2 ***************
// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
/*
#include <stdio.h>
int main(){
  int arr[10];
  float avg = 0, sum = 0;
  printf("Enter 10 elements: ");
  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  avg = sum / 10.0;
  printf("Average of the elements is: %d\n", avg);
  return 0;
}
*/

// Question 169**********Assignment-29_Question-3 ***************
// Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
/*
#include <stdio.h>
int main(){
  int arr[10], sEven = 0, sOdd = 0;
  printf("Enter 10 elements: ");
  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
    if(arr[i] % 2 == 0){
      sEven += arr[i];
    }else{
      sOdd += arr[i];
    }
  }
  printf("Sum of even elements is: %d\n", sEven);
  printf("Sum of odd elements is: %d\n", sOdd);
  return 0;
}
*/

// Question 170**********Assignment-29_Question-4 ***************
// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
/*
#include <stdio.h>
int main(){
  int arr[10], max= 0;
  printf("Enter 10 elements: ");
  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
    if(arr[i] > max){
      max = arr[i];
    }
  }
  printf("Maximum element is: %d\n", max);
  return 0;
}
*/

// Question 171**********Assignment-29_Question-5 ***************
// Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
/*
#include <stdio.h>
int main(){
  int arr[10], min;
  printf("Enter 10 elements: ");
  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
    if(i == 0 || arr[i] < min){
      min = arr[i];
    }
  }
  printf("Minimum element is: %d\n", min);
  return 0;
}
*/

// Question 172**********Assignment-30_Question-1 ***************
// Write a program to sort elements of an array of size 10. Take array values from the user.
/*
#include <stdio.h>
int main(){
  int arr[10];
  printf("Enter 10 elements: ");
  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < 10; i++){
    int curr = i;
    for(int j = i - 1; j >= 0; j--){
      if(arr[j] > arr[curr]){
        int temp = arr[j];
        arr[j] = arr[curr];
        arr[curr] = temp;
        curr--;
      }
    }
  }
  for(int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
*/

// Question 173**********Assignment-30_Question-2 ***************
// Write a program to find second largest in an array. Take array values from the user.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n], count = 0;
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < n; i++){
    int curr = i;
    for(int j = i - 1; j >= 0; j--){
      if(arr[j] > arr[curr]){
        int temp = arr[j];
        arr[j] = arr[curr];
        arr[curr] = temp;
        curr--;
      }
    }
  }
  for(int i = n-1; i >= 0; i--){
    if(arr[i] != arr[i - 1]){
      count++;
    }
    if(count == 2){
      printf("Second largest element is: %d\n", arr[i]);
      break;
    }
  }
  return 0;
}
*/

// Question 174**********Assignment-30_Question-3 ***************
// Write a program to find the second smallest number in an array. Take array values from the user.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n], count = 0;
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < n; i++){
    int curr = i;
    for(int j = i - 1; j >= 0; j--){
      if(arr[j] > arr[curr]){
        int temp = arr[j];
        arr[j] = arr[curr];
        arr[curr] = temp;
        curr--;
      }
    }
  }
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
  for(int i = 0; i < n; i++){
    if(arr[i] != arr[i + 1]){
      count++;
    }
    if(count == 2){
      printf("Second smallest element is: %d\n", arr[i]);
      break;
    }
  }
  return 0;
}
*/

// Question 175**********Assignment-30_Question-4 ***************
// Write a program to sort an array of 10 elements in descending order.
/*
#include <stdio.h>
int main(){
  int arr[10];
  printf("Enter 10 elements: ");
  for(int i = 0; i < 10; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < 10; i++){
    int curr = i;
    for(int j = i - 1; j >= 0; j--){
      if(arr[j] < arr[curr]){
        int temp = arr[j];
        arr[j] = arr[curr];
        arr[curr] = temp;
        curr--;
      }
    }
  }
  for(int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
*/

// Question 176**********Assignment-30_Question-5 ***************
// Write a program in C to copy the elements of one array into another array.Take array values from the user.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  int arr2[n];
  for(int i = 0; i < n; i++){
    arr2[i] = arr[i];
  }
  for(int i = 0; i < n; i++){
    printf("%d ", arr2[i]);
  }
}
*/

// Question 177**********Assignment-31_Question-1 ***************
// Write a function to find the greatest number from the given array of any size. (TSRS)
/*
#include <stdio.h>
int greatest(int arr[], int n){
  if(n == 1){
    return arr[0];
  }
  int max = 0;
  for(int i = 1; i < n; i++){
    if(arr[i] > arr[max]){
      max = i;
    }
  }
  return arr[max];
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  printf("The greatest number in the array is: %d", greatest(arr, n));
  return 0;
}
*/

// Question 178**********Assignment-31_Question-2 ***************
// Write a function to find the smallest number from the given array of any size. (TSRS)
/*
#include <stdio.h>
int smallest(int arr[], int n){
  if(n == 1){
    return arr[0];
  }
  int mini = 0;
  for(int i = 1; i < n; i++){
    if(arr[i] < arr[mini]){
      mini = i;
    }
  }
  return arr[mini];
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  printf("The smallest number in the array is: %d", smallest(arr, n));
  return 0;
}
*/

// Question 179**********Assignment-31_Question-3 ***************
// Write a function to sort an array of any size. (TSRN)
/*
#include <stdio.h>
void sorted(int arr[], int n){
  for(int i = 1; i < n; i++){
    int curr = i;
    for(int j = i - 1; j >= 0; j--){
      if(arr[j] > arr[curr]){
        int temp = arr[j];
        arr[j] = arr[curr];
        arr[curr] = temp;
        curr--;
      }
    }
  }
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  sorted(arr, n);
  return 0;
}
*/

// Question 180**********Assignment-31_Question-4 ***************
// Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29])
/*
#include<stdio.h>
#include<string.h>
void rotateArr(int arr[], int n, int position, char direction[]){
  int i = 1;
  while(i <= position){
    if(strcmp(direction, "left") == 0){
      int temp = arr[0];
      for(int j = 0; j < n - 1; j++){
        arr[j] = arr[j + 1];
      }
      arr[n - 1] = temp;
    }else if(strcmp(direction, "right") == 0){
      int temp = arr[n - 1];
      for(int j = n - 1; j > 0; j--){
        arr[j] = arr[j - 1];
      }
      arr[0] = temp;
    }
    i++;
  }
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  int position;
  printf("Enter the number of position :");
  scanf("%d", &position);
  char direction[10];
  printf("Enter the direction (left/right): ");
  scanf("%s", direction);
  rotateArr(arr, n, position, direction);
  return 0;
}
*/

// Question 181**********Assignment-31_Question-5 ***************
// Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
/*
#include <stdio.h>
int firstDuplicate(int arr[], int n){
  for(int i = 0; i < n-1; i++){
    if(arr[i] == arr[i + 1]){
      return arr[i];
    }
  }
  return 0;
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  printf("first occurrence of adjacent duplicate elements  %d", firstDuplicate(arr, n));
  return 0;
}
*/

// Question 182**********Assignment-32_Question-1 ***************
// Write a function to swap two elements of given array with specified indices.
/*
#include <stdio.h>
void swapE(int arr[], int n, int a, int b){
  int temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  int a, b;
  printf("Enter the two indices to swap: ");
  scanf("%d %d", &a, &b);
  swapE(arr, n, a, b);
  return 0;
}
*/

// Question 183**********Assignment-32_Question-2 ***************
// Write a function to count a total number of duplicate elements in an array. (Means elements that occurs 2 times in an array)
/*
#include <stdio.h>
void dupliCount(int arr[], int n){
  int count = 0, countArr[1000] = {0};
  for(int i = 0; i < n; i++){
    countArr[arr[i]]++;
  }
  for(int i = 0; i < 1000; i++){
    if(countArr[i] > 1){
      count++;
    }
  }
  printf("Number of duplicate elements in the array is: %d\n", count);
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  dupliCount(arr, n);
  return 0;
}
*/

// Question 184**********Assignment-32_Question-3 ***************
// Write a function to print all unique elements in an array.
/*
#include <stdio.h>
void uniqueE(int arr[], int n){
  int countArr[1000] = {0};
  for(int i = 0; i < n; i++){
    countArr[arr[i]]++;
  }
  for(int i = 0; i < 1000; i++){
    if(countArr[i] == 1){
      printf("%d ", i);
    }
  }
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  uniqueE(arr, n);
  return 0;
}
*/

// Question 185**********Assignment-32_Question-4 ***************
// Write a function to merge two arrays of the same size sorted in descending order.
/*
#include <stdio.h>
void mergeArray(int arr1[], int arr2[], int n){
  int arr3[n * 2];
  // for(int i = 0; i < n*2; i++){
  //   if(i < n){
  //     arr3[i] = arr1[i];
  //   }else{
  //     arr3[i] = arr2[i - n];
  //   }
  // }
  // for(int i = 0; i < n*2-1; i++){
  //   for(int j = 0; j < n*2-i - 1; j++){
  //     if(arr3[j] < arr3[j + 1]){
  //       int temp = arr3[j];
  //       arr3[j] = arr3[j + 1];
  //       arr3[j + 1] = temp;
  //     }
  //   }
  // }
  int i = 0, j = 0, k = 0;
  while(k < n * 2){
    if(i < n && j < n){
      if(arr1[i] < arr2[j]){
        arr3[k] = arr2[j];
        j++;
      }else{
        arr3[k] = arr1[i];
        i++;
      }
    }else if(i < n){
      arr3[k] = arr1[i];
      i++;
    }else if(j < n){
      arr3[k] = arr2[j];
      j++;
    }
    k++;
  }
  for(int i = 0; i < n*2; i++){
    printf("%d ", arr3[i]);
  }
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr1[n], arr2[n];
  printf("Enter %d elements of the first array: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr1[i]);
  }
  printf("Enter %d elements of the second array: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr2[i]);
  }
  mergeArray(arr1, arr2, n);
  return 0;
}
*/


// Question 186**********Assignment-32_Question-5 ***************
// Write a function to count the frequency of each element of an array.
/*
#include <stdio.h>
void freqCount(int arr[], int n){
  int countArr[1000] = {0};
  for(int i = 0; i < n; i++){
    countArr[arr[i]]++;
  }
  for(int i = 0; i < 1000; i++){
    if(countArr[i] > 0){
      printf("%d occurs %d times\n", i, countArr[i]);
    }
  }
}
int main(){
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  freqCount(arr, n);
  return 0;
}
// */

// Question 187**********Assignment-33_Question-1 ***************
// Write a program to calculate the sum of two matrices each of order 3x3.
/*
#include <stdio.h>
int main(){
  int matrix1[3][3], matrix2[3][3], matrixSum[3][3];
  printf("Enter the values for the first 3x3 matrix:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d",  &matrix1[i][j]);
    }
  }
  printf("Enter the values for the second 3x3 matrix:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &matrix2[i][j]);
      matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
  printf("This is the sum of two matrices:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", matrixSum[i][j]);
    }
    printf("\n");
  }
  return 0;
}
*/

// Question 188**********Assignment-33_Question-2 ***************
// Write a program to calculate the product of two matrices each of order 3x3.
/*
#include <stdio.h>
int main(){
  int matrix1[3][3], matrix2[3][3], matrixProduct[3][3] = {0};
  printf("Enter the values for the first 3x3 matrix:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d",  &matrix1[i][j]);
    }
  }
  printf("Enter the values for the second 3x3 matrix:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &matrix2[i][j]);
    }
  }
  printf("This is the product of two matrices: \n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < 3; k++){
        matrixProduct[i][j] += matrix1[i][k] * matrix2[k][j];
      }
      printf("%d ", matrixProduct[i][j]);
    }
    printf("\n");
  }
  return 0;
}
*/

// Question 189**********Assignment-33_Question-3 ***************
// Write a program to print the transpose of a given matrix.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter the size of matirix : ");
  scanf("%d", &n);
  int transposeMatrix[n][n];
  printf("Enter the values for the matrix:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      scanf("%d", &transposeMatrix[i][j]);
    }
  }
  printf("\n");
  printf("\n");
  for(int i = 0; i < n; i++){
    for(int j = i; j< n; j++){
      int temp = transposeMatrix[i][j];
      transposeMatrix[i][j] = transposeMatrix[j][i];
      transposeMatrix[j][i] = temp;
    }
  }
  for(int i = 0; i<n; i++){
    for(int j = 0; j < n; j++){
      printf("%d ", transposeMatrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
*/

// Question 190********Assignment-33_Question-4,5,6,7,8,9,10************************
// Four players are playing a tournament of Chess with round robin method (each player will play with every other player). Each win has 2 points, draw has 1 point and loose has 0 points. Declare a score_board two dimensional array to store the scores of the players agains each player.

// For que-4, define a function to update score_board after each match result.
// For que-4, define a function to display score_board.
// For que-4, define a function which returns the score of a specific player
// For que-4, define a function to find the winner of the tournament.
// For que-4, define a function to display rank of the players.
// For que-4, define a function to run tournament, in which user has to enter result of each game and update score board using score_board function.
/*
#include<stdio.h>
void updateScoreBoard(int scoreBoard[4][4], int i, int j, int score){
  scoreBoard[i][j] = score;
  if(score == 2){
    scoreBoard[j][i] = 0;
  }else if(score == 0){
    scoreBoard[j][i] = 2;
  }else{
    scoreBoard[j][i] = 1;
  }
}
void printScoreBoard(int scoreBoard[4][4]){
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      printf("%d ", scoreBoard[i][j]);
    }
    printf("\n");
  }
}
int printPlayerScore(int scoreBoard[4][4], int playerNumber){
  playerNumber--;
  int score = 0;
  for(int i = 0; i < 4; i++){
    score += scoreBoard[playerNumber][i];
  }
  return score;
}

void findWinner(int scoreBoard[4][4], int scorePlayer[4]){
  int winner = 0;
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      scorePlayer[i] += scoreBoard[i][j];
    }
  }
  for(int i = 1; i < 4; i++){
    if(scorePlayer[winner] < scorePlayer[i]){
      winner = i;
    }
  }
  printf("Player %d is the winner\n", winner + 1);
}

void ranks(int scorePlayer[4]){
  for(int i = 0; i < 4; i++){
    printf("Player %d has %d points\n", i + 1, scorePlayer[i]);
  }
  printf("\n");
  int rankArray[4], rank = 1, prevScore = 0;
  for(int i = 0; i < 4; i++){
    int max = 0;
    for(int j = 0; j < 4; j++){
      if(scorePlayer[max] < scorePlayer[j]){
        max = j;
      }
    }
    if(scorePlayer[max] != prevScore){
      rankArray[max] = rank;
      rank++;
      prevScore = scorePlayer[max];
      scorePlayer[max] = -1;
    }else{
      rankArray[max] = --rank;
      rank++;
      scorePlayer[max] = -1;
    }
  }
  for(int i = 0; i < 4; i++){
    printf("Player %d has rank %d\n", i + 1, rankArray[i]);
  }
}

void runTournament(){
  int scoreBoard[4][4] = {0};
  printf("Match between Player_1 and Player_2. Enter the value if player_1 wins then 2, draw 1 and loose 0\n");
  int score;
  scanf("%d", &score);
  updateScoreBoard(scoreBoard, 0, 1, score);
  printf("Match between Player_1 and Player_3. Enter the value if player_1 wins then 2, draw 1 and loose 0\n");
  scanf("%d", &score);
  updateScoreBoard(scoreBoard, 0, 2, score);
  printf("Match between Player_1 and Player_4. Enter the value if player_1 wins then 2, draw 1 and loose 0\n");
  scanf("%d", &score);
  updateScoreBoard(scoreBoard, 0, 3, score);
  printf("Match between Player_2 and Player_3. Enter the value if player_2 wins then 2, draw 1 and loose 0\n");
  scanf("%d", &score);
  updateScoreBoard(scoreBoard, 1, 2, score);
  printf("Match between Player_2 and Player_4. Enter the value if player_2 wins then 2, draw 1 and loose 0\n");
  scanf("%d", &score);
  updateScoreBoard(scoreBoard, 1, 3, score);
  printf("Match between Player_3 and Player_4. Enter the value if player_3 wins then 2, draw 1 and loose 0\n");
  scanf("%d", &score);
  updateScoreBoard(scoreBoard, 2, 3, score);
  printScoreBoard(scoreBoard);
  printf("Enter the player Number, whose score you want to check\n");
  int playerNumber;
  scanf("%d", &playerNumber);
  printf("%d\n", printPlayerScore(scoreBoard, playerNumber));
  printf("\n");
  int scorePlayers[4] = {0};
  findWinner(scoreBoard, scorePlayers);
  printf("\n");
  ranks(scorePlayers);
}
int main(){
  runTournament();
  return 0;
}
*/

// Question 191 ********Assignment-34_Question-1 ***************
// Write a program to calculate the length of the string. (without using builtin method)
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
  char *str = NULL;
  char ch;
  int length = 0;
  printf("Enter a string: ");
  str = (char *)malloc(1*sizeof(char));
  if(str == NULL){
    printf("Memory allocation failed\n");
    return 1;
  }
  while((ch = getchar()) != '\n'){
    str[length] = ch;
    length++;
    str = (char *)realloc(str, (length+1)*sizeof(char));
    if(str == NULL){
      printf("Memory allocation failed\n");
      return 1;
    }
  }
  str[length] = '\0';
  printf("The string is: %s\n", str);
  printf("The length of the string is: %d\n", length);
  free(str);
  return 0;
}
*/

// Question 192 ********Assignment-34_Question-2 ***************
// Write a program to count the occurrence of a given character in a given string.
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
  char ch;
  char *str = NULL;
  int length = 0;
  printf("Enter a string: ");
  str = (char *)malloc(1*sizeof(char));
  if(str == NULL){
    printf("Memory allocation failed\n");
    return 1;
  }
  while((ch = getchar()) != '\n'){
    str[length] = ch;
    length++;
    str = (char *)realloc(str, (length+1)*sizeof(char));
    if(str == NULL){
      printf("Memory allocation failed\n");
      return 1;
    }
  }
  str[length] = '\0';
  printf("Enter a character: ");
  char c;
  scanf(" %c", &c);
  int count = 0;
  for(int i = 0; i < length; i++){
    if(str[i] == c){
      count++;
    }
  }
  printf("The character %c appears %d times in the string.\n", c, count);
  free(str);
  return 0;
}
*/

// Question 193 ********Assignment-34_Question-3 ***************
// Write a program to count vowels in a given string
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
  char *str = NULL;
  char ch;
  int length = 0;
  printf("Enter a string: ");
  str = (char *)malloc(1*sizeof(char));
  if(str == NULL){
    printf("Memory allocation failed\n");
    return 1;
  }
  while((ch = getchar()) != '\n'){
    str[length] = ch;
    length++;
    str = (char *)realloc(str, (length+1)*sizeof(char));
    if(str == NULL){
      printf("Memory allocation failed\n");
      return 1;
    }
  }
  str[length] = '\0';
  int i = 0, count = 0;
  while(str[i] != '\0'){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
      count++;
    }
    i++;
  }
  printf("The number of vowels in the string is: %d\n", count);
  free(str);
  return 0;
}
*/

// Question 194 ********Assignment-34_Question-4 ***************
// Write a program to count spaces in a given string.
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  int count = 0;
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == ' '){
      count++;
    }
  }
  printf("The number of spaces in the string is: %d\n", count);
  return 0;
}
*/

// Question 195 ********Assignment-34_Question-5 ***************
// Write a program to convert a given string into uppercase
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  for(int i = 0; i < strlen(str); i++){
    if(str[i] >= 'a' && str[i] <= 'z'){
      str[i] -= 32;
    }
  }
  printf("The string in uppercase is: %s\n", str);
  return 0;
}
*/


// Question 196 ********Assignment-35_Question-1 ***************
// Write a program to convert a given string into lowercase.
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  for(int i = 0; i < strlen(str); i++){
    if(str[i] >= 'A' && str[i] <= 'Z'){
      str[i] += 32;
    }
  }
  printf("The string in lowercase is: %s\n", str);
  return 0;
}
*/

// Question 197 ********Assignment-35_Question-2 ***************
// Write a program to reverse a string.
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  int n = strlen(str), i = 0, j = n - 1;
  while(i < j){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  printf("The reversed string is: %s\n", str);
  return 0;
}
*/

// Question 198 ********Assignment-35_Question-3 ***************
// Write a program in C to count the total number of alphabets, digits and special characters in a string.
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  int alpha = 0, digit = 0, spacial = 0, i = 0;
  while(str[i] != '\0'){
    if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
      alpha++;
    }else if(str[i] >= '0' && str[i] <= '9'){
      digit++;
    }else{
      spacial++;
    }
    i++;
  }
  printf("The number of alphabets in the string is: %d\n", alpha);
  printf("The number of digits in the string is: %d\n", digit);
  printf("The number of spacial characters in the string is: %d\n", spacial);
  return 0;
}
*/

// Question 199 ********Assignment-35_Question-4 ***************
// Write a program in C to copy one string to another char array.
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  char strCpy[100];
  for(int i = 0; i < strlen(str); i++){
    strCpy[i] = str[i];
  }
  printf("The copied string is: %s\n", strCpy);
  return 0;
}
*/

// Question 200 ********Assignment-35_Question-5 ***************
// Write a program to find first occurrence of a given character in a given string.
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == ch){
      printf("The character %c is found at index %d\n", ch, i);
      return 0;
    }
  }
  printf("The character %c is not found in the string\n", ch);
  return 0;
}
*/


// Question 201 ********Assignment-36_Question-1 ***************
// Write a function to calculate length of the string.
/*
#include <stdio.h>
#include <string.h>
void calLStr(char *str){
  int len = 0;
  while(str[len] != '\0'){
    len++;
  }
  printf("The length of the string is: %d\n", len);
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  calLStr(str);
  return 0;
}
*/

// Question 202 ********Assignment-36_Question-2 ***************
// Write a function to reverse a string.
/*
#include <stdio.h>
#include <string.h>
void revStr(char *str){
  int i = 0, j = strlen(str) - 1;
  while(i < j){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
  printf("The reversed string is: %s\n", str);
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  revStr(str);
  return 0;
}
*/

// Question 203 ********Assignment-36_Question-3 ***************
// Write a function to compare two strings.
/*
#include <stdio.h>
#include <string.h>
int comTwoStr(char *str, char *strC){
  int i = 0;
  while(str[i] || strC[i]){
    if(str[i] == strC[i]){
      i++;
    }else{
      printf("The strings are not common\n");
      return 0;
    }
  }
  printf("The strings are common\n");
  return 0;
}
int main(){
  char str[100], strC[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  printf("Enter another string: ");
  fgets(strC, 100, stdin);
  strC[strcspn(strC, "\n")] = '\0';
  comTwoStr(str, strC);
  return 0;
}
*/

// Question 204 ********Assignment-36_Question-4 ***************
// // Write a function to transform string into uppercase
/*
#include <stdio.h>
#include <string.h>
void upStr(char *str){
  for(int i = 0; i < strlen(str); i++){
    if(str[i] >= 'a' && str[i] <= 'z'){
      str[i] -= 32;
    }
  }
  printf("The string in uppercase is: %s\n", str);
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  upStr(str);
  return 0;
}
*/

// Question 205 ********Assignment-36_Question-5 ***************
// Write a function to transform a string into lowercase
/*
#include <stdio.h>
#include <string.h>
void lowStr(char *str){
  for(int i = 0; i < strlen(str); i++){
    if(str[i] >= 'A' && str[i] <= 'Z'){
      str[i] += 32;
    }
  }
  printf("The string in lowercase is: %s\n", str);
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  lowStr(str);
  return 0;
}
// */


// Question 206 ********Assignment-37_Question-1 ***************
// Write a function to count vowels in a given string.
/*
#include <stdio.h>
#include <string.h>
void countV(char *str){
  int count = 0;
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
      count++;
    }
  }
  printf("The number of vowels in the string is: %d\n", count);
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  countV(str);
  return 0;
}
*/

// Question 207 ********Assignment-37_Question-2 ***************
// Write a function to find a character in a given string. Return index of first occurrence of given character. Return -1 if character not found.
/*
#include <stdio.h>
#include <string.h>
int occur(char *str, char ch){
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == ch){
      return i;
    }
  }
  return -1;
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  int res = occur(str, ch);
  if(res == -1){
    printf("The character %c does not occur in the string\n", ch);
  }else{
    printf("The character %c occurs at index %d in the string\n", ch, res);
  }
  return 0;
}
*/

// Question 208 ********Assignment-37_Question-3 ***************
// Write a function to find character in a given string between specified indices (start index (inclusive) and end index(exclusive).
/*
#include <stdio.h>
#include <string.h>
void findChar(char *str, int index1, int index2, char ch){
  while(index1 < index2){
    if(str[index1] == ch){
      printf("The character %c occurs at index %d in the string\n", ch, index1);
      return;
    }else{
      index1++;
    }
  }
  printf("The character %c does not occur in the string\n", ch);
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  int index1, index2;
  printf("Enter the range of two indices where the character has to find in the string: ");
  scanf("%d %d", &index1, &index2);
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  findChar(str, index1, index2, ch);
  return 0;
}
*/

// Question 209 ********Assignment-37_Question-4 ***************
// Write a function to swap two characters of a given string with specified indices.
/*
#include <stdio.h>
#include <string.h>
void swapChar(char *str, int index1, int index2){
  char temp = str[index1];
  str[index1] = str[index2];
  str[index2] = temp;
  printf("The string after swapping characters at indices %d and %d is: %s\n", index1, index2, str);
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  int index1, index2;
  printf("Enter two indices those should be swap in the string: ");
  scanf("%d %d", &index1, &index2);
  swapChar(str, index1, index2);
  return 0;
}
*/

// Question 210 ********Assignment-37_Question-5 ***************
// Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)
/*
#include <stdio.h>
#include <string.h>
void alphaNumaric(char *str, int len){
  int alpha = 0, digit = 0;
  for(int i = 0; i < len; i++){
    if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
      alpha++;
    }else if(str[i] >= '0' && str[i] <= '9'){
      digit++;
    }
  }
  if(alpha && digit){
    printf("The string is alphanumeric\n");
  }else{
    printf("The string is not alphanumeric\n");
  }
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  int len = strlen(str);
  alphaNumaric(str, len);
  return 0;
}
*/

// Question 211 ********Assignment-38_Question-1 ***************
// Write a function to check whether a given string is palindrome or not.
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void isPallindrome(char *str, int len){
  int i = 0, j = len - 1;
  while(i < j){
    if(tolower(str[i]) != tolower(str[j])){
      printf("The string is not a pallindrome\n");
      return;
    }
    i++;
    j--;
  }
  printf("The string is a pallindrome\n");
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  int len = strlen(str);
  isPallindrome(str, len);
  return 0;
}
*/

// Question 212 ********Assignment-38_Question-2 ***************
// Write a function to trim a string (removing leading spaces from both the ends).
/*
#include <stdio.h>
#include <string.h>
void removeExtraSpacesBothEnds(char str[], int len){
                  // best way to save space

  // int start = 0, end = len - 1;
  // if(str[start] == ' '){
  //   while(str[start] == ' '){
  //     start++;
  //   }
  // }else if(str[end] == ' '){
  //   while(str[end] == ' '){
  //     end--;
  //   }
  // }
  // int i = 0, j = end - start;
  // for(i = 0; i <= j; i++){
  //   str[i] = str[start];
  //   start++;
  // }
  // str[i] = '\0';

                  // best way to save time
  char str1[len];
  int j = 0, i = 0;
  for(i = 0; i < len; i++){
    if(str[i] != ' '){
      str1[j++] = str[i];
      if(str[i + 1] == ' ' && str[i + 2] != '\0'){
        str1[j++] = ' ';
      }
    }
  }
  str1[j] = '\0';
  strcpy(str, str1);
  printf("The string after removing extra spaces from both ends is: %s\n", str);
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  str[strcspn(str, "\n")] = '\0';
  int len = strlen(str);
  removeExtraSpacesBothEnds(str, len);
  return 0;
}
*/

// Question 213 ********Assignment-38_Question-3 ***************
// Write a function to count words in a given string
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void countWords(char *str, int len){
  int i = 1, count = 0;
  if(len == 1){
    if(str[0] != ' '){
      count++;
    }
  }
  while(str[i] != '\0'){
    if(str[i] == ' ' && str[i - 1] != ' '){
      count++;
    }else if(str[i+1] == '\0' && str[i] != ' '){
      count++;
    }
    i++;
  }
  printf("The number of words in the string are: %d\n", count);
  free(str);
}
int main(){
  char *str = NULL;
  char ch;
  int length = 0;
  printf("Enter a string: ");
  str = (char *)malloc(1 * sizeof(char));
  while((ch = getchar()) != '\n'){
    str[length++] = ch;
    str = (char *)realloc(str, (length + 1) * sizeof(char));
  }
  str[length] = '\0';
  countWords(str, length);
  return 0;
}
*/

// Question 214 ********Assignment-38_Question-4 ***************
// Write a function to reverse a string word wise. (For example if the given string is "Mysirg Education Services" then the resulting string should be "Services Education Mysirg")
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverseSWordsWise(char **str, int len){
  char rStr[len + 1];
  int i = 0, j = len -1;
  if((*str)[j] == ' ' && (*str)[i] == ' '){
    printf("Don't enter unnecessary spaces in the string\n");
    return;
  }
  while(j != -1){
    if((*str)[j] == ' '){
      int k = j + 1;
      while((*str)[k] != '\0' && (*str)[k] != ' '){
        rStr[i++] = (*str)[k++];
      }
      rStr[i++] = ' ';
    }
    j--;
    if(j == -1){
      int k = j;
      k++;
      while((*str)[k] != '\0' && (*str)[k] != ' '){
        rStr[i++] = (*str)[k++];
      }
      rStr[i] = '\0';
    }
  }
  strcpy(*str, rStr);
  printf("The string after reversing wordwise is: -> %s\n", rStr);
}
int main(){
  char *str = NULL;
  char ch;
  int length = 0;
  printf("Enter a string: ");
  str = (char *)malloc(1 * sizeof(char));
  if(str == NULL){
    printf("Memory allocation failed\n");
    return 1;
  }
  while((ch = getchar()) != '\n'){
    str[length++] = ch;
    str = (char *)realloc(str, (length + 1) * sizeof(char));
    if(str == NULL){
      printf("Memory allocation failed\n");
      return 1;
    }
  }
  str[length] = '\0';
  reverseSWordsWise(&str, length);
  printf("The original string is: -> %s\n", str);
  free(str);
  return 0;
}
*/

// Question 214 ********Assignment-38_Question-4 *************** Alternative
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[1000];
  char *words[100];
  printf("Enter a string: ");
  int count = 0;
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  int len = strlen(str);
  char *token = strtok(str, " ");
  while(token != NULL){
    words[count++] = token;
    token = strtok(NULL, " ");
  }
  char Nstr[len + 1];
  for(int i = count - 1; i >= 0; i--){
    strcat(Nstr, words[i]);
    if(i != 0){
      strcat(Nstr, " ");
    }
  }
  printf("The string after reversing wordwise is: %s\n", Nstr);
  return 0;
}
*/

// Question 215 ********Assignment-38_Question-5 ***************
// Write a function to do case insensitive comparison of two strings.
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int caseInSensitiveCompare(char *str1, char *str2, int len){
  for(int i = 0; i < len; i++){
    // if(tolower(str1[i]) != tolower(str2[i])){
    //   return 0;
    // }
    if(str1[i] == str2[i]){
      continue;
    }else if(str1[i] >= 'A' && str1[i] <= 'Z'){
      if(str1[i] + 32 != str2[i]){
        return 0;
      }
    }else if(str1[i] >= 'a' && str1[i] <= 'z'){
      if(str1[i] - 32 != str2[i]){
        return 0;
      }
    }
  }
  return 1;
}
int main(){
  char str1[100], str2[100];
  printf("Enter a string: ");
  fgets(str1, sizeof(str1), stdin);
  str1[strcspn(str1, "\n")] = '\0';
  printf("Enter another string: ");
  fgets(str2, sizeof(str2), stdin);
  str2[strcspn(str2, "\n")] = '\0';
  if(strlen(str1) != strlen(str2)){
    printf("The strings are not case insensitive\n");
    return 0;
  }
  int len = strlen(str1);
  if(caseInSensitiveCompare(str1, str2, len)){
    printf("The string is case insensitive\n");
  }else{
    printf("The string is not case insensitive\n");
  }
  return 0;
}
*/

// Question 216 ********Assignment-39_Question-1 ***************
// Write a function to count frequency of each character of the given string.
/*
#include <stdio.h>
#include <string.h>
void countFreqOfChar(char *str, int len){
  int freq[256] = {0};
  for(int i = 0; i < len; i++){
    freq[(unsigned char)str[i]]++;
  }
  for(int i = 0; i < 256; i++){
    if(freq[i] != 0){
      printf("The character '%c' occurs %d times\n", i, freq[i]);
    }
  }
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  int n = strlen(str);
  countFreqOfChar(str, n);
  return 0;
}
*/

// Question 217 ********Assignment-39_Question-2 ***************
// Write a function to find a word in a given string.
/*
#include <stdio.h>
#include <string.h>
void findWord(char *str, char *word, int len){
  int j = 0;
  if(strlen(word) < 1 && len < 1){
    printf("Not Found");
    return;
  }

  for(int i = 0; i <= len; i++){
    if(str[i] == word[j]){
      // if((str[i+1] == ' ' || str[i+1] == '\0') && (word[j+1] == '\0')){
      //   printf("Found");
      //   return;
      // }
      int k = i + 1, j = 1;
      while(word[j] != '\0'){
        if(str[k] != word[j]){
          break;
        }
        j++, k++;
      }
      if(word[j] == '\0' && (str[k] == ' ' || str[k] == '\0')){
        printf("Found at index %d", i);
        return;
      }
    }else{
      // j = 0;
    }
  }
  printf("Not Found");
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  int len = strlen(str);
  char word[100];
  printf("Enter a word: ");
  fgets(word, sizeof(word), stdin);
  word[strcspn(word, "\n")] = '\0';
  findWord(str, word, len);
  return 0;
}
*/

// Question 218 ********Assignment-39_Question-3 ***************
// Write a function to make first character of each word of the string capital.
/*
#include <stdio.h>
#include <string.h>
void firstCharUpper(char *str){
  int i = 0;
  while(str[i]){
    if(i == 0 && str[i] >= 'a' && str[i] <= 'z'){
      str[i] -= 32;
    }else if(str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z'){
      str[i] -= 32;
    }
    i++;
  }
  printf("%s\n", str);
}
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  firstCharUpper(str);
  return 0;
}
*/

// Question 219 ********Assignment-39_Question-4 ***************
// Write a function to make acronym name from a given name. For example, "Ramesh Chand Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta"
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void makeAcronym(char *str, int len){
  int i = 0, e = len - 1, limit = 0;
  if(str[i] == ' ' || str[e] == ' '){
    printf("Don't enter unnecessary spaces in the string\n");
    return;
  }
  int surname = e;
  while(str[surname] != ' ' && surname >= 0){
    if(isalpha((unsigned char)str[surname])){
      surname--, limit++;
    }else{
      printf("The string should contain only alphabets\n");
      return;
    }
  }
  if(surname < i){
    printf("The string should contain at least two words\n");
    return;
  }
  if(limit < 3){
    printf("The surname should contain at least three characters\n");
    return;
  }
   str[surname + 1] = toupper(str[surname + 1]);
  surname--;
  int s = surname;
  while(i <= s){
    if(str[s] != ' '){
      s--;
    }else if(str[s] == ' '){
      str[surname] = str[s + 1];
      str[surname] = toupper(str[surname]);
      surname--, s--;
      if(s >= 0){
        str[surname] = ' ';
        surname--;
      }
    }
    if(i == s){
      str[surname] = str[i];
      str[surname] = toupper(str[surname]);
      s--;
    }
  }
  e = e - surname;
  for(int i = 0; i <= e; i++){
    str[i] = str[surname++];
  }
  str[e + 1] = '\0';
  printf("The acronym of the string is: %s\n", str);
}
int main(){
  char *str = NULL;
  char ch;
  int length = 0;
  printf("Enter a string: ");
  str = (char *)malloc(1*sizeof(char));
  if(str == NULL){
    printf("Memory allocation failed\n");
    return 1;
  }
  while((ch = getchar()) != '\n'){
    str[length] = ch;
    length++;
    str = (char *)realloc(str, (length+1)*sizeof(char));
    if(str == NULL){
      printf("Memory allocation failed\n");
      return 1;
    }
  }
  str[length] = '\0';
  makeAcronym(str, length);
  free(str);
  return 0;
}
*/

// Question 220 ********Assignment-39_Question-5 ***************
// Write a function to concatenate two strings.
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *strconcat(char *str1, char *str2 , int len1, int len2){
  int len = len1 + len2;
  char *concatenated = (char *)malloc((len + 1) * sizeof(char));
  if(concatenated == NULL){
    printf("Memory allocation failed\n");
    return NULL;
  }
  for(int i = 0; i<len; i++){
    if(i < len1){
      concatenated[i] = str1[i];
    }else{
      concatenated[i] = str2[i - len1];
    }
  }
  concatenated[len] = '\0';
  return concatenated;
}
int main(){
  char str1[100], str2[100];
  printf("Enter a string: ");
  fgets(str1, sizeof(str1), stdin);
  str1[strcspn(str1, "\n")] = '\0';
  printf("Enter another string: ");
  fgets(str2, sizeof(str2), stdin);
  str2[strcspn(str2, "\n")] = '\0';
  int len1 = strlen(str1), len2 = strlen(str2);
  if(len1 == 0 || len2 == 0){
    printf("One of the strings is empty, cannot concatenate\n");
    return 0;
  }
  char *result = strconcat(str1, str2, len1, len2);
  printf("Below is the concatenated string:\n\n %s\n", result);
  free(result);
  // printf("Below is the concatenated string:\n\n %s\n", strcat(str1, str2));
  return 0;
}
*/


// Question 221 ********Assignment-40_Question-1 ***************
// Write a function to store strings, taken from user, to the given 2d char array.
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
void ensure_ptr(char ***ptr, int *n){
  *ptr = realloc(*ptr, (*n + 1) * sizeof(char *));
  if(!*ptr){
    printf("Pointer memory allocation failed\n");
    exit(1);
  }
}
void ensure_str(char **str, int *word_len){
    *str = realloc(*str, (*word_len + 1) * sizeof(char));
    if(*str == NULL){
      printf("String memory allocation failed\n");
      return;
    }
}
void finalizeWord(char **str, int *word_len, bool *word, char ***ptr, int *n){
  if(*word){
    ensure_str(str, word_len);
    (*str)[*word_len] = '\0';
    ensure_ptr(ptr, n);
    (*ptr)[*n] = *str;
    (*n)++;
    *word = false;
    *word_len = 0;
    *str = NULL;
  }
}
void storeStringsIn2dPointerArray(char ***ptr, int *n){
  char *str = NULL;
  bool word = false;
  int word_len = 0;
  char ch;
  while(1){
      ch = getchar();
      if(ch == '\n'){
        finalizeWord(&str, &word_len, &word, ptr, n);
        ensure_ptr(ptr, n);
        (*ptr)[*n] = NULL;
        break;
      }else if(ch == ' '){
        finalizeWord(&str, &word_len, &word, ptr, n);
      }else{
        ensure_str(&str, &word_len);
        str[word_len++] = ch;
        word = true;
      }
  }
}
void releaseMemoryPrint(char ***ptr){
  for(int i = 0; (*ptr)[i] != NULL; i++){
    printf("%s ", (*ptr)[i]);
    free((*ptr)[i]);
  }
  free(*ptr);
}
int main(){
  char **ptr = NULL;
  int n = 0;
  printf("Enter the string: ");
  storeStringsIn2dPointerArray(&ptr, &n);
  releaseMemoryPrint(&ptr);
  return 0;
}
*/

// Question 222 ********Assignment-40_Question-2 ***************
// Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[5][30];
  int i;
  printf("Enter 5 strings: \n");
  for(i = 0; i < 5; i++){
    fgets(str[i], sizeof(str[i]), stdin);
    str[i][strcspn(str[i], "\n")] = '\0';
  }
  for(int i = 0; i < 5; i++){
    int count = 0, j = 0;
    while(str[i][j]){
      if(str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u' || str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U'){
        count++;
      }
      j++;
    }
    if(count){
      printf("The number of vowels in the string \"%s\" is: %d\n", str[i], count);
    }
  }
  return 0;
}
*/

// Question 223 ********Assignment-40_Question-3 ***************
// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
/*
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
void sortNames(char str[10][20], int n){
  // for(int i = 0; i < n - 1; i++){
  //   int j = i + 1;
  //   int k = 0;
  //   while(j < n){
  //     if(str[i][k] > str[j][k]){
  //       char temp[20];
  //       strcpy(temp, str[i]);
  //       strcpy(str[i], str[j]);
  //       strcpy(str[j], temp);
  //     }else if(str[i][k] == str[j][k]){
  //       int a = k + 1;
  //       while(1){
  //         if(str[i][a] > str[j][a]){
  //           char temp[20];
  //           strcpy(temp, str[i]);
  //           strcpy(str[i], str[j]);
  //           strcpy(str[j], temp);
  //           break;
  //         }else if(str[i][a] == str[j][a]){
  //           a++;
  //         }else{
  //           break;
  //         }
  //       }
  //     }
  //     j++;
  //   }
  // }

                    // or
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      if(strcmp(str[i], str[j]) > 0){
        char temp[20];
        strcpy(temp, str[i]);
        strcpy(str[i], str[j]);
        strcpy(str[j], temp);
      }
    }
  }
}
int main(){
  char str[10][20];
  bool isWord = false;
  printf("Enter 10 cities names: \n");
  for(int i = 0; i < 10; i++){
    int j = 0;
    while(1){
      char ch = getchar();
      if(ch != '\n' && ch != ' '){
        str[i][j++] = tolower(ch);
        isWord = true;
      }else if(ch == ' ' || ch == '\n'){
        if(isWord){
          str[i][j] = '\0';
          isWord = false;
          break;
        }
        continue;
      }
    }
  }
  sortNames(str, 10);
  printf("The sorted city names are: \n \n");
  for(int i = 0; i < 10; i++){
    printf("%s\n", str[i]);
  }
  return 0;
}
*/

// Question 224 ********Assignment-40_Question-4 ***************
// Write a function to store each word a string in a 2 dimensional char array.
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void storeWord2dArray(char str[], char wrd[][20], int *couunt){
  char * token = strtok(str, " ");
  while(token != NULL){
    strcpy(wrd[*couunt], token);
    (*couunt)++;
    token = strtok(NULL, " ");
  }
}
int main(){
  char str[200];
  char wrd[50][20];
  printf("Enter something which will be stored in 2D array: \n");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  int count = 0;

  storeWord2dArray(str, wrd, &count);

  printf("The strings stored in the 2D array are: \n\n");
  for(int i = 0; i < count; i++){
    printf("%s\n", wrd[i]);
  }
  return 0;
}
*/

//  OR
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
void storeWord2dArray(char str[], char wrd[][20], int *couunt){
  int i = 0, j = 0;
  bool isWord = false;
  while(str[i]){
    if(str[i] != ' '){
      wrd[*couunt][j++] = str[i];
      isWord = true;
    }else if(str[i] == ' '){
      if(isWord){
        wrd[*couunt][j] = '\0';
        (*couunt)++;
        j = 0;
        isWord = false;
      }
    }
    i++;
  }
  if(isWord){
    wrd[*couunt][j] = '\0';
    (*couunt)++;
  }
  wrd[*couunt][0] = '\0';
}
int main(){
  char str[200];
  char wrd[50][20];
  printf("Enter something which will be stored in 2D array: \n");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  int count = 0;

  storeWord2dArray(str, wrd, &count);

  printf("The strings stored in the 2D array are: \n\n");
  for(int i = 0; i < count; i++){
    printf("%s\n", wrd[i]);
  }
  return 0;
}
// */

// Question 225 ********Assignment-40_Question-5 ***************
// Write a function to remove duplicate names stored in the list of names stored in a 2d char array.
/*
#include <stdio.h>
#include <string.h>
void removeDuplicateNames(char str[][20]){
  int i = 0;
  while(str[i][0]){
    int j = i+1;
    while(str[j][0]){
      if(strcmp(str[i], str[j]) == 0){
         int k = j;
        while(str[k][0]){
          strcpy(str[k], str[k + 1]);
          k++;
        }
      }else{
        j++;
      }
    }
    i++;
  }
}
int main(){
  char str[100][20];
  printf("Enter names : \n");
  int i = 0, j = 0;
    char ch;
    while((ch = getchar()) != '\n'){
      if(ch == ' '){
        str[i][j] = '\0';
        i++;
        j = 0;
      }else{
        str[i][j++] = ch;
      }
    }
    str[i++][j] = '\0';
    str[i][0] = '\0';
    removeDuplicateNames(str);
    printf("\n The names after removing duplicates are: \n\n");
    for(int i = 0; str[i][0]; i++){
      printf("%s \n", str[i]);
    }
    return 0;
}
*/


// Question 226 ********Assignment-41_Question-1 ***************
// Write a program to find words ending with a letter 's' and store each such word in a 2d char array.
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[100], wrd[20][20];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  int i = 0, k = 0;
  while(str[i]){
    while(str[i] == ' ') i++;
    int j = i;
    while(str[j] != ' ' && str[j] != '\0'){
      if((str[j] == 's') && (str[j+1] == ' ' || str[j+1] == '\0')){
        int l = 0;
        while(i <= j){
          wrd[k][l++] = str[i++];
        }
        wrd[k++][l] = '\0';
        j++;
        break;
      }else{
        j++;
      }
    }
    if(str[j] == ' '){
      i = j + 1;
    }else if(str[j] == '\0'){
      break;
    }
  }
  wrd[k][0] = '\0';
  for(int i = 0; wrd[i][0]; i++){
    printf("%s\n", wrd[i]);
  }
  return 0;
}
*/

// Question 227 ********Assignment-41_Question-2 ***************
// Write a function to return the most repeating character in a list of strings.
/*
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  int i = 0, freq[256] = {0};
  while(str[i]){
    if(str[i] != ' '){
      freq[(unsigned char)str[i]]++;
    }
    i++;
  }
  char ch = str[0], max = freq[(unsigned char)str[0]];
  for(int i = 1; i < 256; i++){
    if(freq[i] > max){
      max = freq[i];
      ch = (char)i;
    }
  }
  printf("The character '%c' has the highest frequency of %d\n", ch, max);
  return 0;
}
*/

// Question 228 ********Assignment-41_Question-3 ***************
// Write a function to check whether a pair of strings are anagram or not. Both the strings are stored in a 2d char array.
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void checkAnagram(char str[][20]){
  int k = 0, j = 0;
  int n1 = strlen(str[0]), n2 = strlen(str[1]);
  if(n1 != n2){
    printf("The strings are not anagram\n");
    return;
  }
  while(k < 2){
    for(int i = 0; i < n1 - 1; i++){
      for(j = i + 1; j < n1; j++){
        if(str[k][i] > str[k][j]){
          char temp = str[k][i];
          str[k][i] = str[k][j];
          str[k][j] = temp;
        }
      }
    }
    for(int i = 0; i < n1; i++){
      str[k][i] = tolower(str[k][i]);
    }
    k++;
  }
  if(strcmp(str[0], str[1]) == 0){
    printf("The strings are anagram\n");
  }else{
    printf("The strings are not anagram\n");
  }
}
int main(){
  char str[2][20];
  printf("Enter two strings: \n");
  for(int i = 0; i < 2; i++){
    fgets(str[i], sizeof(str[i]), stdin);
    str[i][strcspn(str[i], "\n")] = '\0';
  }
  checkAnagram(str);
  return 0;
}
// */

// Question 229 ********Assignment-41_Question-4 ***************
// Write a function to store all the words in a given string which are starting from 'a', in a two dimensional char array.
/*
#include <stdio.h>
#include <string.h>
void storeWrdStartA(char str[], char wrd[][20]){
  int i = 0, k = 0;
  while(str[i]){
    if((i== 0 && str[i] == 'a') || (str[i-1] == ' ' && str[i] == 'a')){
      int j = 0;
      while(str[i] != ' ' && str[i] != '\0'){
        wrd[k][j++] = str[i++];
      }
      wrd[k++][j] = '\0';
    }else{
      i++;
    }
  }
  wrd[k][0] = '\0';
  for(int i = 0; wrd[i][0]; i++){
    printf("%s\n", wrd[i]);
  }
}
int main(){
  char str[100], wrd[20][20];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  storeWrdStartA(str, wrd);
  return 0;
}
// */

// Question 230 ********Assignment-41_Question-5 ***************
// A 2d array is full with 10 email ids. Write a function to find how many of them belongs to gmail.com
/*
#include <stdio.h>
#include <string.h>
void findGmail(char str[][40]){
  char gmail[] = "@gmail.com";
  int i = 0, count = 0;
  while(i<10){
    int j = 0, k = 0;
    while(str[i][j]){
      if(str[i][j] == gmail[k]){
        j++, k++;
      }else{
        j++;
        k = 0;
      }
      if(k == strlen(gmail)){
        count++;
      }
    }
    i++;
  }
  if(count){
    printf("The number of gmail ids found : %d\n", count);
  }else{
    printf("No gmail ids found\n");
  }
}
int main(){
  char str[10][40];
  printf("Enter 10 email ids: \n");
  for(int i = 0; i < 10; i++){
    fgets(str[i], sizeof(str[i]), stdin);
    str[i][strcspn(str[i], "\n")] = '\0';
  }
  findGmail(str);
  return 0;
}
*/


