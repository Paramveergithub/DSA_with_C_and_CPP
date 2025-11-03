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
