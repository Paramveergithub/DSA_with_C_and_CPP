// gcc -std=c11 -o a.out C-with-Logic-Building.c && a.out
// Question 1 ********Assignment-1_Question-1 ***************
// Write a program to print "Hello, Students" on the screen.
/*
#include <stdio.h>
int main()
{
  printf("Hello, Student!\n");
  return 0;
}
*/

// Question 2 ********Assignment-1_Question-2 ***************
// Write a program to print Hello in the first line and Students in the second line
/*
#include <stdio.h>
int main()
{
  printf("Hello,\n");
  printf("Student!\n");
  // printf("Hello,\nStudent!\n");
  return 0;
}
*/

// Question 3*******Assignment-1_Question-3 ***************
/*
// Write a program to print "MySirG" on the screen. (Remember to use double quotes)
#include <stdio.h>
int main()
{
  printf("\"MySirG\"");
  return 0;
}
*/

// Question 4 *******Assignment-1_Question-4 ***************
/*
// Write a program to print \n on the screen
#include <stdio.h>
int main()
{
  printf("\\n");
  return 0;
}
*/

// Question 5 *******Assignment-1_Question-5 ***************
// Write a program to print \r on the screen
/*
#include <stdio.h>
int main()
{
  printf("\\r");
  return 0;
}
// */

// Question 6 ********Assignment-1_Question-6 ***************
// Write a program to print "Teacher's Day" on the screen. (Remember to print in double and single quotes)
/*
#include <stdio.h>
int main()
{
  printf("\"Teacher's Day\"");
  return 0;
}
*/

// Question 7 *******Assignment-1_Question-7 ***************
// Write a program to calculate sum of two numbers. Numbers are entered by the user
/*
#include <stdio.h>
int main()
{
  int a, b, c;
  scanf("%d %d", &a, &b);
  c = a + b;
  printf("%d", c);
  return 0;
}
*/

// Question 8 *******Assignment-1_Question-8 ***************
// Write a program to calculate square of a given number. Number is entered by the user
/*
#include <stdio.h>
int main()
{
  int a, b;
  scanf("%d", &a);
  b = a * a;
  printf("%d", b);
  return 0;
}
*/

// Question 9 *******Assignment-1_Question-9 ***************
// Write a program to calculate area of a rectangle. Length and breadth are entered by the user
/*
#include <stdio.h>
int main()
{
  int l, b;
  pritf("Enter length and breadth: ");
  scanf("%d %d", &l, &b);
  int a = l * b;
  printf("%d", a);
  return 0;
}
*/

// Question 10 ***************Assignment-1_Question-10 ***************
// WAP to find the area of a circle. Radius is entered by the user
/*
#include <stdio.h>
int main()
{
  float area, radius;
  float pi = 3.1416;
  scanf("%f", &radius);
  area = pi * (radius * radius);
  printf("%.2f", area);
  return 0;
}
*/

// Question 11 ***************Assignment-2_Question-1 ***************
// WAP to find the average of three numbers. Three numbers are entered by the user
/*
#include <stdio.h>
int main()
{
  int a, b, c, d;
  printf("Enter three integers: ");
  scanf("%d %d %d", &a, &b, &c);
  d = (a + b + c) / 3;
  printf("Average of the three integers: %d", d);
  return 0;
}
*/

// Question 12 ***************Assignment-2_Question-2 ***************
// WAP to find the circumference of a circle. Diameter is entered by the user
/*
#include <stdio.h>
int main()
{
  int diameter;
  float pi = 3.14;
  printf("Enter diameter of a circle: ");
  scanf("%d", &diameter);
  printf("Circumference of the circle: %.2f", pi * diameter);
  return 0;
}
*/

// Question 13 ***************Assignment-2_Question-3 ***************
// WAP to find the simple interest. Principal, Rate and Time are entered by the user
/*
#include <stdio.h>
int main()
{
  int Principal, Rate, Time;
  float SI;
  printf("Enter Principal, Rate and Time: ");
  scanf("%d %d %d", &Principal, &Rate, &Time);
  SI = (Principal * Rate * Time) / 100;
  printf("Simple Interest: %.2f", SI);
  return 0;
}
*/

// Question 14 ***************Assignment-2_Question-4 ***************
// WAP to find the volume of a cuboid. Length, breadth and height are entered by the user.
/*
#include <stdio.h>
int main()
{
  int length, breadth, height;
  printf("Enter length, breadth and height of a cuboid: ");
  scanf("%d %d %d", &length, &breadth, &height);
  printf("Volume of the cuboid: %d", length * breadth * height);
  return 0;
}
*/

// Question 15 ********Assignment-2_Question-5*********
// write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
/*
#include <stdio.h>
int main()
{
  int costPricePerDozen, sellingPricePerDozen;
  float costPriceFor25, sellingPriceFor25;
  printf("Enter Cost Price and Selling Price per dozen: ");
  scanf("%d %d", &costPricePerDozen, &sellingPricePerDozen);
  costPriceFor25 = (costPricePerDozen/ 12.0) * 25;
  sellingPriceFor25 = (sellingPricePerDozen / 12.0) * 25;
  float profitOrLoss = sellingPriceFor25 - costPriceFor25;
  if (profitOrLoss > 0) {
    printf("Profit earned: %.2f\n", profitOrLoss);
  } else if (profitOrLoss < 0) {
    printf("Loss incurred: %.2f\n", -profitOrLoss);
  } else {
    printf("No profit, no loss.\n");
  }
  return 0;
}
*/

// Question 16 *****Assignment-3_Question-1********
// Write a program to input a character from the user and print its ASCII code.
/*
#include <stdio.h>
int main()
{
  char a;
  printf("Enter a character: ");
  scanf(" %c", &a);
  printf("The ASCII value of %c is %d", a, a);
  return 0;
}
*/

// Question 17 *************Assignment-3_Question-2********
// Write a program to input an ASCII code from the user and print its corresponding character.
/*
#include <stdio.h>
int main()
{
  int a;
  printf("Enter an ASCII value: ");
  scanf(" %d", &a);
  printf("The character of %d is %c", a, a);
  return 0;
}
*/

// Question 18 *************Assignment-3_Question-3********
// Write a program to input three characters from the user and display characters with their ASCII values.
/*
#include <stdio.h>
int main()
{
  char a, b, c;
  printf("Enter three integers: ");
  scanf(" %c %c %c", &a, &b, &c);
  printf("The ASCII values of \"%c\", \"%c\" and \"%c\" are  %d, %d and %d respectively.", a, b, c, a, b, c);
  return 0;
}
*/

// Question 19 *************Assignment-3_Question-4********
// Write a program to print last digit of a given number.
/*
#include <stdio.h>
int main()
{
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  printf("Last digit of %d is %d", a, a % 10);
  return 0;
}
*/

// Question 20 *************Assignment-3_Question-5********
// Write a program to print a given number without its last digit.
/*
#include <stdio.h>
int main()
{
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  printf("The integer without its last digit is %d", a / 10);
  return 0;
}
*/

// Question 21 *************Assignment-4_Question-1********
// Write a program to calculate size of a character constant.
/*
#include <stdio.h>
int main()
{
  char a;
  int size;
  printf("Enter a character: ");
  scanf(" %c", &a);
  size = sizeof(a);
  printf("Size of character %c is %d bytes \n", a, size);
}
*/

// gcc -std=c11 -o a.out firstProgram.c && a.out

// Question 22 *************Assignment-4_Question-2********
// Write a program to calculate size of a real constant.
/*
#include <stdio.h>
int main()
{
  float a;
  int size;
  printf("Enter a float number: ");
  scanf("%f", &a);
  size = sizeof(a);
  printf("Size of float number %f is %d bytes \n", a, size);
  return 0;
}
*/

// Question 23 *************Assignment-4_Question-3********
// Write a program with one char type variable. Assign 'A' in the variable. Now change the value of the variable from 'A' to 'B' using increment operator.
/*
#include <stdio.h>
int main()
{
  char a = 'A';
  a++;
  printf("The next character after 'A' is '%c'\n", a);
  return 0;
}
*/

// Question 24 *************Assignment-4_Question-4********
// Write a program to swap values of two int variables.
/*
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  int temp = a;
  a = b;
  b = temp;
  printf("Swap values are %d and %d\n", a, b);
  return 0;
}
*/
// Question 25 *********Assignment-4_Question-5********
// Write a program to swap values of two int variables without using third variable.
/*
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("Swap values are %d and %d\n", a, b);
  return 0;
}
*/

// Question 26 *************Assignment-4_Question-6********
// Write a program to swap values of two int variables without using third variable and without using +, - operators.
/*
#include <stdio.h>
int main()
{
  int a, b;  // 5 3
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  a = a ^ b;
  b = a ^ b;
  a = a ^ b;
  printf("Swap values are %d and %d\n", a, b);
  return 0;
}
*/

// Question 27 ***************Assignment-4_Question-7********
//  Write a program to swap values of two int variables in single line arithmetic expression.
/*
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
//write a program to swap values of two int variables in single line arithmetic expression
  a = (a + b) - (b = a);
  printf("Swap values are %d and %d\n", a, b);
  return 0;
}
*/

// Question 28 ***************Assignment-5_Question-1********
//  Write a program to input a three digit number and display the sum of the digits. 2. Write a program to find ASCII code of the character '+'.
/*
#include <stdio.h>
int main()
{
  int a, sum = 0;
  printf("Enter a three digit number: ");
  scanf("%d", &a);
  int original = a;
  while (a > 0){
    sum += a%10;
    a /= 10;
  }
  printf("Sum of digits of %d is %d\n", original, sum);
  return 0;
}
*/

// Question 29 ***************Assignment-5_Question-2********
//  Write a program to print size of an int, a float, a char and a double type variable 4. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
/*
#include <stdio.h>
int main()
{
  char a = '+';
  printf("ASCII value of '%c' is %d\n", a, a);
  return 0;
}
*/

// Question 30 ***************Assignment-5_Question-3********
//  Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
/*
#include <stdio.h>
int main()
{
  int a;
  float b;
  char c;
  double d;
  printf("Size of int: %zu bytes\n", sizeof(a));
  printf("Size of float: %zu bytes\n", sizeof(b));
  printf("Size of char: %zu bytes\n", sizeof(c));
  printf("Size of double: %zu bytes\n", sizeof(d));
  return 0;
}
*/

// Question 31 ***************Assignment-5_Question-4********
// Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
/*
#include <stdio.h>
int main()
{
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  a = a/10;
  a = a*10;
  printf("The integer without its last digit, but with last digit 0 is %d\n", a);
}
*/

// Question 32 ***************Assignment-5_Question-5********
// Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
/*
#include <stdio.h>
int main()
{
  int num, digit;
  printf("Enter a number and a digit : ");
  scanf("%d %d", &num, &digit);
  num = num * 10 + digit;
  printf("The new number is %d\n", num);
  return 0;
}
*/

// Question 33 ********Assignment-6_Question-1 ***************
// Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.
/*
#include <stdio.h>
int main()
{
  float INR;
  printf("Enter amount in INR: ");
  scanf("%f", &INR);
  float USD = INR / 84.23;
  printf("Amount in USD: %.2f\n", USD);
  return 0;
}
*/

// Question 34 ********Assignment-6_Question-2 ***************
// Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
/*
#include <stdio.h>
int power(int x){
  int result = 1;
  while (x > 0) {
    result *= 10;
    x--;
  }
  return result;
}
int main()
{
  int a, n, k;
  printf("Enter a number, its digit and rotation count: ");
  scanf("%d %d %d", &a , &n, &k);
  int powNk = power(n - k);
  int powK = power(k);
  int lastPart = a % powK;
  int firstPart = a / powK;
  int newNumber = lastPart * powNk + firstPart;
  printf("The new number is %d\n", newNumber);
  return 0;
}
*/

// Question 35 ********Assignment-6_Question-3 ***************
// What will be the value stored in the variable x after executing following statement: x=10>8>4;
/*
#include <stdio.h>
int main()
{
  int x = 10>8>4; //0
  printf("The value of x is %d\n", x);
}
*/

// Question 36 ********Assignment-6_Question-4 ***************
// What will be the value stored in the variable x after executing following statement: x=!2>-2;
/*
#include <stdio.h>
int main()
{
  int x = !2>-2; //1
  printf("The value of x is %d\n", x);
}
*/

// Question 37 ********Assignment-6_Question-5 ***************
//  What will be the value stored in the variable x after executing following statement: x=3<0&&5>0;
/*
#include <stdio.h>
int main()
{
  int x = 3 < 0 && 5 > 0; // 0
  printf("The value of x is %d\n", x);
}
*/

// Question 38 ********Assignment-7_Question-1 ***************
// Write a program to check whether a given number is positive or non positive.
/*
#include <stdio.h>
int main(){
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  if(a > 0){
    printf("The number %d is positive.\n", a);
  } else{
    printf("The number is non-positive.\n");
  }
}
*/

// Question 39 ********Assignment-7_Question-2 ***************
//  Write a program to check whether a given number is divisible by 5 or not.
/*
#include <stdio.h>
int main(){
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  if(a % 5 == 0){
    printf("The number %d is divisible by 5.\n", a);
  } else{
    printf("The number %d is not divisible by 5.\n", a);
  }
}
*/

// Question 40 ********Assignment-7_Question-3 ***************
//  Write a program to check whether a given number is an even number or an odd number.
/*
#include <stdio.h>
int main(){
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  if(a % 2 == 0){
    printf("The number %d is even.\n", a);
  } else{
    printf("The number %d is odd.\n", a);
  }
  return 0;
}
*/

// Question 41 ********Assignment-7_Question-4 ***************
//  Write a program to check whether a given number is an even number or an odd number without using % operator.
/*
#include <stdio.h>
int main(){
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  if(a / 2.0 == 0){
    printf("The number %d is even.\n", a);
  } else{
    printf("The number %d is odd.\n", a);
  }
  return 0;
}
*/

// Question 42 ********Assignment-7_Question-5 ***************
// Write a program to check whether the given number is even or odd using a bitwise operator.
/*
#include <stdio.h>
int main(){
  int a;
  printf("Enter an integer: ");
  scanf("%d", &a);
  if(a & 1){
    printf("The number %d is odd.\n", a);
  } else{
    printf("The number %d is even.\n", a);
  }
}
*/

// Question 43 ********Assignment-8_Question-1 ***************
// Write a program to check whether a given number is a three digit number or not.
/*
#include <stdio.h>
int main() {
    int a, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &a);
    while (a > 0){
      a = a / 10;
      count++;
    }
    if(count == 3){
      printf("The number is a three-digit number.\n");
    } else {
      printf("The number is not a three-digit number.\n");
    }
    return 0;
}
*/

// Question 44 ********Assignment-8_Question-2 ***************
//  Write a program to print greater between two numbers. Print one number if both are the same.
/*
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("The larger number is %d\n", a);
    } else if (b > a) {
        printf("The larger number is %d\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }
    return 0;
}
*/

// Question 45 ********Assignment-8_Question-3 ***************
//  Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
/*
#include <stdio.h>
int main(){
  int a, b, c;
  float discriminant;
  printf("Enter three integers: ");
  scanf("%d %d %d", &a, &b, &c);
  discriminant = b * b - 4 * a * c;
  if (discriminant > 0) {
    printf("The roots are real and distinct.\n");
  } else if (discriminant == 0) {
    printf("The roots are real and equal.\n");
  } else {
    printf("The roots are complex.\n");
  }
}
*/

// Question 46 ********Assignment-8_Question-4 ***************

// Write a program to check whether a given year is a leap year or not.
// it should be divided by 4, if it is century year then it should be divisible by 100 and 400 to be a leap year
/*
#include <stdio.h>
int main(){
  int Year;
  printf("Enter a year: ");
  scanf("%d", &Year);
  if (Year % 4 == 0) {
    if (Year % 100 == 0) {// it is century year
      if (Year % 400 == 0) {
        printf("%d is a leap year.\n", Year);
      } else {
        printf("%d is not a leap year.\n", Year);
      }
    } else {
      printf("%d is a leap year.\n", Year);
    }
  } else {
    printf("%d is not a leap year.\n", Year);
  }
}
*/

// Question 47 ********Assignment-8_Question-5 ***************
// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
/*
#include <stdio.h>
int main(){
  int a, b, c;
  printf("Enter three integers: ");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b && a > c) {
    printf("The largest number is %d\n", a);
  } else if (b > a && b > c) {
    printf("The largest number is %d\n", b);
  } else if (c > a && c > b) {
    printf("The largest number is %d\n", c);
  } else {
    printf("There is no unique largest number.\n");
  }
}
*/

// Question 48 ********Assignment-9_Question-1 ***************
//  Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
/*
#include <stdio.h>
int main(){
  int costPrice, sellingPrice;
  printf("Enter Cost Price and Selling Price: ");
  scanf("%d %d", &costPrice, &sellingPrice);
  float profitOrLoss = ((float)(sellingPrice - costPrice) / costPrice) * 100;

  if (profitOrLoss > 0) {
    printf("Profit of %2.f %%\n", profitOrLoss);
  } else if (profitOrLoss < 0) {
    printf("Loss of %2.f %%\n", -profitOrLoss);
  } else {
    printf("No profit, no loss.\n");
  }
}
*/

// Question 49 ********Assignment-9_Question-2 ***************
// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
/*
#include <stdio.h>
int main(){
  int a, b, c, d, e;
  printf("Enter five subject's marks: ");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  if(a >= 33 && b >= 33 && c >= 33 && d >= 33 && e >= 33){
    printf("You have passed the exam.\n");
  } else {
    printf("You have failed the exam.\n");
  }
}
*/

// Question 50 ********Assignment-9_Question-3 ***************
// Write a program to check whether a given alphabet is in uppercase or lowercase. 4. Write a program to check whether a given number is divisible by 3 and divisible by 2.
/*
#include <stdio.h>
int main(){
  char alphabet;
  printf("Enter an alphabet: ");
  scanf(" %c", &alphabet);
  if(alphabet >= 'A' && alphabet <= 'Z') {
    printf("The alphabet %c is uppercase.\n", alphabet);
    } else if(alphabet >= 'a' && alphabet <= 'z') {
      printf("The alphabet %c is lowercase.\n", alphabet);
      } else {
        printf("The character %c is not an alphabet.\n", alphabet);
        }
}
*/
