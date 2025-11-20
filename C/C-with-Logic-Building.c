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

// Question 51 ********Assignment-9_Question-4 ***************
// Write a program to check whether a given number is divisible by 3 and divisible by 2. 
/*
#include <stdio.h>
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(num % 3 == 0 && num % 2 == 0){
    printf("The number %d is divisible by 3 and 2.\n", num);
  }else{
    printf("The number %d is not divisible by 3 and 2.\n", num);
  }
}
*/

// Question 52 ********Assignment-9_Question-5 ***************
// Write a program to check whether a given number is divisible by 7 or divisible by 3.
/*
#include <stdio.h>
int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(num % 7 == 0){
    printf("The number %d is divisible by 7.\n", num);
  }else if(num % 3 == 0){
    printf("The number %d is divisible by 3.\n", num);
  }else{
    printf("The number %d is not divisible by 7 or 3.\n", num);
  }
}
*/

// Question 53 ********Assignment-10_Question-1 ***************
// Write a program to check whether a given number is positive, negative or zero.
/*
#include <stdio.h>
int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num > 0) {
    printf("The number %d is positive.\n", num);
  } else if (num < 0) {
    printf("The number %d is negative.\n", num);
  } else {
    printf("The number %d is zero.\n", num);
  }
  return 0;
}
*/

// Question 54 ********Assignment-10_Question-2 ***************
// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
/*
#include <stdio.h>
int main() {
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  if(ch >= 'A' && ch <= 'Z') {
    printf("The character '%c' is uppercase.\n", ch);
  } else if(ch >= 'a' && ch <= 'z') {
    printf("The character '%c' is lowercase.\n", ch);
  } else if(ch >= '0' && ch <= '9') {
    printf("The character '%c' is a digit.\n", ch);
  }else {
    printf("The character '%c' is a special character.\n", ch);
  }
}
*/

// Question 55 ********Assignment-10_Question-3 ***************
// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
/*
#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter the lengths of the three sides of a triangle: ");
  scanf("%d %d %d", &a, &b, &c);
  if(a + b > c && a + c > b && b + c > a) {
    printf("The triangle with sides %d, %d, and %d is valid.\n", a, b, c);
  } else {
    printf("The triangle with sides %d, %d, and %d is not valid.\n", a, b, c);
  }
}
*/

// Question 56 ********Assignment-10_Question-4 ***************
// Write a program which takes the month number as an input and display number of days in that month.
/*
#include <stdio.h>
int main() {
  int month;
  printf("Enter a month number (1-12): ");
  scanf("%d", &month);
  if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    printf("The month %d has 31 days.\n", month);
  } else if(month == 4 || month == 6 || month == 9 || month == 11) {
    printf("The month %d has 30 days.\n", month);
  } else if(month == 2) {
    printf("February has either 28 or 29 days depending on whether it's a leap year.\n");
  } else {
    printf("Invalid month number.\n");
  }
}
*/

// Question 57 ********Assignment-11_Question-1 ***************
// Write a program to print MySirG 5 times on the screen
/*
#include <stdio.h>
int main() {
  int i = 5;
  while(i){
    printf("MySirG\n");
    i--;
  }
}
*/

// Question 58 ********Assignment-11_Question-2 ***************
// Write a program to print the first 10 natural numbers.
/*
#include <stdio.h>
int main() {
  int i = 1;
  while(i <= 10) {
    printf("%d\n", i);
    i++;
  }
}
*/

// Question 59 ********Assignment-11_Question-3 ***************
// Write a program to print the first 10 natural numbers in reverse order
/*
#include <stdio.h>
int main() {
  int i = 10;
  while(i >= 1) {
    printf("%d\n", i);
    i--;
  }
}
*/

// Question 60 ********Assignment-11_Question-4 ***************
// Write a program to print the first 10 odd natural numbers.
/*
#include <stdio.h>
int main(){
  int i = 1, n = 10;
  while(n > 0){
    printf("%d ", i);
    i += 2;
    n--;
  }
}
*/

// Question 61 ********Assignment-11_Question-5 ***************
// Write a program to print the first 10 odd natural numbers in reverse order.
/*
#include <stdio.h>
int main()
{
  int n = 10;
  int odd = 2*n - 1;
  while(n > 0){
    printf("%d ", odd);
    odd -= 2;
    n--;
  }
}
*/

// Question 62 ********Assignment-11_Question-6 ***************
// Write a program to print the first 10 even natural numbers.
/*
#include <stdio.h>
int main(){
  int n = 10, even = 2;
  while(n > 0){
    printf("%d ", even);
    even += 2;
    n--;
  }
}
*/

// Question 63 ********Assignment-11_Question-7 ***************
// Write a program to print the first 10 even natural numbers in reverse order.
/*
#include <stdio.h>
int main() {
  int n = 10;
  int even = 2*n;
  while(n > 0){
    printf("%d ", even);
    even -= 2;
    n--;
    }
    }
    */
   
   // Question 64 ********Assignment-11_Question-8 ***************
   // Write a program to print squares of the first 10 natural numbers.
   /*
   #include <stdio.h>
   int main() {
    int n = 10 , i = 1;
    while(n > 0){
    printf("%d ", i * i);
    i++;
    n--;
  }
  }
*/

// Question 65 ********Assignment-11_Question-9 ***************
// Write a program to print cubes of the first 10 natural numbers.
/*
#include <stdio.h>
int main() {
  int n = 10 , i = 1;
  while(n > 0){
    printf("%d ", i * i * i);
    i++;
    n--;
    }
}
*/

// Question 66 ********Assignment-11_Question-10 ***************
// Write a program to print a table of 5.
/*
#include <stdio.h>
int main() {
  int n = 10 , i = 1;
  while(n > 0){
    printf("%d * %d = %d\n", 5 , i, 5 * i);
    i++;
    n--;
  }
}
*/

// Question 67 ********Assignment-12_Question-1 ***************
// Write a program to print MySirG N times on the screen.
/*
#include <stdio.h>
int main() {
  int n;
  printf("Enter how many times you want to print 'MySirG': ");
  scanf("%d", &n);
  while(n > 0){
    printf("MySirG\n");
    n--;
    }
}
*/

// Question 68 ********Assignment-12_Question-2 ***************
// Write a program to print the first N natural numbers.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i = 1;
  while(i <= n){
    printf("%d\n", i);
    i++;
  }
}
*/
   
// Question 69 ********Assignment-12_Question-3 ***************
// Write a program to print the first N natural numbers in reverse order
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(n){
    printf("%d\n", n);
    n--;
    }
    }
*/

// Question 70 ********Assignment-12_Question-4 ***************
// Write a program to print the first N odd natural numbers
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i = 1;
  while(n){
    printf("%d ", i);
    i += 2;
    n--;
  }
}
*/

// Question 71 ********Assignment-12_Question-5 ***************
// Write a program to print the first N odd natural numbers in reverse order.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int odd = 2*n - 1;
  while(n){
    printf("%d ", odd);
    odd -= 2;
    n--;
    }
}
*/

// Question 72 ********Assignment-12_Question-6 ***************
// Write a program to print the first N even natural numbers
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int even = 2;
  while(n){
    printf("%d ", even);
    even += 2;
    n--;
  }
}
*/

// Question 73 ********Assignment-12_Question-7 ***************
// Write a program to print the first N even natural numbers in reverse order
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int even = 2*n;
  while(n){
    printf("%d ", even);
    even -= 2;
    n--;
  }
}
*/

// Question 74 ********Assignment-12_Question-8 ***************
// Write a program to print squares of the first N natural numbers
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i = 1;
  while(n){
    printf("%d ", i * i);
    i++;
    n--;
  }
}
*/

// Question 75 ********Assignment-12_Question-9 ***************
// Write a program to print cubes of the first N natural numbers
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i = 1;
  while(n){
    printf("%d ", i * i * i);
    i++;
    n--;
  }
}
 */
 
// Question 76 ********Assignment-12_Question-10 ***************
// Write a program to print a table of N.
 /*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i = 1, t = 10;
  while(t){
    printf("%d * %d = %d\n", n , i, n * i);
    i++;
    t--;
  }
}
*/

// Question 77 ********Assignment-13_Question-1 ***************
// Write a program to calculate sum of first N natural numbers
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i = 1;
  int sumOfNaturalNumbers = 0;
  while(i <= n){
    sumOfNaturalNumbers += i;
    i++;
  }
  printf("The sum of first %d natural numbers is %d\n", n, sumOfNaturalNumbers);
}
*/

// Question 78 ********Assignment-13_Question-2 ***************
// Write a program to calculate sum of first N even natural numbers
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sumOfEvenNaturalNumbers = n*(n + 1);
  printf("The sum of first %d even natural numbers is %d\n", n, sumOfEvenNaturalNumbers);
}
*/

// Question 79 ********Assignment-13_Question-3 ***************
// Write a program to calculate sum of first N odd natural numbers 
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sumOfOddNaturalNumbers = n * n;
  printf("The sum of first %d odd natural numbers is %d\n", n, sumOfOddNaturalNumbers);
}
*/

// Question 80 ********Assignment-13_Question-4 ***************
// Write a program to calculate sum of squares of first N natural numbers.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sumOfSquaresNaturalNumbers = (n * (n + 1) * (2 * n + 1)) / 6;
  printf("The sum of squares of first %d natural numbers is %d\n", n, sumOfSquaresNaturalNumbers);
}
*/


// Question 81 ********Assignment-13_Question-5 ***************
// Write a program to calculate sum of cubes of first N natural numbers
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int sumOfCubesNaturalNumbers = ((n * (n + 1)) / 2) * ((n * (n + 1)) / 2);
  printf("The sum of cubes of first %d natural numbers is %d\n", n, sumOfCubesNaturalNumbers);
}
*/

// Question 82 ********Assignment-14_Question-1 ***************
// Write a program to calculate factorial of a number.
/*
#include <stdio.h>
int main(){
  int n, i = 1, fact = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    fact *= i;
    i++;
  }
  printf("The factorial of %d is %d\n", n, fact);
}
*/

// Question 83 ********Assignment-14_Question-2 ***************
// Write a program to count digits in a given number
/*
#include <stdio.h>
int main(){
  int n, count = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(n){
    n /= 10;
    count++;
  }
  printf("Digits in the number: %d\n", count);
  return 0;
}
*/

// Question 84 ********Assignment-14_Question-3 ***************
// Write a program to check whether a given number is a Prime number or not.
/*
#include <stdio.h>
int main(){
  int n, i = 1, count = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    if(n % i == 0){
      count++;
    }
    i++;
  }
  if(count == 2){
    printf("The number %d is prime.\n", n);
  } else {
    printf("The number %d is not prime.\n", n);
  }
}
*/

// Question 85 ********Assignment-14_Question-4 ***************
// Write a program to calculate LCM of two numbers.
/*
#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
  int a, b, hcf = 0;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  int minValue = min(a, b);
  while(minValue){
    if(a % minValue == 0 && b % minValue == 0){
      hcf = minValue;
      break;
    }
    minValue--;
  }
  int lcm = (a * b) / hcf;
  printf("LCM of %d and %d is %d\n", a, b, lcm);
}
// */

// Question 86 ********Assignment-14_Question-5 ***************
// Write a program to reverse a given number
/*
#include <stdio.h>
int main()
{
  int n, NN = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n)
  {
    int digit = n % 10;
    NN = NN * 10 + digit;
    n /= 10;
  }
  printf("The reverse of the number is %d\n", NN);
}
*/

// Question 87**********Assignment-15_Question-1 ***************
// Write a program to print all Prime numbers under 100.
/*
#include <stdio.h>
int main(){
  int n = 100, i = 2;
  while(i <= n){
    int j = i, k = 1, count = 0;
    while(k <= j){
      if(j % k == 0){
        count++;
      }
      k++;
    }
    if(count == 2){
      printf("%d ", i);
    }
    i++;
  }
}
*/

// Question 88**********Assignment-15_Question-2 ***************
// Write a program to print all Prime numbers between two given numbers.
/*
#include <stdio.h>
int main(){
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  while(a <= b){
    int j = a, k = 1, count = 0;
    while(k <= j){
      if(j % k == 0){
        count++;
      }
      k++;
    }
    if(count == 2){
      printf("%d ", a);
    }
    a++;
  }
}
*/

// Question 89**********Assignment-15_Question-3 ***************
// Write a program to find next Prime number of a given number.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  n = n+1;
  while(n){
    int j = n, k = 1, count = 0;
    while(k <= j){
      if(j % k == 0){
        count++;
      }
      k++;
    }
    if(count == 2){
      printf("%d ", n);
      break;
    }else{
      n++;
    }
  }
}
*/

// Question 90**********Assignment-15_Question-4 ***************
// Write a program to calculate HCF of two numbers.
/*
#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  int minValue = min(a, b);
  while(minValue){
    if(a % minValue == 0 && b % minValue == 0){
      printf("HCF of %d and %d is %d\n", a, b, minValue);
      break;
    }
    minValue--;
  }
}
*/

// Question 91**********Assignment-15_Question-5 ***************
// Write a program to check whether two given numbers are co-prime numbers or not
/*
#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
int main(){
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  int minValue = min(a, b), count = 0;
  while(minValue){
    if(a % minValue == 0 && b % minValue == 0){
      count++;
    }
    minValue--;
  }
  if(count == 1){
    printf("The numbers %d and %d are co-prime.\n", a, b);
  }else{
    printf("The numbers %d and %d are not co-prime.\n", a, b);
  }
}
*/

// Question 92**********Assignment-16_Question-1 ***************
// Write a program to find the Nth term of the Fibonacci series.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i = 3, prev = 0, curr = 1, fibbonacci = 0;
  while(i <= n){
    fibbonacci = prev + curr;
    prev = curr;
    curr = fibbonacci;
    i++;
  }
  printf("The %dth fibbonacci number is %d\n", n, fibbonacci);
}
*/

// Question 93**********Assignment-16_Question-2 ***************
// Write a program to print first N terms of Fibonacci series.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i = 3, prev = 0, curr = 1, fibbonacci = 0;
  printf("%d %d ", prev, curr);
  while(i <= n){
    fibbonacci = prev + curr;
    prev = curr;
    curr = fibbonacci;
    printf("%d ", fibbonacci);
    i++;
  }
}
*/

// Question 94**********Assignment-16_Question-3 ***************
// Write a program to check whether a given number is there in the Fibonacci series or not.
/*
#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int prev = 0, curr = 1, fibbonacci = 0;
  while (n >= fibbonacci){
    if (n == 0 || n == 1){
      printf("Yes");
      break;
    }else if (n > fibbonacci){
      fibbonacci = prev + curr;
      prev = curr;
      curr = fibbonacci;
      if (n == fibbonacci){
        printf("Yes");
        break;
      }
    }
    if (n < fibbonacci){
      printf("No");
      break;
    }
  }
}
*/

// Question 95**********Assignment-16_Question-4 ***************
// Write a program to check whether a given number is an Armstrong number or not.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int NN = n, p = 0, Armstrong = 0;
  while(NN){
    NN /= 10;
    p++;
  }
  NN = n;
  while(NN){
    int i = 1;
    int rem = NN % 10;
    int R = rem;
    while(i < p){
      R = R * rem;
      i++;
    }
    Armstrong = Armstrong + R;
    NN = NN / 10;
  }
  if(Armstrong == n){
    printf("The number %d is an Armstrong number.\n", n);
  }else{
    printf("The number %d is not an Armstrong number.\n", n);
  }
}
*/


// Question 96**********Assignment-16_Question-5 ***************
// Write a program to print all Armstrong numbers under 1000.
/*
#include <stdio.h>
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int i = 1;
  while(i <= n){
    int armstrong = 0, NN = i, p = 0;
    while(NN){
      NN /= 10;
      p++;
    }
    NN = i;
    while(NN){
      int rem = NN % 10;
      int R = rem;
      int j = 1;
      while(j < p){
        R = R * rem;
        j++;
      }
      armstrong = armstrong + R;
      NN = NN / 10;
    }
    if(armstrong == i){
      printf("%d ", i);
    }
    i++;
  }
}
*/

// Question 97**********Assignment-17_Question-01 ***************
// *
// * *
// * * *
// * * * *
/*
#include <stdio.h>
int main() {
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while(j <= i){
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 98**********Assignment-17_Question-02 ***************
//           *
//         * *
//       * * *
//     * * * *
//   * * * * *
/*
#include <stdio.h>
int main() {
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while( j <= n - i){
      printf("  ");
      j++;
    }
    j = 1;
    while(j <= i){
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 99**********Assignment-17_Question-03 ***************
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *
/*
#include <stdio.h>
int main() {
  int n, i = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i < n){
    int j = 1;
    while( j <= n - i){
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 100**********Assignment-17_Question-04 ***************
//        * * * * *
//          * * * *
//            * * *
//              * *
//                *
/*
#include <stdio.h>
int main() {
  int n, i = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i < n){
    int j = 0;
    while( j < i){
      printf("  ");
      j++;
    }
    j = 0;
    while(j < n - i){
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 101**********Assignment-17_Question-05 ***************
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
/*
#include <stdio.h>
int main() {
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while(j <= i){
      printf("%d ", j);
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 102**********Assignment-17_Question-06 ***************
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
/*
#include <stdio.h>
int main() {
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = i;
    while(j){
      printf("%d ", j);
      j--;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 103**********Assignment-17_Question-07 **************
// A B C D E
//   A B C D
//     A B C
//       A B
//         A
/*
#include <stdio.h>
int main() {
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 0;
    while( j < i){
      printf("  ");
      j++;
    }
    j = 0;
    while(j < n-i+1){
      printf("%c ", 'A' + j);
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 104**********Assignment-17_Question-08 ***************
// 1
// 2 3
// 4 5 6
// 7 8 9 10
/*
#include <stdio.h>
int main() {
 int n, i = 1, k = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while(j <= i){
      printf("%d ", k);
      j++, k++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 105**********Assignment-17_Question-09 ***************
// A B C D E
//   B C D E
//     C D E
//       D E
//         E
/*
#include <stdio.h>
int main() {
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 0;
    while( j < i){
      printf("  ");
      j++;
    }
    char ch = 'A';
    while(ch - 'A' + i <= n){
      printf("%c ", ch + (i - 1));
      ch++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 106**********Assignment-17_Question-10 ***************
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
/*
#include <stdio.h>
int main() {
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    if(i == 1 || i == n){
      while(j <= n){
        printf("* ");
        j++;
      }
      printf("\n");
      i++;
    }else{
      printf("* ");
      j = 1;
      while(j <= n - 2){
        printf("  ");
        j++;
      }
      printf("*\n");
      i++;
    }
  }
}
*/

// Question 107**********Assignment-18_Question-1 ***************
//         *
//       * * *
//     * * * * *
//   * * * * * * *
/*
#include <stdio.h>
int main(){
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while(j <= n-i){
      printf("  ");
      j++;
    }
    j = 1;
    while(j <= 2*i - 1){
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 108**********Assignment-18_Question-2 ***************
// * * * * * * *
//   * * * * *
//     * * *
//       *
/*
#include <stdio.h>
int main(){
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 0;
    while(j <= i - 1){
      printf("  ");
      j++;
    }
    j = i;
    while(j <= 2*n-i){
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 109**********Assignment-18_Question-3 ***************
//         *
//        * *
//       * * *
//      * * * *
/*
#include <stdio.h>
int main(){
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 0;
    while(j < n - i){
      printf(" ");
      j++;
    }
    j = 0;
    while(j < i){
      printf("* ");
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 110**********Assignment-18_Question-4 ***************
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
/*
#include <stdio.h>
int main(){
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while(j <= n - i){
      printf("  ");
      j++;
    }
    j = 1;
    while(j <= i){
      printf("%d ", j);
      j++;
    }
    j = i - 1;
    while(j >= 1){
      printf("%d ", j);
      j--;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 111**********Assignment-18_Question-5 ***************
//     A B C D E F G
//       A B C D E
//         A B C
//           A
/*
#include <stdio.h>
int main(){
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while(j < i){
      printf("  ");
      j++;
    }
    j = 0;
    while(j < 2*n-(2*i-1)){
      printf("%c ", 'A' + j);
      j++;
    }
    printf("\n");
    i++;
  }
}
*/

// Question 112**********Assignment-18_Question-6 ***************
//  A B C D C B A
//    A B C B A
//      A B A
//        A
/*
#include <stdio.h>
int main(){
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while(j < i){
      printf("  ");
      j++;
    }
      j = 0;
      int k = 2*n-((2*i)-1);
    while(j < k){
      if(j <= k/2){
        printf("%c ", 'A' + j);
        j++;
      }else{
        printf("%c ", 'A' + k - j - 1);
        j++;
      }
    }
    printf("\n");
    i++;
  }
}
*/

// Question 113**********Assignment-18_Question-7 ***************
//             1
//            1 1
//           1 2 1
//          1 2 2 1
//         1 2 3 2 1
/*
#include <stdio.h>
int main(){
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while(j <= n - i){
      printf(" ");
      j++;
    }
    if(i%2 != 0){
      j = 1;
      while(j <= (i/2) +1){
        printf("%d ", j);
        j++;
      }
      j = i/2;
      while(j){
        printf("%d ", j);
        j--;
      }
    }else{
      j = 1;
      while(j <= i/2){
        printf("%d ", j);
        j++;
      }
      j = j-1;
      while(j){
        printf("%d ", j);
        j--;
      }
    }
    printf("\n");
    i++;
  }
}
*/

// Question 114**********Assignment-18_Question-8 ***************
//  * * * * * * *
//  * * *   * * *
//  * *       * *
//  *           *
/*
#include <stdio.h>
int main(){
  int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = i-1;
    while(n-j){
      printf("* ");
      j++;
    }
    j = 0;
    while(j < i*2 - 3){
      printf("  ");
      j++;
    }
    if(i == 1){
      j = 1;
      while(j < n){
        printf("* ");
        j++;
      }
    }else{
      j = 0;
      while(j <= n-i){
        printf("* ");
        j++;
      }
    }
    i++;
    printf("\n");
  }
}
*/

// Question 115**********Assignment-18_Question-9 ***************
//  1 2 3 4 3 2 1
//  1 2 3   3 2 1
//  1 2       2 1
//  1           1
/*
#include <stdio.h>
int main(){
    int n, i = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j = 1;
    while(j <= n - i + 1){
      printf("%d ", j);
      j++;
    }
    j = 0;
    while(j < i*2 - 3){
      printf("  ");
      j++;
    }
    if(i == 1){
      j = n - 1;
      while(j >= 1){
        printf("%d ", j);
        j--;
      }
    }else{
      j = n - i + 1;
      while(j >= 1){
        printf("%d ", j);
        j--;
      }
    }
    i++;
    printf("\n");
  }
}
*/

// Question 116**********Assignment-18_Question-10 ***************
//  A B C D C B A
//  A B C   C B A
//  A B       B A
//  A           A
/*
#include <stdio.h>
int main(){
  int n, i =1;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n){
    int j =0;
    while(j < n - i + 1){
      printf("%c ", 'A' + j);
      j++;
    }
    j = 0;
    while(j < i*2-3){
      printf("  ");
      j++;
    }
    if(i == 1){
      j = n - 2;
      while(j >= 0){
        printf("%c ", 'A' + j);
        j--;
      }
    }else{
      j = n - i;
      while(j >= 0){
        printf("%c ", 'A' + j);
        j--;
      }
    }
    i++;
    printf("\n");
  }
}
*/

// Question 117**********Assignment-19_Question-1 ***************
// Write a program which takes the month number as an input and display number of days in that month.
/*
#include <stdio.h>
int main() {
  int month;
  printf("Enter a month number (1-12): ");
  scanf("%d", &month);
  switch(month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      printf("The month %d has 31 days.\n", month);
      break;
    case 4: case 6: case 9: case 11:
      printf("The month %d has 30 days.\n", month);
      break;
    case 2:
      printf("The month %d has 28 or 29 days.\n", month);
      break;
    default:
      printf("Invalid month number.\n");
  }
  return 0;
}
*/

// Question 118**********Assignment-19_Question-2 ***************
// Write a menu driven program with the following options:
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Exit
/*
#include <stdio.h>
int main(){
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Exit\n");
  int choice;
  printf("Enter your choice (1-5): ");
  scanf("%d", &choice);
  switch (choice){
    case 1:
    {
      int a, b;
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
      printf("Result: %d\n", a + b);
      break;
    }
    case 2:
    {
      int a, b;
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
      printf("Result: %d\n", a - b);
      break;
    }
    case 3:
    {
      int a, b;
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
      printf("Result: %d\n", a * b);
      break;
    }
    case 4:
    {
      int a, b;
      printf("Enter two numbers: ");
      scanf("%d %d", &a, &b);
      if (b != 0)
      {
        printf("Result: %.2f\n", (float)a / b);
      }
      else
      {
        printf("Error: Division by zero.\n");
      }
      break;
    }
    case 5:
      printf("Exiting the program.\n");
      break;
    default:
      printf("Invalid choice.\n");
  }
}
*/


// Question 119**********Assignment-19_Question-3 ***************
// Write a program which takes the day number of a week and displays a unique greeting message for the day.
/*
#include <stdio.h>
int main() {
  int day;
  printf("Enter a day number : ");

  if(scanf("%d", &day) != 1 || day < 0) {
    printf("Invalid input.\n");
    return 1;
  }

  switch(day%7) {
    case 0:
    printf("Enjoy your Sunday!\n");
    break;
    case 1:
    printf("Hustling hard because it's Monday!\n");
    break;
    case 2:
    printf("Working hard because it's Tuesday!\n");
    break;
    case 3:
    printf("Studying hard because it's Wednesday!\n");
    break;
    case 4:
    printf("Relaxing because it's Thursday!\n");
    break;
    case 5:
    printf("Having fun because it's Friday!\n");
    break;
    case 6:
    printf("Recharging because it's Saturday!\n");
    break;
  }
}
*/

// Question 120**********Assignment-19_Question-4 ***************
// Write a menu driven program with the following options:
// 1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
// 2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
// 3. Check whether a given set of three numbers are equilateral triangle or not
// 4. Exit
/*
#include <stdio.h>
#include <stdlib.h>
void clearScreen() {
    printf("\033[2J\033[H");
    fflush(stdout);
}
int main() {
  while(1) {
    // clearScreen();
    printf("1. Isosceles Triangle or not?\n");
    printf("2. Right Angled Triangle or not?\n");
    printf("3. Equilateral Triangle or not?\n");
    printf("4. Exit\n");
    int choice;
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice){
      case 1:{
        int a, b, c;
        printf("Enter the lengths of the three sides of the triangle: ");
        scanf("%d %d %d", &a, &b, &c);
        if (a + b > c && a + c > b && b + c > a){
          if (a == b || b == c || c == a){
            printf("The triangle is an isosceles triangle.\n");
          }
          else{
            printf("The triangle is not an isosceles triangle.\n");
          }
        }else{
          printf("The lengths do not form a triangle.\n");
        }
        break;
      }
      case 2: {
          int a, b, c;
          printf("Enter the lengths of the three sides of the triangle: ");
          scanf("%d %d %d", &a, &b, &c);
          if (a + b > c && a + c > b && b + c > a){
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
              printf("The triangle is a right-angled triangle.\n");
            }else{
              printf("The triangle is not a right-angled triangle.\n");
            }
            break;
          }else{
            printf("The lengths do not form a triangle.\n");
          }
          break;
        }
      case 3: {
        int a, b, c;
        printf("Enter the lengths of the three sides of the triangle: ");
        scanf("%d %d %d", &a, &b, &c);
        if (a + b > c && a + c > b && b + c > a){
          if (a == b && b == c){
            printf("The triangle is an equilateral triangle.\n");
          }
          else{
            printf("The triangle is not an equilateral triangle.\n");
          }
          break;
        }else{
          printf("The lengths do not form a triangle.\n");
        }
        break;
      }
      case 4:
        printf("Exiting the program.\n");
        return 0;
      default:
        printf("Invalid choice.\n");
      }
  }
}
// system("clear");
// system("cls");
*/


// Question 121**********Assignment-19_Question-5 ***************
// Convert the following if-else-if construct into switch case:
// if(var == 1)
//   printf("good");
// else if(var == 2)
//   printf("better");
// else if(var == 3)
//   printf("best");
// else
//   printf("invalid");
/*
#include <stdio.h>
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  switch(n){
    case 1: {
      printf("Good");
      break;
    }
    case 2: {
      printf("Better");
      break;
    }
    case 3: {
      printf("Best");
      break;
    }
    default: {
      printf("Invalid number");
      break;
    }
  }
}
*/


// Question 122**********Assignment-20_Question-1 ***************
// Write a program to find and display grade obtained by a student in a test. Grading specifications are as follows:
//    - Marks from 90 to 100: Grade A
//    - Marks from 80 to less than 90: Grade B
//   - Marks from 70 to less than 80: Grade C 
//   - Marks from 60 to less than 70: Grade D
//   - Marks from 50 to less than 60: Grade E
//    - Marks below 50: Grade F
//    - Marks greater than 100 or less than 0 : Invalid Marks
/*
#include <stdio.h>
int main() {
  int n;
  printf("Enter the mark of the student: ");
  scanf("%d", &n);
  switch(n){
    case 90 ... 100:
      printf("Grade A\n");
      break;
    case 80 ... 89:
      printf("Grade B\n");
      break;
    case 70 ... 79:
      printf("Grade C\n");
      break;
    case 60 ... 69:
      printf("Grade D\n");
      break;
    case 50 ... 59:
      printf("Grade E\n");
      break;
    case 1 ... 49:
      printf("Grade F\n");
      break;
    default:
      printf("Invalid mark\n");
      break;
  }
}
*/


// Question 123**********Assignment-20_Question-2 ***************
// Write a menu driven program with the following options:
// 1. Factorial of a number
// 2. Check Even and Odd
// 3. Area of circle
// 4. Sum of first N natural numbers
// 5. Exit
/*
#include <stdio.h>
int main() {
   while(1){
    printf("1. Factorial of a number\n");
    printf("2. Check Even or Odd\n");
    printf("3. Area of a Circle\n");
    printf("4. Sum of first N natural numbers\n");
    printf("5. Exit\n");
    int choice;
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    switch (choice) {
      case 1: {
        int n, i = 1, fact = 1;
        printf("Enter a number: ");
        scanf("%d", &n);
        while(i <= n){
          fact *= i;
          i++;
        }
        printf("The factorial of %d is %d\n", n, fact);
        break;
      }
      case 2: {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n % 2 == 0) {
          printf("The number %d is even.\n", n);
        } else {
          printf("The number %d is odd.\n", n);
        }
        break;
      }
      case 3: {
        float radius, area;
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("The area of the circle is %.2f\n", area);
        break;
      }
      case 4: {
        int n, sum = 0;
        printf("Enter a number: ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
          sum += i;
        }
        printf("The sum of the first %d natural numbers is %d\n", n, sum);
        break;
      }
      case 5: {
        printf("Exiting the program.\n");
        return 0;
      }
      default: {
        printf("Invalid choice.\n");
        break;
      }
    }
  }
}
*/


// Question 124**********Assignment-20_Question-3 ***************
// Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, using switch case statement.
/*
#include <stdio.h>
int main() {
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  switch(ch){
    case 'A' ... 'Z':
      printf("The character %c is an uppercase letter.\n", ch);
      break;
    case 'a' ... 'z':
      printf("The character %c is a lowercase letter.\n", ch);
      break;
    case '0' ... '9':
      printf("The character %c is a digit.\n", ch);
      break;
    default:
      printf("The character %c is a special character.\n", ch);
      break;
  }
}
*/



// Question 125**********Assignment-20_Question-4 ***************
// Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.
/*
#include <stdio.h>
int main(){
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  switch(ch){
    case 'A': case 'E': case 'I': case 'O': case 'U': case 'a': case 'e': case 'i': case 'o': case 'u':
    {
      printf("The character %c is a vowel.\n", ch);
      break;
    }
    case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K': case 'L': case 'M': case 'N': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'V': case 'W': case 'X': case 'Y': case 'Z':
    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k': case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't': case 'v': case 'w': case 'x': case 'y': case 'z':
    {
      printf("The character %c is a consonant.\n", ch);
      break;
    }
    default:{
      printf("The character is not an alphabet.\n");
      break;
    }
  }
}
*/


// Question 126**********Assignment-20_Question-5 ***************
// Write a menu driven program with the following options:
// 1. Calculate LCM of two numbers
// 2. Calculate sum of the digits of a number
// 3. Volume of a cuboid
// 4. Check whether a given number is Prime or not
// 5. Exit
/*
#include <stdio.h>
int main(){
  while(1){
    printf("1. Calculate LCM of two numbers\n");
    printf("2. Calculate sum of the digits of a number\n");
    printf("3. Volume of a cuboid\n");
    printf("4. Check whether a given number is a prime number or not\n");
    printf("5. Exit\n");
    int choice;
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    switch(choice){
      case 1: {
        int a, b, lcm = 0;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        int i = 1, j = 1;
        while(1){
          if(a * i == b * j){
            lcm = a * i;
            break;
          }else if(a * i < b * j){
            i++;
          }else{
            j++;
          }
        }
        printf("The LCM of %d and %d is %d\n", a, b, lcm);
        break;
      }
      case 2: {
        int n, sum = 0;
        printf("Enter a number: ");
        scanf("%d", &n);
        while(n){
          sum += n % 10;
          n /= 10;
        }
        printf("The sum of the digits is %d\n", sum);
        break;
      }
      case 3: {
        float length, width, height, volume;
        printf("Enter the length, width and height of the cuboid: ");
        scanf("%f %f %f", &length, &width, &height);
        volume = length * width * height;
        printf("The volume of the cuboid is %.2f\n", volume);
        break;
      }
      case 4: {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        int i = 2;
        while(i < n){
          if(n % i == 0){
            printf("The number %d is not a prime number.\n", n);
            break;
          }
          i++;
        }
        if(i == n){
          printf("The number %d is a prime number.\n", n);
        }
        break;
      }
      case 5:
        printf("Exiting the program.\n");
        return 0;
      default:
        printf("Invalid choice.\n");
    }
  }
}
*/


// Question 127**********Assignment-21_Question-1 ***************
//  Write a function to calculate the area of a circle. (TSRS)
/*
#include <stdio.h>
int areaCircle(int radius){
  int area = 3.14 * radius * radius;
  return area;
}
int main() {
  int radius;
  printf("Enter the radius of the circle: ");
  scanf("%d", &radius);
  if(radius < 0){
    printf("Invalid radius.\n");
    return 0;
  }
  printf("%d", areaCircle(radius));
}
*/

// Question 128**********Assignment-21_Question-2 ***************
// Write a function to calculate simple interest. (TSRS)
/*
#include <stdio.h>
int SI(int p, int r, int t) {
  return (p * r * t) / 100;
}
int main(){
  int p, r, t;
  printf("Enter the principal amount, rate and time: ");
  scanf("%d %d %d", &p, &r, &t);
  printf("%d", SI(p, r, t));
}
*/


// Question 129**********Assignment-21_Question-3 ***************
// Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
/*
#include <stdio.h>
char* evenOrOdd(int n) {
  if (n % 2 == 0) {
    return "Even";
  } else {
    return "Odd";
  }
}
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("%s", evenOrOdd(n));
}
*/


// Question 130**********Assignment-21_Question-4 ***************
// Write a function to print first N natural numbers (TSRN).
/*
#include <stdio.h>
void nNaturalNumbers(int n) {
  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
  }
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  nNaturalNumbers(n);
}
*/


// Question 131**********Assignment-21_Question-5 ***************
// Write a function to print first N odd natural numbers. (TSRN)
/*
#include <stdio.h>
void nOddNaturalNumbers(int n){
  int j = 1, i = 1;
  while(i <= n){
    printf("%d ", j);
    j += 2;
    i++;
  }
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  nOddNaturalNumbers(n);
}
*/


// Question 132**********Assignment-22_Question-1 ***************
// Write a function to calculate the factorial of a number.(TSRS)
/*
#include <stdio.h>
int factorial(int n){
  int fact = 1;
  for(int i = 1; i <= n; i++){
    fact *= i;
  }
  return fact;
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Factorial of %d is %d ", n, factorial(n));
}
*/


// Question 133**********Assignment-22_Question-2 ***************
// Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
/*
#include <stdio.h>
int factorial(int num){
  int fact = 1;
  for(int i = 1; i <= num; i++){
    fact *= i;
  }
  return fact;
}
int combination(int n, int r){
  if(r > n){
    printf("Invalid input.\n");
    return 0;
  }
  int num = factorial(n);
  int den = factorial(r) * factorial(n - r);
  return num / den;
}

int main(){
  int n, r;
  printf("Enter n items: ");
  scanf("%d", &n);
  printf("Enter r selected items: ");
  scanf("%d", &r);
  printf("The number of combinations of %d items taken %d at a time is %d\n", n, r, combination(n, r));
  return 0;
}
*/


// Question 134**********Assignment-22_Question-3 ***************
// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
/*
#include <stdio.h>
int factorial(int n){
  int fact = 1;
  for(int i = 1; i <= n; i++){
    fact *= i;
  }
  return fact;
}
int main(){
  int n, r;
  printf("Enter n items: ");
  scanf("%d", &n);
  printf("Enter r selected items: ");
  scanf("%d", &r);
  if(r > n){
    printf("Invalid input.\n");
    return 0;
  }
  int permutation = factorial(n) / factorial(n - r); // arrangement
  printf("The number of permutations of %d items taken %d at a time is %d\n", n, r, permutation);
}
// */


// Question 135**********Assignment-22_Question-4 ***************
// Write a function to check whether a given number contains a given digit or not. (TSRS)
/*
#include<stdio.h>
char* containsDigit(int n, int digit){
  while(n){
    if(n % 10 == digit){
      return "Yes";
    }
    n /= 10;
  }
  return "No";
}
int main(){
  int n, digit;
  printf("Enter a number and digit to check: ");
  scanf("%d %d", &n, &digit);
  printf("%s ", containsDigit(n, digit));
}
*/

