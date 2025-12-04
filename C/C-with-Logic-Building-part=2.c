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
