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


// Question 276********Assignment-6_Question-2 ***************
// Define a function to sort an array of strings in ascending or descending order depending on bool type argument (true for ascending and false for descending). Use default argument to implement it.
/*
#include <iostream>
#include <string>
using namespace std;
void sortArray(string arr[], int n, bool order = true){
// void sortArray(string arr[], int n, bool order = false){
  if(order){
    for(int i=0; i<n-1; i++){
      for(int j=0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
          string temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
    cout<<"\nSorted Ascending array is: ";
    for(int i=0; i<5; i++){
      cout<<arr[i]<<endl;
    }
  }else{
    for(int i=0; i<n-1; i++){
      for(int j=0; j<n-i-1; j++){
        if(arr[j]<arr[j+1]){
          string temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
    cout<<"\nSorted Descending array is: ";
    for(int i=0; i<5; i++){
      cout<<arr[i]<<" "<<endl;
    }
  }
}
int main(){
  string str[5];
  cout<<"Enter 5 strings: ";
  for(int i=0; i<5; i++){
    cin>>str[i];
  }
  int n = sizeof(str)/sizeof(str[0]);
  sortArray(str, n, 1);
  return 0;
}
// */

// Question 277********Assignment-6_Question-3 ***************
// Define a function to rotate an array by n positions in the d direction. Implement position and direction using default arguments. Argument d can be -1 or 1 denoting left or right direction. Argument n should be the last argument with default value 1. 
/*
#include <iostream>
using namespace std;
void rotate(int arr[], int s, int d = 1, int n = 1){
  for(int r=0; r<n; r++){
    int t = arr[s-1];
    for(int i=s-1; i>0; i--){
      arr[i] = arr[i-1];
    }
    arr[0] = t;
  }
}
// void rotate(int arr[], int s, int d = -1, int n = 1){
//   for(int r=0; r<n; r++){
//     int t = arr[0];
//     for(int i=0; i<s-1; i++){
//       arr[i] = arr[i+1];
//     }
//     arr[s-1] = t;
//   }
// }
int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  rotate(arr, n);
  cout<<"Array after rotation is: ";
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
// */

// Question 278********Assignment-6_Question-4 ***************
// Define a function to calculate LCM of three numbers.
/*
#include <iostream>
using namespace std;
void calLCM(int a, int b, int c){
  if(a==0 || b==0 || c==0){
    cout<<"LCM is not possible"<<endl;
    return;
  }else if(a<0){
    a=-a;
  }else if(b<0){
    b=-b;
  }else if(c<0){
    c=-c;
  }
  int i=1, j=1, k=1;
  while(1){
    if(a*i == b*j && b*j == c*k){
      cout<<"LCM of "<<a<<", "<<b<<" and "<<c<<" is: "<<a*i<<endl;
      break;
    }
    if((a*i) < (b*j)){
      if((a*i) < (c*k)){
        i++;
      }else{
        k++;
      }
    }else if((b*j) < (c*k)){
      if((b*j) < (a*i)){
        j++;
      }else{
        i++;
      }
    }else{
      k++;
    }
  }
}
int main(){
  int a, b, c;
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;
  calLCM(a, b, c);
  return 0;
}
// */

// Question 279********Assignment-6_Question-5 ***************
// Define a function to print all the prime factors of a given number. [ for example num=36, prime factors are 2, 3]
/*
#include <iostream>
using namespace std;
void isPrime(int n){
  int i=2;
  while(i<n){
    if(n%i==0){
      break;
    }
    i++;
  }
  if(i==n){
    cout<<n<<" ";
  }
}
void primeFactors(int n){
  int i=2;
  while(n>1){
    while(n%i==0){
      n=n/i;
    }
    isPrime(i);
    i++;
  }
}
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  primeFactors(n);
  return 0;
}
// */

// Question 280********Assignment-7_Question-1 ***************

// Define a function to calculate HCF of two numbers.
/*
#include <iostream>
using namespace std;
void calHcf(int a, int b){
  int min = (a<b)?a:b;
  while(min){
    if(a%min==0 && b%min==0){
      cout<<"HCF of "<<a<<" and "<<b<<" is: "<<min<<endl;
      break;
    }
    min--;
  }
}
int main(){
  int a, b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;
  calHcf(a, b);
  return 0;
}
// */


// Question 281********Assignment-7_Question-2 ***************
// Define overloaded functions to calculate volume of a cuboid, cone and sphere.
/*
#include <iostream>
using namespace std;
void volume(int l, int b, int h){
  cout<<"Volume of cuboid is: "<<l*b*h<<endl;
}
void volume(int r, int h){
  cout<<"Volume of cone is: "<<(3.14*r*r*h)/3<<endl;
}
void volume(int r){
  cout<<"Volume of sphere is: "<<(4*3.14*r*r*r)/3<<endl;
}
int main(){
  int l, b, h;
  cout<<"Enter length, breadth and height of cuboid: ";
  cin>>l>>b>>h;
  volume(l, b, h);
  int r, height;
  cout<<"Enter the radius and height of cone: ";
  cin>>r>>height;
  volume(r, height);
  int radius;
  cout<<"Enter the radius of sphere: ";
  cin>>radius;
  volume(radius);
  return 0;
}
// */

// Question 282********Assignment-7_Question-3 ***************
// Define a function to print a substring from startIndex(inclusive) to endIndex(exclusive). Define function in such a way that if second argument is not provided, string will print till the last possible index.
/*
#include <iostream>
using namespace std;
void substring(string str, int s, int e=-1){
  if(e==-1){
    e = str.length();
  }
  for(int i=s; i<e; i++){
    cout<<str[i];
  }
}
int main(){
  string str;
  cout<<"Enter a string: ";
  cin>> str;
  int s, e;
  cout<<"Enter the starting index: ";
  cin>>s;
  char choice;
  cout<<"Do you want to enter the ending index? (y/n): ";
  cin>>choice;
  if(choice=='y' || choice=='Y'){
    cout<<"Enter the ending index: ";
    cin>>e;
    substring(str, s, e);
  }else{
    e = str.length();
    substring(str, s);
  }
  return 0;
}
// */

// Question 283********Assignment-7_Question-4 ***************
// Define a function to swap two arrays.
/*
#include <iostream>
using namespace std;
void swapArray(int arr1[], int arr2[], int n){
  for(int i=0; i<n; i++){
    int temp = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = temp;
  }
}
int main(){
  int n1, n2;
  cout<<"Enter the size of first and second array: ";
  cin>>n1>>n2;
  int arr1[n1], arr2[n2];
  cout<<"Enter the elements of first array: ";
  for(int i=0; i<n1; i++){
    cin>>arr1[i];
  }
  cout<<"Enter the elements of second array: ";
  for(int i=0; i<n2; i++){
    cin>>arr2[i];
  }
  swapArray(arr1, arr2, n1);
  cout<<"First array after swapping: ";
  for(int i=0; i<n1; i++){
    cout<<arr1[i]<<" ";
  }
  cout<<"\nSecond array after swapping: ";
  for(int i=0; i<n2; i++){
    cout<<arr2[i]<<" ";
  }
  return 0;
}
// */

// Question 284********Assignment-7_Question-5 ***************
// Define a function to merge two sorted arrays of same size.
/*
#include <iostream>
using namespace std;
void mergeArray(int arr1[], int arr2[], int arr3[], int n){
   int i=0, j=0, k=0;
  while(i<n && j<n){
    if(arr1[i]<arr2[j])
      arr3[k++]=arr1[i++];
    else
      arr3[k++]=arr2[j++];
  }
    while(i<n)
      arr3[k++]=arr1[i++];
    while(j<n)
      arr3[k++]=arr2[j++];
}
int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr1[n];
  cout<<"Enter the elements of array: ";
  for(int i=0; i<n; i++){
    cin>>arr1[i];
  }
  int arr2[n];
  cout<<"Another array elements enter here: ";
  for(int i=0; i<n; i++){
    cin>>arr2[i];
  }
  int arr3[n*2];
  mergeArray(arr1, arr2, arr3 ,n);
  cout<<"Merged array is: ";
  for(int i=0; i<2*n; i++){
    cout<<arr3[i]<<" ";
  }
  return 0;
}
// */

// Question 285********Assignment-8_Question-1 ***************
// Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number.
/*
#include <iostream>
using namespace std;
class Complex{
  private:
    int real, imag;
  public:
    void setData(int r, int i){
      real = r;
      imag = i;
    }
    void showData(){
      cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
  Complex c1;
  c1.setData(3, 4);
  c1.showData();
  return 0;
}
// */


// Question 286********Assignment-8_Question-2 ***************
// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time.
/*
#include <iostream>
using namespace std;
class Time{
  private:
  int hours, minutes, seconds;
  public:
  void setTime(int h, int m, int s){
    hours = h;
    minutes = m;
    seconds = s;
  }
  void showTime(){
    cout<<hours<<" : "<<minutes<<" : "<<seconds<<endl;
  }
};
int main(){
  Time t1;
  t1.setTime(2, 30, 45);
  t1.showTime();
  return 0;
}
// */

// Question 287********Assignment-8_Question-3 ***************
// Define a class Date to represent date (like d=31, m=12, y=2022). Declare appropriate number of instance member variables and also define instance member functions to set date and get date.
/*
#include <iostream>
using namespace std;
class Date{
  private:
    int day, month, year;
  public:
    void setDate(int d, int m, int y){
      day = d;
      month = m;
      year = y;
    }
    void showDate(){
      cout<<"d = "<<day<<", m = "<<month<<", y = "<<year<<endl;
    }
};
int main(){
  Date date1;
  date1.setDate(15, 8, 2023);
  date1.showDate();
  return 0;
}
// */

// Question 288********Assignment-8_Question-4 ***************
// In question 3, define a methods to display date in the following pattern 
// 1. 31-12-2022
// 2. 31-Dec-2022
/*
#include <iostream>
using namespace std;
class Date{
  private:
    int day, month, year;
  public:
    void setDate(int d, int m, int y){
      day = d;
      month = m;
      year = y;
    }
    void displayNumaeric(){
      cout<<day<<"-"<<month<<"-"<<year<<endl;
    }
    void displayMonthName(){
      string monthName[13] = {"", "Jan", "Feb", "Mar", "April", "May", "June", "July", "Aug", "Sep", "Octo", "Nov", "Dec"};
      cout<<day<<"-"<<monthName[month]<<"-"<<year<<endl;
    }
};
int main(){
  Date d;
  d.setDate(15, 8, 2023);
  d.displayNumaeric();
  d.displayMonthName();
  return 0;
}
*/

// Question 289********Assignment-8_Question-5 ***************
// Define a class Circle with radius as its property. Provide setRadius() and getRadius() methods. Also define methods to return area and circumference of circle.
/*
#include <iostream>
using namespace std;
class Circle{
  private:
    float radius;
  public:
  void setRadius(float r){
    radius = r;
  }
  void getRadius(){
    cout<<"\nRadius of circle is: "<<radius<<endl;
  }
  void area(){
    cout<<"Area of circle is: "<<3.14*radius*radius<<endl;
  }
  void circumference(){
    cout<<"Circumference of circle is: "<<2*3.14*radius<<endl;
  }
};
int main(){
  Circle c;
  c.setRadius(5.5);
  c.getRadius();
  c.area();
  c.circumference();
  return 0;
}
// */

// Question 290********Assignment-9_Question-1 ***************
// Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts. Also define following member functions
// 1. void setData(int,int)
// 2. void showData()
// 3. Complex add(Complex)
// 4. Complex subtract(Complex)
// 5. Complex multiply(Complex)
/*
#include <iostream>
using namespace std;
class Complex{
  private:
    int real, imag;
  public:
  void setData(int r, int i){
    real = r;
    imag = i;
  }
  void showData(){
    cout<<real<<" + "<<imag<<"i"<<endl;
  }
  Complex add(Complex c2){
    Complex temp;
    temp.real = real + c2.real;
    temp.imag = imag + c2.imag;
    return temp;
  }
  Complex subtract(Complex c2){
    Complex temp;
    temp.real = real - c2.real;
    temp.imag = imag - c2.imag;
    return temp;
  }
  Complex multiply(Complex c2){
    Complex temp;
    temp.real = (real * c2.real) - (imag * c2.imag);
    temp.imag = (real * c2.imag) + (imag * c2.real);
    return temp;
  }
};
int main(){
  Complex c1;
  c1.setData(3, 4);
  Complex c2;
  c2.setData(1, 2);
  Complex c3;
  c3 = c1.add(c2);
  c3.showData();
  c3 = c1.subtract(c2);
  c3.showData();
  c3 = c1.multiply(c2);
  c3.showData();
  return 0;
}
// */

// Question 291********Assignment-9_Question-2 ***************
// Define a class Time to represent a time with instance variables him and s to store hour, minute and second. Also define following member functions
// 1. void setTime(int,int,int)
// 2. void showTime()
// 3. void normalize()
// 4. Time add(Time)
// 5. bool is_greater(Time)
/*
#include <iostream>
using namespace std;
class Time{
  private:
  int h, m, s;
  public:
  void setTime(int hours, int minutes, int seconds){
    h = hours;
    m = minutes;
    s = seconds;
  }
  void showTime(){
    cout<<h<<" : "<<m<<" : "<<s<<endl;
  }
  void normalizeTime(){
    if(s>=60){
      m += s/60;
      s = s%60;
    }
    if(m>=60){
      h += m/60;
      m = m%60;
    }
  }
  Time add(Time t2){
    Time temp;
    temp.s = s + t2.s;
    temp.m = m + t2.m;
    temp.h = h + t2.h;
    temp.normalizeTime();
    return temp;
  }
  bool is_greater(Time t2){
    if(h > t2.h){
      return true;
    }else if(h < t2.h){
      return false;
    }else{
      if(m > t2.m){
        return true;
      }else if(m < t2.m){
        return false;
      }else{
        if(s > t2.s){
          return true;
        }else{
          return false;
        }
      }
    }
  }
};
int main(){
  Time t1;
  t1.setTime(10, 45, 50);
  Time t2;
  t2.setTime(12, 30, 20);
  Time t3;
  t3 = t1.add(t2);
  t3.showTime();
  if(t1.is_greater(t2)){
    cout<<"t1 is greater than t2"<<endl;
  }else{
    cout<<"t2 is greater than t1"<<endl;
  }
  return 0;
}
// */

// Question 292********Assignment-9_Question-3****************
// 3. Define a class TestResult with properties roll_no, right, wrong, net_score. Also define class properties right_weightage, wrong weightage. Provide methods to set and get all the properties.

// 4. Write a driver function main() to use TestResult class. Create an array to 5 TestResult objects, set values to all the objects and display the results in sorted order (by net_score).
/*
#include <iostream>
using namespace std;
class TestResult{
 private:
  int rollNo;
  int right;
  int wrong;
  int netScore;
 public:
  static int rightWeightage;
  static int wrongWeightage;
  void setData(int r, int ri, int w){
    rollNo = r;
    right = ri;
    wrong = w;
    netScore = (right * rightWeightage) - (wrong * wrongWeightage);
  }
  void showData(){
    cout << "\nRoll No: " << rollNo << endl;
    cout << "Right Answers: " << right << endl;
    cout << "Wrong Answers: " << wrong << endl;
    cout << "Net Score: " << netScore << endl;
  }
  static void setWeightage(int r, int w){
    rightWeightage = r;
    wrongWeightage = w;
  }
  int getNetScore() const{
    return netScore;
  }
};
int TestResult::rightWeightage = 2;
int TestResult::wrongWeightage = 1;
void sortedResult(TestResult arr[], int n){
  for (int i = 0; i < n - 1; i++){
    for (int j = 0; j < n - i - 1; j++){
      if (arr[j].getNetScore() < arr[j + 1].getNetScore())
      {
        TestResult temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
int main(){
  TestResult s[5];
  TestResult::setWeightage(3, 1);
  for (int i = 0; i < 5; i++) {
    cout << "Enter data for student " << i + 1 << endl;
    int id, rightAns, wrongAns;
    cout << "Roll No: ";
    cin >> id;
    cout << "Right Answers: ";
    cin >> rightAns;
    cout << "Wrong Answers: ";
    cin >> wrongAns;
    s[i].setData(id, rightAns, wrongAns);
  }

  sortedResult(s, 5);

  for (int i = 0; i < 5; i++){
    s[i].showData();
  }
  return 0;
}
// */

// Question 293********Assignment-9_Question-5 
// Define a class Matrix to represent a 3x3 order matrix. Provide appropriate methods and properties to the class. Also define following methods in the class:
// 1. Matrix add(Matrix)
// 2. Matrix sub(Matrix)
// 3. Matrix multiply (Matrix)
// 4. Matrix transpose()
// 5. bool is_singular()
/*
#include <iostream>
using namespace std;
class matrix{
  private:
  int arr[3][3];
  public:
  matrix(){
    cout<<"Enter elements of 3x3 matrix: ";
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        cin>>arr[i][j];
      }
    }
  }
  matrix (int reBuild[3][3]){
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        arr[i][j] = reBuild[i][j];
      }
    }
  }
  void showMatrix(){
    cout<<"Matrix is: "<<endl;
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  matrix add(matrix m2){
    int res[3][3];
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        res[i][j] = arr[i][j] + m2.arr[i][j];
      }
    }
    matrix m3(res);
    return m3;
  }
  matrix subtract(matrix m2){
    int res[3][3];
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        res[i][j] = arr[i][j] - m2.arr[i][j];
      }
    }
    matrix m3(res);
    return m3;
  }
  matrix multiply(matrix m2){
    int res[3][3] = {0};
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        for(int k=0; k<3; k++){
          res[i][j] += arr[i][k] * m2.arr[k][j];
        }
      }
    }
    matrix m3(res);
    return m3;
  }
  matrix transpose(){
    int res[3][3];
    for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
        res[j][i] = arr[i][j];
      }
    }
    matrix m3(res);
    return m3;
  }
  bool isSingular(){
    int det = arr[0][0]*(arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1]) -
              arr[0][1]*(arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]) +
              arr[0][2]*(arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);
    return (det == 0);
  }
};

int main(){
  cout<<"Enter first matrix: "<<endl;
  matrix m1;
  cout<<"Enter second matrix: "<<endl;
  matrix m2;

  matrix sum = m1.add(m2);
  cout<<"Addition of two matrices: "<<endl;
  sum.showMatrix();

  matrix subtraction = m1.subtract(m2);
  cout<<"Subtraction of two matrices: "<<endl;
  subtraction.showMatrix();

  matrix multiplication = m1.multiply(m2);
  cout<<"Multiplication of two matrices: "<<endl;
  multiplication.showMatrix();

  matrix transpose = m1.transpose();
  cout<<"Transpose of first matrix: "<<endl;
  transpose.showMatrix();

  cout<<"first matrix is "<<(m1.isSingular() ? "singular" : "not singular")<<endl;
  return 0;
}
// */

// Question 294********Assignment-10_Question-1 ***************
// 1. Define a class Cuboid with length, breadth and height as instance member variables. Define constructors to initialise member variables.
/*
#include <iostream>
using namespace std;
class Cuboid{
  private:
   int length, breadth, height;
  public:
  Cuboid(int l, int b, int h){
    length = l;
    breadth = b;
    height = h;
  }
};
int main(){
  Cuboid c1(10, 5, 8);
  return 0;
}
// */

// Question 295********Assignment-10_Question-2 ***************
// 2. Define a class Customer with instance members cust_id, name, email, mobile. Define non parameterised constructor and parameterised constructor in the class. 
/*
#include <iostream>
#include <cstring>
using namespace std;
class Customer{
  private:
   int cust_id;
   char name[40];
   char email[40];
   char mobile[15];
  public:
  Customer(){
    cust_id = 0;
    strcpy(name, "");
    strcpy(email, "");
    strcpy(mobile, "");
  }
  Customer(int id, char n[], char e[], char m[]){
    cust_id = id;
    strcpy(name, n);
    strcpy(email, e);
    strcpy(mobile, m);
  }
};
int main(){
  cout<<"Enter customer details: "<<endl;
  cout<<"Customer ID: ";
  int id; cin>>id;
  cout<<"Name: "; char n[40]; cin.getline(n, 40);
  cout<<"Email: "; char e[40]; cin.getline(e, 40);
  cout<<"Mobile: "; char m[15]; cin.getline(m, 15);
  Customer c1(id, n, e, m);
  return 0;
}
// */




