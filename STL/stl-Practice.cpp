//***************Template Function******************************
// day - 94 1st Question
// Question 443:- Define a function template which takes two arguments of same type and return the greater value.
/*
#include <bits/stdc++.h>
using namespace std;
template<typename T>

T Bigger(T a, T b){
    return (a > b) ? a : b;
}
int main(){
    int a, b; cin>>a>>b;
    cout<<Bigger(a, b);
}
// */


// Day - 94 2nd Question
// Question 444:- Define a function template which takes two arguments of same type and return the smaller value.
/*
#include<bits/stdc++.h>
using namespace std;
template<typename T>
T smaller(T a, T b){
    return a < b ? a : b;
}
int main(){
    int a, b; cin>>a>>b;
    cout<<smaller(a, b);
}
// */



// Day - 94 3rd Question
// Question 445:- Define a function template to print values of an array of any type.
/*
#include<bits/stdc++.h>
using namespace std;
template<typename T>
void printArray(T arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
}
// */



// Day - 94 4th Question
// Question 446:- Define a function template to sort an array of any type.
/*
#include<bits/stdc++.h>
using namespace std;
template<typename T>
void sortArr(T arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
  int arr[] = {5, 4, 3, 2, 1};
  sortArr(arr, 5);
  for(int i = 0; i < 5; i++){
    cout<<arr[i]<<" ";
  }
}
// */



// Day - 95 1st Question
// Question 447:- Define a function template to find the greatest element among the values stored in an array of any type.
/*
#include<bits/stdc++.h>
using namespace std;
template<typename T>
T Bigger(T arr[], int n){
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
  int arr[] = {5, 43, 3, 233, 1};
  cout<<Bigger(arr, 5)<<endl;
}
// */


//**************Template Class**********************/
// Day - 95 2nd Question
// Question 448:- Define data structure Array using class template.
/*
#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Array{
    private:
     int cap;
     int size;
     T *arr;
    public:
    Array(int c){
        cap = c;
        size = 0;
        arr = new T[cap];
    }
    Array(const Array &obj){
        cap = obj.cap;
        size = obj.size;
        arr = new T[cap];
        for(int i = 0; i<cap; i++){
            arr[i] = obj.arr[i];
        }
    }
    Array & operator=(const Array &obj){
        if(this == &obj){
            return *this;
        }
        delete[] arr;
        cap = obj.cap;
        size = obj.size;
        arr = new T[cap];
        for(int i = 0; i<cap; i++){
            arr[i] = obj.arr[i];
        }
        return *this;
    }
    int capacity(){
        return cap;
    }
    int findIndex(T value){
        for(int i = 0; i<size; i++){
            if(arr[i] == value){
                return i;
            }
        }
        return -1;
    }
    int count(){
        return size;
    }
    T getElement(int index){
        if(index < 0 || index >= size){
            cout<<"invailid index"<<endl;
            return T();
        }
        return arr[index];
    }
    bool isFullCapacity(){
        return size == cap;
    }
    void delElement(int index){
        if(index < 0 || index >= size){
            cout<<"invailid index"<<endl;
            return;
        }
        for(int i = index; i<size-1; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }
    void print(){
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void edit(int i){
        cin>>arr[i];
    }
    bool isEmpty(){
        return size == 0;
    }
    void insertAtIndex(int index, T value){
        if(index < 0 || index > size){
            cout<<"invailid index"<<endl;
            return;
        }
        for(int i = size; i>index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = value;
        size++;
    }
    void insertAtEnd(T value){
        if(size == cap){
            cout<<"Array is full"<<endl;
            return;
        }
        arr[size] = value;
        size++;
    }
    ~Array(){
        delete[] arr;
    }
};

int main(){
    Array<int> a(10);
    a.insertAtEnd(2);
    a.insertAtEnd(3);
    a.insertAtEnd(4);
    a.insertAtEnd(5);
    a.insertAtEnd(6);
    // a.print();
    // a.edit(1);
    // a.print();
    // a.insertAtIndex(3, 10);
    // a.insertAtEnd(22);
    // a.delElement(0);
    // a.print();
    Array<int>b = a;
    // b.print();
    // Array<int>c(b);
    Array<int>c(10);
    c = b;
    c.print();
}
// */




// Day - 95 3rd Question
// Question 449:- Define data structure Dynamic array using class template.
/*
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class DynamicArray{
    private:
    int cap;
    int size;
    T *arr;
    public:
    DynamicArray(int c){
        cap = c;
        size = 0;
        arr = new T[cap];
    }

    void doubleArray(){
        cap = cap*2;
        T *newArr = new T[cap];
        for(int i = 0; i<size; i++){
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }
    void halfArray(){
        cap  = cap/2;
        T *newArray = new T[cap];
        for(int i = 0; i<cap; i++){
            newArray[i] = arr[i];
        }
        delete[] arr;
        arr = newArray;
    }
    void insertAtIndex(int index, T value){
        if(index < 0 || index > size){
            cout<<"invailid index"<<endl;
            return;
        }
        if(size == cap){
            doubleArray();
        }
        if(size <= cap/2){
            halfArray();
        }
        for(int i = size; i>index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = value;
        size++;
    }
    void append(int value){
        if(size == cap){
            doubleArray();
        }
        if(size <= cap/2){
            halfArray();
        }
        arr[size] = value;
        size++;
    }
    void delElement(int index){
        if(index < 0 || index >= size){
            cout<<"invailid index"<<endl;
            return;
        }
        for(int i = index; i<size-1; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }
    void print(){
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
  DynamicArray<int> a(5);
  a.insertAtIndex(0, 2);
  a.insertAtIndex(1, 3);
  a.insertAtIndex(2, 4);
  a.insertAtIndex(3, 5);
  a.insertAtIndex(4, 6);
  a.append(7);
  a.append(8);
  a.append(9);
  a.append(10);
  a.append(11);
  a.print();
  a.delElement(2);
  a.print();
}
// */


// Day - 95 4th Question
// Question 450:- Define data structure linked list using class template.
/*
#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct Node{
    T data;
    Node<T> *next;
    Node(T val){
        data = val;
        next = NULL;
    }
};
template<typename T>
class SLL{
    private:
    Node<T> *start;
    public:
    SLL(){
        start = NULL;
    }
    Node<T> *getFirstNode(){
        return start;
    }
    void insertAtFirst(T value){
        Node<T> *temp = new Node<T>(value);
        temp->next = start;
        start = temp;
    }
    void insertAtLast(T value){
        Node<T> *temp = new Node<T>(value);
        if(start == NULL){
            start = temp;
        }else{
            Node<T> *curr = start;
            while(curr->next != NULL){
                curr = curr->next;
            }
            curr->next = temp;
        }
    }
    void insertAfterNode(T value, T after){
        Node<T> *temp = new Node<T>(value);
        Node<T> *curr = start;
        while(curr->data != after){
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
    void search(T value){
        Node<T> *curr = start;
        while(curr != NULL){
            if(curr->data == value){
                cout<<"found"<<endl;
                return;
            }
            curr = curr->next;
        }
        cout<<"not found"<<endl;
    }
    void print(){
        Node<T> *curr = start;
        while(curr != NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }   
    void delAnyNode(T value){
        Node<T> *curr = start;
        if(start == NULL){
            cout<<"underflow"<<endl;
        }else{
            if(start->data == value){
                start = start->next;
                delete curr;
            }else{
                while(curr->next->data != value){
                    curr = curr->next;
                }
                curr->next = curr->next->next;
                delete curr->next;
            }
        }
    }
    void delFirstNode(){
        if(start == NULL){
            cout<<"underflow"<<endl;
        }else{
            Node<T> *temp = start;
            start = start->next;
            delete temp;
        }
    }
    void delLastNode(){
        if(start == NULL){
            cout<<"underflow"<<endl;
        }else{
            Node<T> *curr = start;
            while(curr->next->next != NULL){
                curr = curr->next;
            }
            delete curr->next;
            curr->next = NULL;
        }
    }
    ~SLL(){
        Node<T> *curr = start;
        while(curr != NULL){
            Node<T> *temp = curr;
            curr = curr->next;
            delete temp;
        }
    }
};

int main(){
    SLL<int> list;
    list.insertAtFirst(5);
    list.insertAtLast(10);
    list.insertAfterNode(15, 10);
    list.print();
    list.search(15);
    list.delAnyNode(10);
    list.delFirstNode();
    list.delLastNode();
    list.print();
    return 0;
}
// */


// Day - 96 1st Question
// Question 451:- Define data structure Doubly Linked list using class template.
/*
#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct Node{
    T data;
    Node<T> *next;
    Node<T> *prev;
    Node(T val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

template<typename T>
class DLL{
    private:
    Node<T> *start;
    public:
    DLL(){
        start = NULL;
    }
    Node<T> *getFirstNode(){
        return start;
    }
    void insertAtBeginning(T value){
        Node<T> *newNode = new Node<T>(value);
        newNode->next = start;
        if(start != NULL){
            start->prev = newNode;
        }
        start = newNode;
    }
    void insertAtEnd(T value){
        Node<T> *newNode = new Node<T>(value);
        if(start == NULL){
            start = newNode;
            return;
        }
        Node<T> *temp = start;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    void insertAfterNode(T value, T after){
        Node<T> *newNode = new Node<T>(value);
        Node<T> *curr = start;
        while(curr->data != after){
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        newNode->prev = curr;
    }
    void search(T value){
        Node<T> *curr = start;
        while(curr != NULL){
            if(curr->data == value){
                cout<<"found"<<endl;
                return;
            }
            curr = curr->next;
        }
        cout<<"not found"<<endl;
    }
    void print(){
        Node<T> *curr = start;
        while(curr != NULL){
            cout<<curr->data<<" ";
            curr = curr->next;
        }
        cout<<endl;
    }
    void delAnyNode(T value){
        Node<T> *curr = start;
        if(start == NULL){
            cout<<"underflow"<<endl;
        }else{
            if(start->data == value){
                start = start->next;
                if(start != NULL){
                    start->prev = NULL;
                }
                delete curr;
            }else{
                while(curr->next->data != value){
                    curr = curr->next;
                }
                curr->next = curr->next->next;
                if(curr->next != NULL){
                    curr->next->prev = curr;
                }
                delete curr->next;
            }
        }
    }
    ~DLL(){
        Node<T> *curr = start;
        while(curr != NULL){
            Node<T> *temp = curr;
            curr = curr->next;
            delete temp;
        }
    }
};

int main(){
    DLL<int> list;
    list.insertAtBeginning(5);
    list.insertAtEnd(10);
    list.insertAfterNode(15, 10);
    list.print();
    list.search(15);
    list.delAnyNode(10);
    list.print();
    return 0;  
}
// */


// Day - 96 2nd Question
// Question 452:- Define data structure Stack using class template.
/* 
#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct Node{
    T data;
    Node<T> *next;
    Node(T val){
        data = val;
        next = NULL;
    }
};

template<typename T>
class Stack{
  private:
  Node <T> *top;
  public:
  Stack(){
    top = NULL;
  } 

  void push(T value){
    Node<T> *newNode = new Node<T>(value);
    newNode->next = top;
    top = newNode;
  }

  void pop(){
    if(top == NULL){
      cout<<"underflow"<<endl;
    }else{
      Node<T> *temp = top;
      top = top->next;
      delete temp;
    }
  }
  void peek(){
    if(top == NULL){
      cout<<"underflow"<<endl;
    }else{
      cout<<top->data<<endl;
    }
  }
  void print(){
    Node<T> *curr = top;
    while(curr != NULL){
      cout<<curr->data<<" ";
      curr = curr->next;
    }
    cout<<endl;
  }
  bool isEmpty(){
    return top == NULL;
  }
  void reverse(){
    Node<T> *curr = top;
    Node<T> *prev = NULL;
    Node<T> *next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    top = prev;
  }
  ~Stack(){
    Node<T> *curr = top;
    while(curr != NULL){
      Node<T> *temp = curr;
      curr = curr->next;
      delete temp;
    }
  }
};

int main(){
    Stack<int> s;
    if(s.isEmpty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.print();
    s.pop();
    s.print();
    s.peek();
    s.reverse();
    s.print();
    return 0;
}
// */



// Day - 96 3rd Question
// Question 453:- Define data structure Queue using class template.
/*
#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct Node{
    T data;
    Node<T> *next;
    Node(T val){
        data = val;
        next = NULL;
    }    
};
template<typename T>
class Queue{
  private:
  Node <T> *front;
  Node <T> *rear;
  public:
  Queue(){
    front = NULL;
    rear = NULL;
  }
  void insert(T value){
    Node<T> *newNode = new Node<T>(value);
    if(front == NULL){
      front = rear = newNode;
    }else{
      rear->next = newNode;
      rear = newNode;
    }
  }
  void viewRear(){
    if(rear == NULL){
      cout<<"Queue is empty."<<endl;
    }else{
      cout<<"Rear element is: "<<rear->data<<endl;
    }
  }
  void viewFront(){
    if(front == NULL){
      cout<<"Queue is empty."<<endl;
    }else{
      cout<<"Front element is: "<<front->data<<endl;
    }
  }  
  void pop(){
    if(front == NULL){
      cout<<"Queue is empty."<<endl;
    }else{
      Node<T> *temp = front;
      front = front->next;
      delete temp;
    }
  }
  void reverse(){
    Node<T> *curr = front;
    rear = front;
    Node<T> *prev = NULL;
    Node<T> *next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    front = prev;
    rear->next = curr;
  }
  void print(){
    Node<T> *curr = front;
    while(curr != NULL){
      cout<<curr->data<<" ";
      curr = curr->next;
    }
    cout<<endl;
  }
  ~Queue(){
    Node<T> *curr = front;
    while(curr != NULL){
      Node<T> *temp = curr;
      curr = curr->next;
      delete temp;
    }
  }
};
int main(){
    Queue<int> q;
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    q.print();
    q.viewRear();
    q.viewFront();
    q.pop();
    q.print();
    q.viewRear();
    q.viewFront();   //
    q.reverse();
    q.print();
    q.viewRear();
    q.viewFront();
    return 0;  
}
// */


//*******************Array********************* */
// Day - 96 4th Question
// Question 454:- Create an Array object for int values of size 5. Print array elements from right to left using explicit iterator.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int, 5> a = {10, 20, 30, 40, 50};
    array<int, 5>::reverse_iterator it;
    for(auto it = a.rbegin(); it != a.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;  
}
// */



// Day - 97 1st Question
// Question 455:- Create an array object for float values of size 5. calculate average of numbers and display it.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
  array<float, 5> a = {10.5, 20.5, 30.5, 40.5, 50.5};
  array<float, 5>::iterator it;
  float ans=0;
  for(auto it = a.begin(); it != a.end(); it++){
    ans += *it;
  }  
  cout<<ans/a.size()<<endl;
}
// */


// Day - 97 2nd Question
// Question 456:- Create an array object for int values of size 10. Take input from user. find the greatest element of the array.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
  array<int, 10> a;
  for(int i=0; i<10; i++){
    cin>>a[i];
  }
    cout<<"Maximum element is: "<<*max_element(a.begin(), a.end())<<endl;
}
// */


// Day - 97 3rd Question
// Question 457 :- Create an array object for Complex type values of size 5. Write a function to input values, display. Also define a method to calculate sum of all the complex numbers.
/*
#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    }
    void showD(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator +(Complex c){
        Complex temp;                                           
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};
int main(){
    array<Complex, 5> a = {
        Complex(10, 10),
        Complex(20, 20),
        Complex(30, 30),
        Complex(40, 40),
        Complex(50, 50)
    }; 
    for(int i=0; i<5; i++){
        a[i].showD(); 
    }
    Complex sum;
    for(int i=0; i<5; i++){
        sum = sum + a[i];
    }
    sum.showD();    
}
// */


// Day - 97 4th Question
// Question 458:- Create an array for int values of size 10. initialise it with some values. Now sort array elements.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int, 10> a = {3, 4, 1, 6, 9, 0, 5, 2, 7, 8};
    sort(a.begin(), a.end());
    for(auto x: a){
        cout<<x<<" ";
    }  
}
// */



//*******************Vector********************* */
// Day - 98 1st Question
// Question 459:- Create a vector object and initialise it with 5 integer values. Display vector values using subscript operator.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int > v = {10, 20, 30, 40, 50};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;    
}
// */



// Day - 98 2nd Question
// Question 460:- Create a vector object and initialise it with 5 float values. Display vector values using at() method.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<float>v = {10.5, 20.5, 30.5, 40.5, 50.5};
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
// */



// Day - 98 3rd Question
// Question 461:- Create a vector object and initialise it with 5 string values. Display vector values using implicit iterator.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> s = {"param", "naman", "dhaman", "raman", "shyam"};
    for(auto x: s){
        cout<<x<<" ";
    }
}
// */


// Day - 98 4th Question
// Question 462:- Create a vector and initialise it with 5 integer values. Display vector using explicit  iterator.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {10, 20, 30, 40,50};
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
}
// */



// Day - 99 1st Question
// Question 463:- write a c++ function that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.
/*
#include<bits/stdc++.h>
using namespace std;
vector<int> smallerEle(vector<int> &v){
    vector<int>small;
    for(int i = 1; i<v.size()-1; i++){
        if(v[i] < v[i-1] && v[i] < v[i+1]){
            small.push_back(v[i]);
        }
    }
    return small;
}
int main(){
    vector<int> v = {10, 2, 30, 4, 50, 6, 70, 8, 90};
    vector<int>small = smallerEle(v);
    for(auto x:small){
        cout<<x<<" ";
    }
}
// */


//*******************Vector********************* */
// Day - 99 2nd Question
// Question 464:- 1. Write a function to delete all the values from the first negative value occurred in a given vector of integers.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10, -20, 30, -40, 50, -60, 70, -80, 90};
    for(int i=0; i<v.size(); i++){
        if(v[i] < 0){
            v.erase(v.begin()+i, v.end());
            break;
        }
    }    
    for(auto x: v){
        cout<<x<<" ";
    }
}
// */


// Day - 99 3rd Question
// Question 465:-2. Create a vector object with three integer values. Now insert 25 three times just before the last element (call insert method only once).
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10, 20, 30};
    v.insert(v.end()-1, 3, 25);
    for(auto x:v){
        cout<<x<<" ";
    }
}
// */


// Day - 99 4th Question
// Question 466:-3. Create a vector of vectors of integer values from a given vector of integers such that each vector inside a vector contains sorted integer elements that appears in the given vector in consecutive places. For example, given vector has {2,4,10,5,7,6,15,20,3,9} values then the resulting vector contains 4 vectors {2,4,10}, {5,7}, {6,15,20} and {3,9}
/*
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> convertThis(vector<int>&v){
    if(v.size() == 0){
        return {};
    }
    vector<vector<int>>v1;
    vector<int>t;
    t.push_back(v[0]);
    for(int i = 0; i<v.size()-1; i++){
        if(v[i] < v[i+1]){
            t.push_back(v[i+1]);
        }else{
            v1.push_back(t);
            t.clear();
            t.push_back(v[i+1]);
        }
    }
    v1.push_back(t);
    return v1;
}
int main(){
    vector<int> gv = {2, 4, 10, 5, 7, 6, 15, 20, 3, 9};
    vector<vector<int>> v = convertThis(gv);
    for(auto &x: v){ 
        cout<<"{ ";
        for(auto i:x){
            cout<<i<<" ";
        }
        cout<<" }"<<endl;
    }
}
// */


// Day - 100 1st Question
// Question 467:- 4. Given vector has integer values stored in it. Write a function to delete all the prime numbers from the vector.
/*
#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n == 2){
        return true;
    }else{
        for(int j = 2; j<n; j++){
            if(n%j == 0){
                return false;
            }
        }
    }
    return true;
}
void removeAllprime(vector<int>&v){
    if(v.size() == 0){
        return;
    }
    for(int i = 0; i<v.size(); i++){
        if(isprime(v[i])){
            v.erase(v.begin()+i);
            i--;
        }
    }
}
int main(){
    vector<int> gv = {2, 4, 10, 5, 7, 6, 15, 20, 3, 9};
    removeAllprime(gv);
    for(auto x:gv){
        cout<<x<<' ';
    }
}
// */


// Day - 100 2nd Question
// Question 468:- 5. Create a vector from the given vector of three vectors of integers, such that take first 3 values from the first vector, last two values of the second vector and all the elements of third vector.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>v = {
        {1, 2, 3, 4, 5},   // first-3
        {6, 7, 8, 9, 10},   // last-2
        {11, 12, 13, 14, 15} // all
    };
    vector<int> v1;
    v1.insert(v1.end(), v[0].begin(), v[0].begin()+3);
    v1.insert(v1.end(), v[1].end()-2, v[1].end());
    v1.insert(v1.end(), v[2].begin(), v[2].end());
    for(auto x:v1){
        cout<<x<<" ";
    }
}
// */


//*******************List********************* */
// Day - 100 3rd Question
// Question 469:- 1. Create a list of string values and display all the elements in reverse order.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<string> l = {"a", "b", "c", "d", "e"};
    l.reverse();
    for(auto x:l){
        cout<<x<<" ";
    }
}
// */


// Day - 100 4th Question
// Question 470:- 2. Write a function to create a list from a given vector of integers.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    list<int> l(v.begin(), v.end());
    for(auto x:l){
        cout<<x<<" ";
    }
}
// */



// Day - 101 1st Question
// Question 471:- 3. Find the greatest number in a given list of integers.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1, 2, 3, 4, 5};
    l.sort();
    cout<<l.back();
}
// */


// Day - 101 2nd Question
// Question 472:- 4. Write a function to sort a list of 10 integer values.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    l.sort();
    for(auto x:l){
        cout<<x<<" ";
    }
}
// */


// Day - 101 3rd Question
// Question 473:- 5. Create a list from a given vector of integer values, such that even values are stored at the front of the list and odd values are stored at the end of the list.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {4, 1, 5, 2, 7, 6, 9, 8, 3, 10};
    sort(v.begin(), v.end());
    list<int> l;
    for(int i = 0; i<v.size(); i++){
        if(v[i]%2 == 0){
            l.push_front(v[i]);
        }else{
            l.push_back(v[i]);
        }
    }
    for(auto x: l){
        cout<<x<<" ";
    }
}
// */


//*******************Forward-List********************* */
// Day - 101 4th Question
// Question 474:- 1. Create an empty forward_list of int type values. Now assign four 10s and three 5s in it.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int> fl = {10, 10, 10, 10, 5, 5, 5};
    for(auto x:fl){
        cout<<x<<" ";
    }    
}
// */


// Day - 102 1st Question
// Question 475:- 2. Create a forward_list of strings and display them in reverse order.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<string> fl = {"a", "b", "c", "d", "e"};
    fl.reverse();
    for(auto x:fl){
        cout<<x<<" ";
    }
}
// */


// Day - 102 2nd Question
// Question 476:- 3. Write a function to find the total number of integers present in the forward_list which are greater than a given number.
/*
#include<bits/stdc++.h>
using namespace std;
void greaterG(forward_list<int>&f, int n){
    int count = 0;
    for(auto x:f){
        if(n<x){
            count++;
        }
    }
    cout<<count;
}
int main(){
    forward_list<int>f = {12, 24, 35, 14, 405, 46, 7, 488, 98, 710};
    int n; cin>>n;
    greaterG(f, n);
}
// */


// Day - 102 3rd Question
// Question 477:- 4. Write a function to erase first element from the given forward_list which is just greater than the given element.
/*
#include<bits/stdc++.h>
using namespace std;
void eraseFirst(forward_list<int>&f, int n){
    auto it = f.begin();
    while(n>*it){
        it++;
    }
    f.erase_after(it);

    for(auto x:f){
        cout<<x<<" ";
    }
}

int main(){
    forward_list<int>l = {1,2,3,4,5,6};
    eraseFirst(l, 3);
}
// */


// Day - 102 4th Question
// Question 478:- 5.Create a forward_list to represent a polynomial expression.
/*
#include<bits/stdc++.h>
using namespace std;
struct Term{
    int coefficient;
    int power;
};
void printPoly(const forward_list<Term>&f){
    bool first = true;
    for(auto it = f.begin(); it != f.end(); it++){
        if(!first) cout<<" + ";
        cout<<it->coefficient<<"x^"<<it->power;
        first = false;
    }
}

int main(){
    forward_list<Term> f = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    printPoly(f);
}
// */


//*******************Deque********************* */
// Day - 103 1st Question
// Question 479:- Create a deque of int values taken from user and display them using explicit iterator.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    cout<<"Enter the number of elements: ";
    int n; cin>>n;
    for(int i = 0; i<n; i++){
        int num;
        cin>>num;
        d.push_back(num);
    }
    for(auto it = d.begin(); it != d.end(); it++){
        cout<<*it<<" ";
    }
}
// */

// Day - 103 2nd Question
// Question 480:- Find the greatest element in a deque of int values.
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d = {1, 2, 3, 4, 5, 46, 7, 8, 9, 10};
    cout<<*max_element(d.begin(), d.end());
}
// */


// Day - 103 3rd Question
// Question 481:- Write a function to count frequency of all the elements of the deque.
/*
#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> countfreq(deque<int>&d){
    unordered_map<int, int> m;
    for(auto x:d){
        m[x]++;
    }
    return m;
}

int main(){
    deque<int> d = {10, 2, 3, 4, 5, 46, 7, 8, 9, 10};
    auto freq = countfreq(d);
    for(auto x:freq){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
// */


// Day - 103 4th Question
// Question 482:- Write a function to find the largest sorted subsequence in a deque of int values.
/*
#include <bits/stdc++.h>
using namespace std;

deque<int> largest_sorted_subsequence(deque<int>&d) {
    int n = d.size();
    deque<int>tail;
    deque<int>prev(n, -1);
    deque<int>posi;
 
    for(int i = 0; i<n; i++){
        int x = d[i];
        auto it = lower_bound(tail.begin(), tail.end(), x);
        int idx = it - tail.begin();

        if(it == tail.end()){
            tail.push_back(x);
            posi.push_back(i);
        }else{
            *it = x;
            posi[idx] = i;
        }
        if(idx > 0)
            prev[i] = posi[idx-1];
    }

    deque<int>ans;
    int p = posi.back();
    while(p != -1){
        ans.push_back(d[p]);
        p = prev[p];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    deque<int> d = {5, 11, 16, 12, 13, 4, 1, 2, 3};
    deque<int> ans = largest_sorted_subsequence(d);
    for(auto x:ans){
        cout<<x<<" ";
    }
}
// */



// Day - 104 1st Question
// Question 483:- Write a function to find the max frequency element in a deque of int values.
/*
#include<bits/stdc++.h>
using namespace std;

int countfreq(deque<int>&d){
    unordered_map<int, int> m;
    for(auto x:d){
        m[x]++;
    }
    int maxfreq = 0;
    int maxfreqEle = 0;
    for(auto x:m){
        if(x.second > maxfreq){
            maxfreq = x.second;
            maxfreqEle = x.first;
        }
    }
    return maxfreqEle;
}

int main(){
    deque<int> d = {10, 2, 3, 4, 5, 4, 7, 8, 9, 4};
    int maxfreqEle = countfreq(d);
    cout<<maxfreqEle;    
}
// */


//*******************Stack********************* */
// Day - 104 2nd Question
// Question 484:- Check if a string is a palindrome using stack.
/* 
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s){
    stack<char> st;
    for(int i = 0; i<s.length(); i++){
        st.push(s[i]);
    }
    for(int i = 0; i<s.length(); i++){
        if(st.top() != s[i]) return false;
        st.pop();
    }
    return true;
}

int main(){
    string s = "Param";
    if(checkPalindrome(s)){
        cout<<"String is a palindrome";
    }else{
        cout<<"String is not a palindrome";
    }
}
// */


// Day - 104 3rd Question
// Question 485:- Reverse a stack of strings.
/*
#include<bits/stdc++.h>
using namespace std;
void insertStack(stack<string>&st, string s){
    if(st.empty()){
        st.push(s);
        return;
    }
    string top = st.top();
    st.pop();
    insertStack(st, s);
    st.push(top);
}

void reverseStack(stack<string>&st){
    if(st.empty()) return;
    string top = st.top();
    st.pop();
    reverseStack(st);
    insertStack(st, top);
}
int main(){
    stack<string> st;
    st.push("Param");
    st.push("is");
    st.push("a");
    st.push("good");
    st.push("boy");

 reverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" "<<endl;
        st.pop();
    }    
}
// */


// Day - 104 4th Question
// Question 486:- Check for balanced brackets in an expression. for example, input is "[{(){()}}]", output is balanced. input is "[{()]}", output is not balanced.
/*  
#include<bits/stdc++.h>
using namespace std;
bool checkBalanced(string s){
    stack<char> st;
    for(auto x:s){
        if(x == '(' || x == '{' || x == '['){
            st.push(x);
        }else{
            if(st.empty()) return false;
            if(x == ')' && st.top() == '(' || x == '}' && st.top() == '{' || x == ']' && st.top() == '['){
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();
}
int main(){
    string s = "[{(){()}}]";
    if(checkBalanced(s)){
        cout<<"Balanced";
    }else{
        cout<<"Not Balanced";
    }
}
// */


// Day - 105 1st Question
// Question 487:- write a function to delete middle element of the stack.
/* 
#include<bits/stdc++.h> 
using namespace std;
void deleteMid(stack<int>&st, int curr, int mid){
    if(st.empty()) return;
    int top = st.top();
    st.pop();
    if(curr == mid){
        return;
    }
    deleteMid(st, curr+1, mid);
    st.push(top);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    int n = st.size();
    int mid = n/2;
    deleteMid(st, 0, mid);

    while(!st.empty()){
        cout<<st.top()<<" "<<endl;
        st.pop();
    }
}
// */


// Day - 105 2nd Question
// Question 488:- implement Tower of Hanoi problem using stack through iteration.
/*
#include<iostream>
#include<stack>
#include<cmath>
#include<climits>
using namespace std;

void moveDisk(stack<int>&src, stack<int>&dest, char s, char d){
    int top1 = src.empty() ? INT_MAX : src.top();
    int top2 = dest.empty() ? INT_MAX : dest.top();
    if(top1 < top2){
        dest.push(src.top());
        src.pop();
        cout<<"Move disk "<<top1<<" from "<<s<<" to "<<d<<endl;
    }else{
        src.push(dest.top());
        dest.pop();
        cout<<"Move disk "<<top2<<" from "<<d<<" to "<<s<<endl;
    }
}
int main(){
  int n;
  stack<int> src, aux, dest;

  cout << "Enter the number of disks: ";
  cin >> n;

  for (int i = n; i > 0; i--) {
    src.push(i);
  }
  char s = 'S', a = 'A', d = 'D';

  if(n%2 == 0)
    swap(a, d);

  int totalmoves = pow(2, n) - 1;

  for (int i = 1; i <= totalmoves; i++) {
    if(i%3 == 1){
        moveDisk(src, dest, s, d);
    }else if(i%3 == 2){
        moveDisk(src, aux, s, a);
    }else{
        moveDisk(aux, dest, a, d);
    }
  }
}
// */



//*******************Queue********************* */
// Day - 105 3rd Question
// Question 489:- Implement stack using queue.
/*
#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int>q;
    public:
    void push(int x){
        q.push(x);
        int n = q.size();
        while(n>1){
            q.push(q.front());
            q.pop();
            n--;
        }
    }
    int top(){
        if(q.empty()) return -1;
        return q.front();
    }
    void pop(){
        if(q.empty()) return;
        q.pop();
    }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
}
// */


// Day - 105 4th Question
// Question 490:- Implement priority queue with the given priority range from 1 to n. {use vector of queues}.
/*
#include<bits/stdc++.h>
using namespace std;
class Priority_Queue{
    vector<queue<int>>v;
    int n;
    public:
    Priority_Queue(int n){
        this->n = n;
        v.resize(n+1);
    }

    void push(int priority, int value){
        if(priority < 1 || priority > n){
            cout<<"Invalid priority level."<<endl;
            return;
        }
        v[priority].push(value);
    }
    void display(){
        for(int i=1;i<=n;i++){
            if(!v[i].empty()){
                cout<<"Priority "<<i<<" :";
                queue<int>q = v[i];
                while(!q.empty()){
                    cout<<q.front()<<" ";
                    q.pop();
                }
                cout<<endl;
            }
        }
    }
    void pop(){
        for(int i=1;i<=n;i++){
            if(!v[i].empty()){
                cout<<"Priority "<<i<<" : "<<v[i].front()<<endl;
                v[i].pop();
                return;
            }
        }
        cout<<"Priority queue is empty."<<endl;
    } 
};

int main(){
    int n;
    cout<<"Enter the number of priority levels: ";
    cin>>n;
    Priority_Queue pq(n);
    cout<<"Enter the priority and value: "<<endl;
    pq.push(1, 10);
    pq.push(2, 20);
    pq.push(3, 30);
    pq.push(1, 40);
    pq.push(4, 50);
    pq.push(5, 60);

    cout<<"Displaying the priority queue: "<<endl;
    pq.display();

    cout<<"Deleting the element according to priority: " <<endl;
    pq.pop();
    cout<<endl;

    pq.pop();
    cout<<endl;

    pq.pop();
    cout<<endl;

    pq.pop();
    cout<<endl;

    pq.pop();
    cout<<endl;

    pq.pop();
    cout<<endl;

    pq.pop();
    cout<<endl;

    pq.display();
    return 0;
}
// */


// Day - 106 1st Question
// Question 491:- Given an integer k and a queue of integers. write a program to reverse the first k elements of the queue.
/*
#include<bits/stdc++.h>
using namespace std;
void reverseKEle(int k, queue<int>&q){
    stack<int>s;
    for(int i = 0; i < k; i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }        
    int n = q.size() - k;
    for(int i = 0; i < n; i++){
        q.push(q.front());
        q.pop();
    }
}

int main(){
    int k;
    cout<<"Enter the K integer"<<endl;
    cin>>k;
    queue<int>q;
    for(int i = 1; i <= 10; i++){
        q.push(i);        
    }
    reverseKEle(k, q);
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
// */


// Day - 106 2nd Question
// Question 492:- Implement breadth first search algorithm to traverse a graph.
/*
#include<bits/stdc++.h>
using namespace std;
void graphTraversal(vector<vector<int>>&graph, int src, int n){
    vector<bool>visited(n + 1, false);
    queue<int>q;
    q.push(src);    
    visited[src] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int i: graph[node]){
            if(!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main(){
    int n, e;
    cout<<"Enter the number of vertices and edges: ";
    cin>>n>>e;
    vector<vector<int>>graph(n + 1);
    for(int i = 0; i<e; i++){
        int u, v;
        cout<<"Enter the edges: ";
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int start = 1;
    graphTraversal(graph, start, n);
}
// */


// Day - 106 3rd Question
// Question 493:- Given a square chessboard of n*n size, the position of the knight and the position of the target are given. write a program to find our the minimum number of steps required to reach the target.
/*
#include<bits/stdc++.h>
using namespace std;
class coordinate{
    public:
    int x, y, steps;
    coordinate(int x, int y, int steps){
        this->x = x;
        this->y = y;
        this->steps = steps;
    }
};
int miniSteps(int n, int kx, int ky, int tx, int ty){
    int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2}; 
    int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    queue<coordinate>q;
    q.push(coordinate(kx, ky, 0));
    vector<vector<bool>>visited(n + 1, vector<bool>(n + 1, false));
    visited[kx][ky] = true;
    while(!q.empty()){
        coordinate curr = q.front();
        q.pop();
        // if the knight has reached the target
        if(curr.x == tx && curr.y == ty){
            return curr.steps;
        }
        // to move in all 8 directions
        for(int i = 0; i < 8; i++){
            int nx = curr.x + dx[i];
            int ny = curr.y + dy[i];
            if(nx >= 1 && nx <= n && ny >= 1 && ny <= n && !visited[nx][ny]){
                q.push(coordinate(
                    nx, ny, 
                    curr.steps + 1
                ));
                visited[nx][ny] = true;
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the chessboard: ";
    cin>>n;
    int kx, ky, tx, ty;
    cout<<"Enter the position of the knight: ";
    cin>>kx>>ky;
    cout<<"Enter the position of the target: ";
    cin>>tx>>ty;
    int steps = miniSteps(n, kx, ky, tx, ty);
    cout<<"The minimum number of steps required to reach the target is: "<<steps<<endl;
}
// */




//*******************Priority-Queue********************* */
// Day - 106 4th Question
// Question 494:- Define a class Student with roll no, name and course name as instance members. Provide needfull member functions. Create a priority_queue on the basis of Student roll no. and

// Question 495:- basis of Student name.   // Day - 107 1st Question
/*
#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    int rollNo;
    string name;
    string courseName;
    public:
    Student(int rollNo, string name, string courseName){
        this->rollNo = rollNo;
        this->name = name;
        this->courseName = courseName;
    }
    int getRollNo() const{
        return rollNo;
    }
    string getName() const{
        return name;
    }
    string getCourseName() const{
        return courseName;
    }
    void showDetails() const{
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Course Name: "<<courseName<<endl;
    }
};
class CompRollNo{
    public:
    bool operator()(const Student &s1, const Student &s2) const{
        return s1.getRollNo() > s2.getRollNo();
    }
};
class CompName{
    public:
    bool operator()(const Student &s1, const Student &s2) const{
        return s1.getName() > s2.getName();
    }
};

int main(){
    priority_queue<Student, deque<Student>, CompRollNo>pq1;
    priority_queue<Student, deque<Student>, CompName>pq2;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    pq1.push(*new Student(101, "John Doe", "C++"));
    pq1.push(*new Student(102, "Peter", "Java"));
    pq1.push(*new Student(103, "Jane Doe", "Python"));

    pq2.push(*new Student(101, "John Doe", "C++"));
    pq2.push(*new Student(102, "Peter", "Java"));
    pq2.push(*new Student(103, "Jane Doe", "Python"));
    cout<<"Priority Queue based on Roll No: "<<endl;
    while(!pq1.empty()){
        pq1.top().showDetails();
        pq1.pop();
    }
    cout<<"Priority Queue based on Name: "<<endl;
    while(!pq2.empty()){
        pq2.top().showDetails();
        pq2.pop();
    }    
}
// */


// Day - 107 2nd Question
// Question 496:- Define a class Batsman with name, runs, hundreds and fifties as member variables. Provide needfull member functions. Using priority_queue decide the order of batsman will be playing in a match on the basis of runs made by the batsman. Higher run maker will play first.

// Day - 107 3rd Question
// Question 497:- create a priority queue on the basis of number of centuries.


// Day - 107 4th Question
// Question 498:- Create a priority queue on the basis of number of fifties.

/*
#include<bits/stdc++.h>
using namespace std;
class Batsman{
    private:
    string name;
    int runs;
    int centuries;
    int fifties;
    public:
    Batsman(string name, int runs, int centuries, int fifties){
        this->name = name;
        this->runs = runs;
        this->centuries = centuries;
        this->fifties = fifties;
    }
    string getName() const{
        return name;
    }
    int getRuns() const{
        return runs;
    }
    int getCenturies() const{
        return centuries;
    }
    int getFifties() const{
        return fifties;
    }
    void showDetails() const{
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Centuries: "<<centuries<<endl;
        cout<<"Fifties: "<<fifties<<endl<<endl;
    }
};
class CompRuns{
    public:
    bool operator()(const Batsman &b1, const Batsman &b2) const{
        return b1.getRuns() < b2.getRuns();
    }
};
class CompCenturies{
    public:
    bool operator()(const Batsman &b1, const Batsman &b2) const{
        return b1.getCenturies() < b2.getCenturies();
    }
};
class CompFifties{
    public:
    bool operator()(const Batsman &b1, const Batsman &b2) const{
        return b1.getFifties() < b2.getFifties();
    }
};

int main(){
    priority_queue<Batsman, deque<Batsman>, CompRuns>pq1;
    priority_queue<Batsman, deque<Batsman>, CompCenturies>pq2;
    priority_queue<Batsman, deque<Batsman>, CompFifties>pq3;
    int n;
    cout<<"Enter the number of batsman: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        string name;
        int runs, centuries, fifties;
        cout<<"Enter the name, runs, centuries and fifties of batsman "<<i+1<<": ";
        cin>>name>>runs>>centuries>>fifties;
        pq1.push(*new Batsman(name, runs, centuries, fifties));
        pq2.push(*new Batsman(name, runs, centuries, fifties));
        pq3.push(*new Batsman(name, runs, centuries, fifties));
    }
    cout<<"Priority Queue based on Runs: "<<endl;
    if(!pq1.empty()){
        pq1.top().showDetails();
        cout<<"The batsman "<<pq1.top().getName()<<" will play first."<<endl;
        pq1.pop();
    }
    cout<<"\nPriority Queue based on Centuries: "<<endl;
    while(!pq2.empty()){
        pq2.top().showDetails();
        pq2.pop();
    }
    cout<<"\nPriority Queue based on Fifties: "<<endl;
    while(!pq3.empty()){
        pq3.top().showDetails();
        pq3.pop();
    }    
}
// row mix data for testing - 
// akash 100 1 1
// naresh 200 2 2
// ram 300 3 3

*/


//*******************String******************* */
// Day - 108 1st Question
// Question 499:- Define a function to count vowels in a given string.
/*
#include<bits/stdc++.h>
using namespace std;
int countV(string str){
    int count = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int count = countV(str);
    cout<<"Number of vowels: "<<count<<endl;
}
// */


// Day - 108 2nd Question
// Question 500:- Define a function to check if a given string is a palindrome or not.
/*
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    for(int i = 0; i<str.length()/2; i++){
        if(str[i] != str[str.length()-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    // if(str == string(str.rbegin(), str.rend())){
    //     cout<<"The string is a palindrome."<<endl;
    // }
    // else{
    //     cout<<"The string is not a palindrome."<<endl;
    // }

    if(isPalindrome(str)){
        cout<<"The string is a palindrome."<<endl;
    }
    else{
        cout<<"The string is not a palindrome."<<endl;
    }
}
// */

// Day - 108 3rd Question
// Question 501:- Define a function to search a given pattern in a given string.
/*
#include<bits/stdc++.h>
using namespace std;
bool isPattern(string str, string pattern){
    // for(int i = 0; i < str.length()-pattern.length()+1; i++){
    //     bool flag = true;
    //     for(int j = 0; j<pattern.length(); j++){
    //         if(str[i+j] != pattern[j]){
    //             flag = false;
    //             break;
    //         }
    //     }
    //     if(flag){
    //         return true;
    //     }
    // }
    // return false;

   if(str.find(pattern) != string::npos){
       return true;
   }else{
       return false;
   }
}
int main(){
    string str, pattern;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<"Enter a pattern: ";
    getline(cin, pattern);

    if(isPattern(str, pattern)){
        cout<<"The pattern is present in the string."<<endl;
    }
    else{
        cout<<"The pattern is not present in the string."<<endl;
    }
}
// */



// Day - 108 4th Question
// Question 502:- Define a function to capitalise a given string. Make first letter of each word capital.
/*
#include<bits/stdc++.h>
using namespace std;
void capString(string &str){
    int n = str.length();
    // for(int i = 0; i< n; i++){
    //     if(i == 0 && str[i] >= 'a' && str[i] <= 'z'){
    //         str[i] = toupper(str[i]);
    //     }else if(str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z'){
    //         str[i+1] = toupper(str[i+1]);
    //     }
    // }

    bool flag = true;
    for(int i = 0; i< n; i++){
        if(str[i] == ' '){
            flag = true;
        }else if(flag){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] -= 32;
                flag = false;
            }
        }
    }
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    capString(str);
    cout<<"Capitalised string: "<<str<<endl;
}
// */


// Day - 109 1st Question
// Question 503:- Define a function to reverse a given string.
/*
#include<bits/stdc++.h>
using namespace std;
void revString(string &str){
    int n = str.length()-1, i = 0;
    while(i<n){
        swap(str[i], str[n]);
        i++;
        n--;
    }
}

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    revString(s);
    cout<<"Reversed string: "<<s<<endl;
}
// */


//*******************String********************* */
// Day - 109 2nd Question
// Question 504:- Define a function to count words in a given string.
/*
#include<bits/stdc++.h>
using namespace std;
int countW(string str){
    int count = 0;
    // int i = 0;
    // if(str.empty()){
    //     return 0;
    // }else{
    //     for(i; i< str.length(); i++){
    //         if(str[i] == ' ' && i-1>=0 && isalpha(str[i-1])){
    //             count++;
    //         }
    //     }
    // }
    // if(i == str.length() && isalpha(str[i-1])){
    //     count++;
    // }

    bool flag = true;
    for(char ch: str){
        if(ch == ' ' && !flag){
            count++;
            flag = true;
        }else if(ch != ' '){
            flag = false;
        }
    }
    if(!flag){
        count++;
    }
    return count;  // I love you. 
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str); 

    // cout<<"Number of words: "<<count(str.begin(), str.end(), ' ') + 1<<endl; 

    cout<<"Number of words: "<<countW(str)<<endl;
}
// */


// Day - 109 3rd Question
// Question 505:- Define a function trim a given string.
/*
#include<bits/stdc++.h>  
using namespace std;
void trimSt(string &str){
    int i = 0, j = str.length()-1;
    while(str[i] == ' '){
        i++;
    }
    while(str[j] == ' '){
        j--;
    }
    str = str.substr(i, j-i+1); // it will assign the substring to str
}
int main(){
    string s;
    cout<<"Enter a string :";
    getline(cin, s);
    trimSt(s);
    cout<<"Trimmed string: "<<s<<"---"<<endl;
}
// */



// Day - 109 4th Question
// Question 506:- Define a function to remove extra spaces from a given string.
/*
#include<bits/stdc++.h>
using namespace std;
void removeWhiteSpace(string &str){
    bool flag = false;
    string result;
    for(auto s:str){
        if(s == ' '){
            if(!flag){
                result += s;
                flag = true;
            }
        }else{
            result += s;
            flag = false;
        }
    }
    if(!result.empty() && result[result.length()-1] == ' '){
       result.pop_back();
    }
    if(!result.empty() && result[0] == ' '){
       result.erase(result.begin());
    }
    str = result;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    removeWhiteSpace(s);
    cout<<s;
}
// */


// Day - 110 1st Question
// Question 507:- Define a function to split a given string into words.
/*
#include<bits/stdc++.h>
using namespace std;
void splitSInWords(string str, vector<string> &v){
    string word;
    for(char ch: str){
       if(ch == ' '){
          if(!word.empty()){
             v.push_back(word);
             word.clear();
          }
       }else{
          word += ch;
       }
    }
    if(!word.empty()){
       v.push_back(word);
    }
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    vector<string> v;
    splitSInWords(s, v);
    for(auto s:v){
        cout<<s<<" "<<endl;
    }
}
// */


// Day - 110 2nd Question
// Question 508:- Define a function to reverse a string word wise.
/*
#include<bits/stdc++.h>
using namespace std;
string reverseStWise(string &str){
    string word = "";
    string result = "";
    for(int i = 0; i<str.length(); i++){
        if(str[i] == ' '){
            if(!word.empty()){
                result = word + " " + result;
                word = "";
            }
        }else{
            word += str[i];
        }
    }
    if(!word.empty()){
        result = word + " " + result;
    }
    if(!result.empty() && result[result.length()-1] == ' '){
        result.pop_back();
    }
    return result;
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    vector<string> v;
    cout<<"Reversed string: "<<reverseStWise(s)<<endl;
}
// */



//*******************Set********************* */
// Day - 110 3rd Question
// Question 509:- Define a class Score with runs and wickets as member variables. Provide constructor to initialise Score object.

// Day - 110 4th Question
// Question 510:- In same question define a functor to compare two Score objects by runs.

// Day - 111 1st Question
// Question 511:- In same question define a functor to compare two Score objects by wickets.

// Day - 111 2nd Question
// Question 512:- Display scores in order of runs.

// Day - 111 3rd Question
// Question 513:- Display scores in order of wickets.

/*
#include<bits/stdc++.h>
using namespace std;
class Score{
    private:
    int runs, wickets;
    public:
    Score(int runs, int wickets){
        this->runs = runs;
        this->wickets = wickets;
    }
    int getRuns() const{
        return runs;
    }
    int getWickets() const{
        return wickets;
    }
    void showDetails(){
        cout<<"Runs: "<<runs<<" Wickets: "<<wickets<<endl;
    }
};

class CompRuns{
    public:
    bool operator()(const Score &s1, const Score &s2) const{
        return s1.getRuns() > s2.getRuns();
    }
};
class CompWickets{
    public:
    bool operator()(const Score &s1, const Score &s2) const{
        return s1.getWickets() > s2.getWickets();
    }
};

int main(){
    set<Score, CompRuns> s1;
    s1.insert(Score(100, 3));
    s1.insert(Score(150, 2));

    cout<<"Scores in order of runs: "<<endl;
    for(auto s:s1){
        s.showDetails();
    }

    set<Score, CompWickets> s2;
    s2.insert(Score(100, 5));
    s2.insert(Score(150, 2));

    cout<<"Scores in order of wickets: "<<endl;
    for(auto s:s2){
        s.showDetails();
    }
}
// */


//*******************Map********************* */
// Day - 111 4th Question
// Question 514:- Create a map object to store emp_id of int type and emp_name of string type.

// Day - 112 1st Question
// Question 515:- In same question, store 5 employees data in the map object.

// Day - 112 2nd Question
// Question 516:- In same question, insert one more employee data using insert method of map.

// Day - 112 3rd Question
// Question 517:- In same question, write a function to display all the employees data stored in map using explicit iterator.

// Day - 112 4th Question
// Question 518:- In same question, write a method to find an employee in the map with the specified name. function should return a pair of emp_id and bool value. Bool value is true if name found otherwise false.

/*
#include<bits/stdc++.h>
using namespace std;
pair<int, bool>findEmp(string &s, map<int, string>&e){
   for(auto x: e){
     if(x.second == s){
        return {x.first, true};
     }
   }
   return {0, false};
}
void display(map<int, string>&e){
  map<int, string>::iterator it;
  for(it = e.begin(); it!=e.end(); it++){
    cout<<it->first<<" : "<<it->second<<endl;
  }
  cout<<endl;
}
int main(){
    map<int, string>e{{1, "Param"}, {2, "dharam"}, {3, "Charam"}, {4, "karam"}, {5, "naram"}};

    e.insert({6, "saram"});

    display(e);

    string s;
    cout<<"enter a name :";
    cin>>s;

    pair<int, bool>p = findEmp(s, e);
    if(p.second){
        cout<<"The Name : "<<s<<", ID : "<<p.first<<" is available";
    }else{
        cout<<"Not found";
    }
}
// */


/*
// Day - 113 1st Question *****Project: Student Report System**********************
// Question 519:----------------Project Overview:-
Build a complete Student Report Management System that stores student records, calculates grades and supports data storage using files.

---------------Technologies Required:-
C/C++ Language Core Syntax, I/O operations, File Handling
DSA
STL 

---------------Key Features:-
Add Student Record:-
• Name, Roll No, Subject marks
• Auto calculation of total, percentage, and grade

Display All Records:-
• List all students in tabular form

Search Student:-
• By name or roll number using binary search

Delete/Update Record (Optional):-
• Use Linked List to manage dynamic record updates

Find Toppers (Optional):-
• Use Priority Queue or custom sorting logic

Save & Load using File Handling:-
• Save data in .txt or .dat using fstream 

Menu-Driven CLI:-
• Easy navigation via console
*/

// /*
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>
#include <sstream>
#include<limits>
using namespace std;

struct Student{
    string name;
    int rollNo;
    map<string, int>marks; // subject-> marks

    float total = 0;
    float percentage = 0;
    char grade = 0;

    bool operator<(const Student &s2)const{
        return rollNo < s2.rollNo;
    }
};

vector<Student> students;

void calculateGrade(Student& s){
    if(s.marks.empty()){
        s.percentage = 0;
        s.grade = 'F';
        s.total = 0;
        return;
    }

    s.total = 0;
    for(auto x: s.marks) s.total += x.second;

    s.percentage = s.total / (float) s.marks.size();

    if (s.percentage >= 90)  s.grade = 'A';
    else if (s.percentage >= 80)  s.grade = 'B';
    else if (s.percentage >= 70)  s.grade = 'C';
    else if (s.percentage >= 60)  s.grade = 'D';
    else if (s.percentage >= 50)  s.grade = 'E';
    else  s.grade = 'F';
}
bool rollExists(int r){
    for(const auto& s: students){
        if(s.rollNo == r){
            return  true;
        }
    }
    return false;
}

void addStudent(){
    Student s;

    cout << "Enter student name: "; cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, s.name);
    int r;
    while(1){
        cout << "Enter roll number: ";  cin>>r;
        if(rollExists(r)){
            cout<<"Roll number already exists!\n";
        }else{
            s.rollNo = r;
            break;
        }
    } 
    int subjects;
    do{
        cout << "Enter number of subjects: ";
        cin >> subjects;

        if(subjects <= 0)
            cout << "Number of subjects must be greater than 0.\n";

    }while(subjects <= 0);

    for(int i=1; i<=subjects; i++){
        string sub; int mark;
        cout<<"Enter subject name: "; cin>>sub;
        if(s.marks.find(sub) != s.marks.end()){
            cout << "Subject already exists. Enter another subject.\n";
            i--;
            continue;
        }
        do{
           cout << "Enter marks (0-100): ";
           cin >> mark;

            if(mark < 0 || mark > 100)
                cout << "Marks must be between 0 and 100.\n";

        }while(mark < 0 || mark > 100);
        s.marks[sub] = mark;
    }
    calculateGrade(s);
    students.push_back(s);
    cout << "\nStudent added successfully.\n";
}

void displayAll(){
    if(students.empty()){
        cout << "No student records available.\n";
        return;
    }
    cout <<left<<setw(10)<<"Roll No"<<setw(20)<<"Name"<<setw(10)<<"Total"<<setw(10)<<"%"<<setw(10)<<"Grade"<<"Subjects\n";
    for(auto x: students){
        cout <<left<<setw(10)<<x.rollNo<<setw(20)<<x.name<<setw(10)<<x.total<<setw(10)<<x.percentage<<setw(10)<<x.grade<<" ";
        for(auto y: x.marks) cout<<y.first<<" : "<<y.second<<", ";
        cout<<endl;
    }
    cout<<endl;
}

void searchStudent(){
    int roll;
    cout<<"Enter Roll number to search: "; cin>>roll;
    sort(students.begin(), students.end());
    Student key;
    key.rollNo = roll;
    auto it = lower_bound(students.begin(), students.end(), key);
    if(it != students.end() && it->rollNo == roll){
        cout<<"Found: "<<it->name<<" with grade: "<<it->grade<<" and % "<<it->percentage<<endl;
    }else{
        cout<<"Student not found!\n";
    }
}
void saveToFile(){
    ofstream fout("students.txt");
    for(auto s: students){
        fout<<s.name<<","<<s.rollNo<<","<<s.total<<","<<s.percentage<<","<<s.grade;
        for(auto m:s.marks){
            fout<<","<<m.first<<":"<<m.second;
        }
        fout<<endl;
    }
    fout.close();
    cout<<"Data saved to file.\n";
}
void findTopper(){
    if(students.empty()){
        cout<<"No students available.\n";
        return;
    }
    auto topper = max_element(students.begin(), students.end(), [](const Student& a, const Student& b){
        return a.percentage < b.percentage;
    });
    cout<<"\n==============TOPPER=================\n";
    cout<<"Name  : "<<topper->name<<endl;
    cout<<"Roll No : "<<topper->rollNo<<endl;
    cout<<"Percentage : "<<topper->percentage<<endl;
    cout<<"Total marks : "<<topper->total<<endl;
    cout<<"Grade : "<<topper->grade<<endl;
}
void deleteStudent(){
    int roll;
    cout<<"Enter the roll Number to delete: "; cin>>roll;
    auto it = find_if(students.begin(), students.end(), [roll](const Student& s){
        return s.rollNo == roll;
    });
    if(it == students.end()){
        cout<<"Student not Found!\n";
        return;
    }
    students.erase(it);
    cout<<"Student deleted successfully.\n";
}
void updateStudent(){
    int roll;
    cout<<"Enter the Roll number to update: "; cin>>roll;
    auto it = find_if(students.begin(), students.end(), [roll](const Student& s){
        return s.rollNo == roll;
    });
    if(it == students.end()){
        cout<<"Student not found!\n";
        return;
    }
    cout<<"Enter new name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, it->name);
    int subjects;
    do{
        cout << "Enter number of subjects: ";
        cin >> subjects;

        if(subjects <= 0)
            cout << "Number of subjects must be greater than 0.\n";

    }while(subjects <= 0);

    it->marks.clear();
    for(int i = 1; i<=subjects; i++){
        string sub; int mark;
        cout<<"Enter Subject name: ";         cin>>sub;
        if(it->marks.find(sub) != it->marks.end()){
            cout << "Subject already exists. Enter another subject.\n";
            i--;
            continue;
        }
        do{
           cout << "Enter marks (0-100): ";
           cin >> mark;

            if(mark < 0 || mark > 100)
                cout << "Marks must be between 0 and 100.\n";

        }while(mark < 0 || mark > 100);
        it->marks[sub] = mark;
    }
    calculateGrade(*it);
    cout<<"Student updated successfully.\n";
}
void searchByName(){
    if(students.empty()){
        cout << "No student records available.\n";
        return;
    }
    string name;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"Enter name to search: "; getline(cin, name);
    sort(students.begin(), students.end(), [](const Student& a, const Student& b){
        return a.name < b.name;
    });
    int left = 0, right = students.size()-1;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(students[mid].name == name){
            cout<<"Found: "<<students[mid].name<<" with grade: "<<students[mid].grade<<" and % "<<students[mid].percentage<<endl;
            return;
        }else if(students[mid].name < name){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    cout<<"Student not found!\n";
}

void loadFromFile(){
    ifstream fin("students.txt");
    if(!fin){
        cout << "File not found.\n";
        return;
    }
    students.clear();
    string line;
    while(getline(fin, line)){
        Student s;
        s.marks.clear();
        stringstream ss(line);
        string portion;
        getline(ss, s.name, ',');
        getline(ss, portion, ','); s.rollNo = stoi(portion);
        getline(ss, portion, ','); s.total = stof(portion);
        getline(ss, portion, ','); s.percentage = stof(portion);
        getline(ss, portion, ','); s.grade = portion[0];
        while(getline(ss, portion, ',')){
            size_t sep = portion.find(':');
            if(sep != string::npos){
                string sub = portion.substr(0, sep);
                int mark = stoi(portion.substr(sep+1));
                s.marks[sub] = mark;
            }
        }
        students.push_back(s);
    }
    fin.close();
    cout << "Data loaded from file.\n";
}

int main(){
    loadFromFile();
    int choice;
    do{
        cout << "\n1. Add Student\n2. Display All Students\n3. Search Student\n4. Save Data\n5. Find Topper\n 6. delete Student\n 7. update Student\n8.search by name\n9. Exit\nEnter your choice: "; 
        cin >> choice;
        switch(choice){
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: saveToFile(); break;
            case 5: findTopper(); break;
            case 6: deleteStudent(); break;
            case 7: updateStudent(); break;
            case 8: searchByName(); break;
            case 9:
                saveToFile();
                cout<<"Program exited.\n";     break;
            default: cout << "Invalid choice.\n";
        }
    }while(choice != 9); 
    return 0;
}
// */

// g++ -std=c++20 stl-Practice.cpp -o stl-Practice && stl-Practice 