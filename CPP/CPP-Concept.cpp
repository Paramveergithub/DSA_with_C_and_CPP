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




