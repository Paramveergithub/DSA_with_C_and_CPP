// Question 255********Assignment-2_Question-1 ***************
// Write a C++ program to print Hello My SirG on the screen.
/*
#include<iostream>
using namespace std;
int main(){
  cout<<"Hello MySirG"<<endl;
  return 0;
}
// */

// Question 256********Assignment-2_Question-2 ***************
// Write a C++ program to print Hello on the first line and My SirG on the second line using endl.
/*
#include <iostream>
using namespace std;
int main(){
  cout<<"Hello"<<endl<<"MySirG";
  return 0;
}
// */

// Question 257********Assignment-2_Question-3 ***************
// Write a C++ program to calculate the sum of two numbers.
/*
#include <iostream>
using namespace std;
int main(){
  int a=3,b=4;
  cout<<a<<" + "<<b<<" = "<<a+b<<endl;
  return 0;
}
// */

// Question 258********Assignment-2_Question-4 ***************
// Write a C++ program to calculate the area of a circle.
/*
#include <iostream>
using namespace std;
int main(){
  int radius;
  cout<<"Enter the radius of circle: ";
  cin>>radius;
  cout<<"Area of circle is: "<<3.14*radius*radius<<endl;
  return 0;
}
// */

// Question 259********Assignment-2_Question-5 ***************
// Write a C++ program to calculate the volume of a cuboid.
/*
#include <iostream>
using namespace std;
int main(){
  int l, b, h;
  cout<<"Enter the length, breadth and height of cuboid: ";
  cin>>l>>b>>h;
  cout<<"Volume of cuboid is: "<<l*b*h<<endl;
  return 0;
}
// */

// Question 260********Assignment-3_Question-1 ***************
// Write a C++ program to calculate an average of 3 numbers.
/*
#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  float avg;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;
  avg=(a+b+c)/3.0;
  cout<<"Average of three numbers is: "<<avg<<endl;
  return 0;
}
// */

// Question 261********Assignment-3_Question-2 ***************
// Write a C++ program to calculate the square of a number.
/*
#include <iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  cout<<"Square of "<<a<<" is: "<<a*a<<endl;
  return 0;
}
// */

// Question 262********Assignment-3_Question-3 ***************
// Write a C++ program to swap values of two int variables without using third variable.
/*
#include <iostream>
using namespace std;
int main(){
  int a, b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  a = a + b;
  b = a - b;
  a = a - b;
  cout<<a<<"  "<<b<<endl;
  return 0;
}
// */

// Question 263********Assignment-3_Question-4 ***************
// Write a C++ program to find the maximum of two numbers.
/*
#include <iostream>
using namespace std;
int main(){
  int a, b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  if(a>b){
    cout<<a<<" is greater"<<endl;
  }
  else if(a<b){
    cout<<b<<" is greater"<<endl;
  }else{
    cout<<"Both are equal"<<endl;
  }
  return 0;
}
// */

// Question 264********Assignment-3_Question-5 ***************
// Write a C++ program to add all the numbers of an array of size 10.
/*
#include <iostream>
using namespace std;
int main(){
  int arr[10];
  int sum=0;
  cout<<"Enter 10 numbers: ";
  for(int i=0; i<10; i++){
    cin>>arr[i];
    sum+=arr[i];
  }
  cout<<"Sum of 10 numbers is: "<<sum<<endl;
  return 0;
}
// */

// Question 265********Assignment-4_Question-1 ***************
//  Define a C++ function to print all prime numbers between two given numbers
/*
#include <iostream>
using namespace std;
void primeNo(int a, int b){
  a++;
  while(a<b){
    int i = 2;
    while(i<a){
      if(a%i==0){
        break;
      }
      i++;
    }
    if(i==a){
      cout<<a<<" ";
    }
    a++;
  }
}
int main(){
  int a, b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  primeNo(a, b);
  return 0;
}
// */


// Question 266********Assignment-4_Question-2 ***************
// Define a C++ function to find the highest value digit in a given number.
/*
#include <iostream>
using namespace std;
void highestValueDigit(int a){
  int maxDigit=0;
  while(a>0){
    int digit = a%10;
    if(digit>maxDigit){
      maxDigit=digit;
    }
    a=a/10;
  }
  cout<<"Highest value digit is: "<<maxDigit<<endl;
}
int main(){
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  highestValueDigit(a);
  return 0;
}
// */

// Question 267********Assignment-4_Question-3 ***************
// Define a C++ function to calculate x raised to the power y.
/*
#include <iostream>
using namespace std;
void calPower(int x, int y){
  int power=x, i=1;
  while(i < y){
    power=power*x;
    i++;
  }
  cout<<x<<"^"<<y<<" = "<<power<<endl;
}
int main(){
  int x, y;
  cout << "Enter a number and its power: ";
  cin >> x >> y;
  calPower(x, y);
  return 0;
}
// */

// Question 268********Assignment-4_Question-4 ***************
// Define a C++ function to print Pascal Triangle up to N lines.
/*
#include <iostream>
using namespace std;
int fact(int n){
  if(n==0 || n==1){
    return 1;
  }
  int factorial=1;
  for(int i=2; i<=n; i++){
    factorial*=i;
  }
  return factorial;
}
void pascalTriangle(int n){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n-i-1; j++){
      cout<<" ";
    }
    for(int j = 0; j <= i; j++){
      cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cin>>n;
  pascalTriangle(n);
  return 0;
}
// */

// Question 269********Assignment-4_Question-5 ***************
// Define a C++ function to check whether a given number is a term in a Fibonacci series or not.
/*
#include <iostream>
using namespace std;
void checkFibTerm(int n){
  int fib = 0, l1 = 0, l2 = 1;
  if(l1 == n || l2 == n){
    cout<<n<<" is a Fibonacci term"<<endl;
    return;
  }
  while(fib < n){
    fib = l1 + l2;
    if(fib == n){
      cout<<n<<" is a Fibonacci term"<<endl;
      return;
    }
    l1 = l2;
    l2 = fib;
  }
  cout<<n<<" is not a Fibonacci term"<<endl;
}
int main(){
  int n;
  cout<<"Enter the number of terms: ";
  cin>>n;
  checkFibTerm(n);
  return 0;
}
// */

// Question 270********Assignment-5_Question-1 ***************
// Define a C++ function to swap data of two int variables using call by reference
/*
#include <iostream>
using namespace std;
void swapThis(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}
int main(){
  int a, b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  swapThis(a, b);
  cout<<"After swapping: "<<a<<" "<<b<<endl;
  return 0;
}
// */


// Question 271********Assignment-5_Question-2 ***************
// Define a C++ function using the default argument that is able to add 2 or 3 numbers. 
/*
#include <iostream>
using namespace std;
int add(int a, int b, int c = 0){
  return a+b+c;
}
int main(){
  int a, b, c;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;
  cout<<"Sum of two numbers is : "<<add(a, b)<<endl;
  cout<<"Sum of three numbers is : "<<add(a, b, c)<<endl;
  return 0;
}
// */

// Question 272********Assignment-5_Question-3 ***************
// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
/*
#include <iostream>
using namespace std;
float area(int r){
  return 3.14*r*r;
}
int area(int l, int b){
  return l*b;
}
float area(int base, int h, float x){
  return base*h*x;
}
int main(){
  int r;
  cout<<"Enter the radius of circle: ";
  cin>>r;
  cout<<"Area of circle is : "<< area(r)<<endl;
  int length, breadth;
  cout<<"Enter length and breadth of rectangle: ";
  cin>>length>>breadth;
  cout<<"Area of rectangle is : "<< area(length, breadth)<<endl;
  int base, height;
  cout<<"Enter base and height of triangle: ";
  cin>>base>>height;
  cout<<"Area of triangle is : "<< area(base, height, 0.5)<<endl;
  return 0;
}
// */

// Question 273********Assignment-5_Question-4 ***************
// Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
/*
#include <iostream>
using namespace std;
int max(int a, int b){
  return (a>b)?a:b;
}
float max(float a, float b){
  return (a>b)?a:b;
}
int main(){
  int a, b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  cout<<max(a, b)<<" is greater"<<endl;
  float x, y;
  cout<<"Enter two real numbers: ";
  cin>>x>>y;
  cout<<max(x, y)<<" is greater"<<endl;
  return 0;
}
// */

// Question 274********Assignment-5_Question-5 ***************
// Write functions using function overloading to add two numbers having different data types.
/*
#include <iostream>
using namespace std;
float add(int a, float b){
  return a+b;
}
float add(float a, int b){
  return a+b;
}
int main(){
  int a;
  float b;
  cout<<"Enter an integer and a real number: ";
  cin>>a>>b;
  cout<<add(a, b)<<endl;
  float x;
  int y;
  cout<<"Enter a real number and an integer: ";
  cin>>x>>y;
  cout<<add(x, y)<<endl;
  return 0;
}
// */

// Question 275********Assignment-6_Question-1 ***************
// Define a C++ function to sort an array of integers in ascending or descending order depending on bool type argument (true for ascending and false for descending). Use default argument to implement it.
/*
#include <iostream>
using namespace std;
// void sortArray(int arr[], int n, bool order = false){
void sortArray(int arr[], int n, bool order = true){
  if(order){
    for(int i=0; i<n-1; i++){
      for(int j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
    cout<<"Sorted Ascending array is: ";
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }
  }
  else{
    for(int i=0; i<n-1; i++){
      for(int j=0; j<n-i-1; j++){
        if(arr[j]<arr[j+1]){
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
    cout<<"Sorted Descending array is: ";
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }
  }
  cout<<endl;
}
int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  sortArray(arr, n, 1);
  return 0;
}
// */


