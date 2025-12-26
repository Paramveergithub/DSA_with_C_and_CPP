// Question 334********Assignment-1_Question-1 ****************
// Assignment-1: Array Data Structure
// 1. Define a class Array to implement array data structure with member variables to store capacity of array, last index of the last filled block of the array and a pointer to hold the address of the first block of the dynamically created array.

// 2. In question 1, define a parameterised constructor to create an array of specified size.

// 3. In the question 1, add a method to check whether an array is empty or not by returning True or False.

// 4. In question 1, define a method to append a new element in the array

// 5. In question 1, define a method to insert a new element at specified index.

// 6. In question 1, define a method to edit an element at specified index.

// 7. In question 1, define a method to delete an element at specified index.

// 8. In question 1, define a method to check if the array is full by returning true or false.

// 9. In question 1, define a method to get element at specified index.

// 10. In question 1, define a method to count number of elements present in the array.

// 11. In question 1, define a destructor to deallocate the memory of array.

// 12. In question 1, define a method to find an element in the array. Return index if the element found, otherwise return -1.
/*
#include<iostream>
using namespace std;
class Array{
  private:
  int cap;
  int lastindFilled;
  int *arr;
  public:
  Array(int c){
    cap=c;
    lastindFilled=-1;
    arr=new int[cap];
  }
  bool isEmpty(){
    return lastindFilled==-1;
  }
  void append(int v){
    if(lastindFilled==cap-1){
      cout<<"Array is full"<<endl;
      return;
    }
    lastindFilled++;
    arr[lastindFilled]=v;
  }
  void insertSpeciIndex(int index, int value){
    if(index<0 || index>lastindFilled +1){
      cout<<"Invalid index"<<endl;
      return;
    }
    if(lastindFilled==cap-1){
      cout<<"Array is full"<<endl;
      return;
    }
    for(int i=lastindFilled;i>=index;i--){
      arr[i+1]=arr[i];
    }
    arr[index]=value;
    lastindFilled++;
  }
  void editSpeciIndex(int index, int value){
    if(index<0 || index>lastindFilled){
      cout<<"Invalid index"<<endl;
      return;
    }
    arr[index]=value;
  }
  void deleteSpeciIndex(int index){
    if(index<0 || index>lastindFilled){
      cout<<"Invalid index"<<endl;
      return;
    }
    for(int i=index;i<lastindFilled;i++){
      arr[i]=arr[i+1];
    }
    lastindFilled--;
  }
  bool isFull(){
    return lastindFilled==cap-1;
  }
  void getEle(int index){
    if(index<0 || index>lastindFilled){
      cout<<"Invalid index"<<endl;
      return;
    }
    cout<<"Element at index "<<index<<" is "<<arr[index]<<endl;
  }
  void countElements(){
    cout<<"Number of elements in the array: "<<lastindFilled +1<<endl;
  }
  int findEle(int value){
    for(int i=0;i<=lastindFilled;i++){
      if(arr[i]==value){
       return i;
      }
    }
    return -1;
  }
  ~Array(){
    delete[] arr;
  }
};
int main(){
  Array a(5);
  if(a.isEmpty()){
    cout<<"Array is empty"<<endl;
  }
  a.append(10);
  a.append(20);
  a.insertSpeciIndex(2, 30);
  a.editSpeciIndex(1, 25);
  a.deleteSpeciIndex(2);
  if(a.isFull()){
    cout<<"Array is full"<<endl;
  }else{
    cout<<"Array is not full"<<endl;
  }
  a.getEle(2);
  a.countElements();
  a.findEle(25);
  if(a.findEle(25)!=-1){
    cout<<"Element found at index "<<a.findEle(25)<<endl;
  }else{
    cout<<"Element not found"<<endl;
  }
  return 0;
}
*/


// Question 335*******Assignment-2_Question-1 ****************
// Assignment-2: array
// 1. Define a copy constructor in Array class to perform deep copy.
/*
#include<iostream>
using namespace std;
class Array{
  private:
   int size;
   int *arr;
  public:
  Array(int s){
    size=s;
    arr=new int[size];
  }
  Array(const Array &a){
    size = a.size;
    arr = new int[size];
    for(int i=0;i<size;i++){
      arr[i]=a.arr[i];
    }
  }
};
int main(){
  Array a(5);
  Array a2 = a;
}
*/


// Question 336*******Assignment-2_Question-2 ****************
// 2. Define a copy assignment operator in Array class to perform deep copy.
/*
#include<iostream>
using namespace std;
class Array{
  private:
    int size;
    int *arr;
  public:
  Array(int s){
    size=s;
    arr=new int[size];
  }
  Array & operator=(const Array &obj){
    if(this == &obj){
      return *this;
    }
    delete[] arr;
    size = obj.size;
    arr = new int[size];
    for(int i=0;i<size;i++){
      arr[i]=obj.arr[i];
    }
    return *this;
  }
};
int main(){
  Array a(5), a2(5);
  a2 = a;
}
*/


// Question 337*******Assignment-3_Question-1 ****************
// Assignment-3: Dynamic Arrays
// 1. Define a class DynArray to implement dynamic array data structure with member variables to store capacity of array, last index of the last filled block of the array and a pointer to hold the address of the first block of the dynamically created array.

// 2. In question 1, define a parameterised constructor to create an array of specified size.

// 3. In question 1, define a method doubleArray() to increase the size of the array by double of its size.

// 4. In question 1, define a method halfArray() to decrease the size of the array by half of its size.

// 5 In question 1, define a method which returns the current capacity of the array.

// 6. In question 1, define a method to check whether an array is empty or not by returning True or False.

// 7. In question 1, define a method to append a new element in the array.

// 8. In question 1, define a method to insert a new element at specified index.

// 9. In question 1, define a method to edit an element at specified index.

// 10. In question 1, define a method to delete an element at specified index.

// 11. In question 1, define a method to check if the array is full by returning true or false.

// 12. In question 1, define a method to get element at specified index.

// 13. In question 1, define a method to count number of elements present in the array.

// 14. In question 1, define a destructor to deallocate the memory of array.

// 15. In question 1, define a method to find an element in the array. Return index if the element found, otherwise return -1.
/*
#include<iostream>
using namespace std;
class DynamicArray{
  private:
  int cap;
  int lastindFilled;
  int *arr;
  public:
  DynamicArray(int c){
    cap=c;
    lastindFilled=-1;
    arr=new int[cap];
  }
  void doubleCapacity(){
    cap = cap * 2;
    int *newArr = new int[cap];
    for(int i=0;i<=lastindFilled;i++){
      newArr[i]=arr[i];
    }
    delete[] arr;
    arr=newArr;
  }
  void halfCapacity(){
    cap = cap / 2;
    if(cap==0){
      return;
    }
    int *newArr = new int[cap];
    int limit = lastindFilled < cap - 1 ? lastindFilled : cap - 1;
    for(int i=0;i<=limit;i++){
      newArr[i]=arr[i];
    }
    delete[] arr;
    arr=newArr;
  }
  int getCapacity(){
    return cap;
  }
  bool isEmpty(){
    return lastindFilled==-1;
  }
  void append(int v){
    if(lastindFilled==cap-1){
      doubleCapacity();
    }
    lastindFilled++;
    arr[lastindFilled]=v;
  }
  void insertSpeciIndex(int index, int value){
    if(index<0 || index>lastindFilled +1){
      cout<<"Invalid index"<<endl;
      return;
    }
    if(lastindFilled==cap-1){
      doubleCapacity();
    }
    for(int i=lastindFilled;i>=index;i--){
      arr[i+1]=arr[i];
    }
    arr[index]=value;
    lastindFilled++;
  }
  void editSpeciIndex(int index, int value){
    if(index<0 || index>lastindFilled){
      cout<<"Invalid index"<<endl;
      return;
    }
    arr[index]=value;
  }
  void deleteSpeciIndex(int index){
    if(index<0 || index>lastindFilled){
      cout<<"Invalid index"<<endl;
      return;
    }
    for(int i=index;i<lastindFilled;i++){
      arr[i]=arr[i+1];
    }
    lastindFilled--;
  }
  bool isFull(){
    return lastindFilled==cap-1;
  }
  void getEle(int index){
    if(index<0 || index>lastindFilled){
      cout<<"Invalid index"<<endl;
      return;
    }
    cout<<"Element at index "<<index<<" is "<<arr[index]<<endl;
  }
  void countElements(){
    cout<<"Number of elements in the array: "<<lastindFilled +1<<endl;
  }
  int findEle(int value){
    for(int i=0;i<=lastindFilled;i++){
      if(arr[i]==value){
       return i;
      }
    }
    return -1;
  }
  ~DynamicArray(){
    delete[] arr;
  }
};
int main(){
  DynamicArray a(2);
  a.append(10);
  a.append(20);
  a.append(30);
  a.append(40);
  cout<<"Capacity after appending 4 elements: "<<a.getCapacity()<<endl;
  a.append(50);
  cout<<"Capacity after appending 5th element: "<<a.getCapacity()<<endl;
  a.deleteSpeciIndex(0);
  a.deleteSpeciIndex(0);
  cout<<"Capacity after deleting 2 elements: "<<a.getCapacity()<<endl;
  a.halfCapacity();
  cout<<"Capacity after halving: "<<a.getCapacity()<<endl;
  if(a.isEmpty()){
    cout<<"Array is empty"<<endl;
  }else{
    cout<<"Array is not empty"<<endl;
  }
  a.getEle(1);
  a.countElements();
  if(a.findEle(50)!=-1){
    cout<<"Element found at index "<<a.findEle(50)<<endl;
  }else{
    cout<<"Element not found"<<endl;
  }
  return 0;
}
// */


// Question 338*******Assignment-4_Question-1 ****************
// Assignment-4: Singly Linked List
// 1. Define a class SLL to implement singly linked list data structure with member variable start pointer of type node.

// 2. In question 1, define a constructor to initialise start pointer with NULL.

// 3. In question 1, define a method to insert a data into the list at the beginning.

// 4. In question 1, define a method to insert a data into the list at the end

// 5. In question 1, define a method to search a node with the give item.

// 6. In question 1, define a method to insert a data into the list after the specified node of the list.

// 7. In question 1, define a method to delete first node from the list.

// 8. In question 1, define a method to delete last node of the list.

// 9. In question 1, define a method to delete a specific node.

// 10. In question 1, define a destructor to deallocates memory for all the nodes in the linked list.
/*
#include<iostream>
using namespace std;
class node{
  public:
   int data;
   node *next;
};
class SLL{
  private:
    node *start;
  public:
  SLL(){
    start = NULL;
  }
  void insertAtBeginning(int value){
    node *newNode = new node();
    newNode->data = value;
    newNode->next = start;
    start = newNode;
  }
  void insertAtEnd(int value){
    node *newNode = new node();
    newNode->data = value;
    newNode->next = NULL;
    if(start == NULL){
      start = newNode;
      return;
    }
    node *temp = start;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newNode;
  }
  void search(int value){
    node *temp = start;
    int index = 0;
    while(temp != NULL){
      if(temp->data == value){
        cout<<"Element "<<value<<" found at index "<<index<<endl;
        return;
      }
      temp = temp->next;
      index++;
    }
    cout<<"Element "<<value<<" not found"<<endl;
  }
  void insertAfterSpecifiedNode(int nodeValue, int value){
    node *newNode = new node();
    newNode->data = value;
    if(start == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    node *temp = start;;
    while(temp != NULL){
      if(temp->data == nodeValue){
        newNode->next = temp->next;
        temp->next = newNode;
        return;
      }
      temp = temp->next;
    }
    cout<<"Node with value "<<nodeValue<<" not found."<<endl;
  }
  void delFirst(){
    if(start == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    node *temp = start;
    start = start->next;
    delete temp;
  }
  void delLast(){
    if(start == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    if(start->next == NULL){
      delete start;
      start = NULL;
      return;
    }
    node *temp = start;
    while(temp->next->next != NULL){
      temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
  }
  void delSpecifiedNode(int nodeValue){
    if(start == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    if(start->data == nodeValue){
      node *temp = start;
      start = start->next;
      delete temp;
      return;
    }
    node *temp = start;
    while(temp->next != NULL){
      if(temp->next->data == nodeValue){
        node *t = temp->next;
        temp->next = temp->next->next;
        delete t;
        return;
      }
      temp = temp->next;
    }
    cout<<"Node with value "<<nodeValue<<" not found."<<endl;
  }
  void display(){
    node *temp = start;
    while(temp != NULL){
      cout<<temp->data<<" -> ";
      temp = temp->next;
    }
    cout<<"NULL"<<endl;
  }
  ~SLL(){
    node *temp = start;
    while(temp != NULL){
      node *t = temp;
      temp = temp->next;
      delete t;
    }
  }
};
int main(){
  SLL list;
  list.insertAtBeginning(5);
  list.insertAtEnd(20);
  list.insertAfterSpecifiedNode(5, 10);
  list.display();
  list.search(10);
  list.delFirst();
  list.delLast();
  list.delSpecifiedNode(15);
  list.display();
  return 0;
}
// */


// Question 339*******Assignment-5_Question-1 ****************
// Assignment-5: Doubly Linked List
// 1. Define a class DLL to implement doubly linked list data structure with member variable start pointer of type node.

// 2. In question 1, define a constructor to initialise start pointer with NULL.

// 3. In question 1, define a method to insert a data into the list at the beginning.

// 4. In question 1, define a method to insert a data into the list at the end

// 5. In question 1, define a method to search a node with the given item.

// 6. In question 1, define a method to insert a data into the list after the specified node of the list.

// 7. In question 1, define a method to delete first node from the list.

// 8. In question 1, define a method to delete last node of the list.

// 9. In question 1, define a method to delete a specific node.

// 10. In question 1, define a destructor to deallocates memory for all the nodes in the linked list.
/*
#include<iostream>
using namespace std;
class node{
  public:
   int data;
   node *prev;
    node *next;
};
class DLL{
  node *start;
  public:
  DLL(){
    start = NULL;
  }
  void insertAtBeginning(int value){
    node *newNode = new node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = start;
    if(start != NULL){
      start->prev = newNode;
    }
    start = newNode;
  }
  void insertAtEnd(int value){
    node *newNode = new node();
    newNode->data = value;
    newNode->next = NULL;
    if(start == NULL){
      newNode->prev = NULL;
      start = newNode;
      return;
    }
    node *temp = start;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
  void search(int value){
    node *temp = start;
    int index = 0;
    while(temp != NULL){
      if(temp->data == value){
        cout<<"Element "<<value<<" found at index "<<index<<endl;
        return;
      }
      temp = temp->next;
      index++;
    }
    cout<<"Element "<<value<<" not found"<<endl;
  }
  void insertAfterSpecifiedNode(int nodeValue, int value){
    node *newNode = new node();
    newNode->data = value;
    if(start == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    node *temp = start;;
    while(temp != NULL){
      if(temp->data == nodeValue){
        newNode->next = temp->next;
        newNode->prev = temp;
        if(temp->next != NULL){
          temp->next->prev = newNode;
        }
        temp->next = newNode;
        return;
      }
      temp = temp->next;
    }
    cout<<"Node with value "<<nodeValue<<" not found."<<endl;
  }
  void delFirst(){
    if(start == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    node *temp = start;
    start = start->next;
    if(start != NULL){
      start->prev = NULL;
    }
    delete temp;
  }
  void delLast(){
    if(start == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    if(start->next == NULL){
      delete start;
      start = NULL;
      return;
    }
    node *temp = start;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
  }
  void delSpecifiedNode(int nodeValue){
    if(start == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    node *temp = start;
    while(temp->next != NULL){
      if(temp->data == nodeValue){
        if(temp->prev != NULL && temp->next != NULL){
          temp->prev->next = temp->next;
          temp->next->prev = temp->prev;
        }else{
          start = temp->next;
          temp->next->prev = NULL;
        }
        if(temp->next == NULL){
          temp->prev->next = NULL;
        }
        delete temp;
        return;
      }
    }
    cout<<"Node with value "<<nodeValue<<" not found."<<endl;
  }
  void display(){
    node *temp = start;
    while(temp != NULL){
      cout<<temp->data<<" <-> ";
      temp = temp->next;
    }
    cout<<"NULL"<<endl;
  }
  ~DLL(){
    node *temp = start;
    while(temp != NULL){
      node *t = temp;
      temp = temp->next;
      delete t;
    }
  }
};
int main(){
  DLL list;
  list.insertAtBeginning(5);
  list.insertAfterSpecifiedNode(5, 10);
  list.insertAtEnd(20);
  list.insertAtEnd(30);
  list.insertAtEnd(40);
  list.insertAtEnd(50);
  list.display();
  list.search(10);
  list.delFirst();
  list.display();
  list.delLast();
  list.display();
  list.delSpecifiedNode(10);
  list.display();
  return 0;
}
// */



// Question 340******Assignment-6_Question-1 ***************
// Assignment-6: Circular Linked List
// 1. Define a class CLL to implement Circular linked list data structure with member variable last pointer of type node.

// 2. In question 1, define a constructor to initialise last pointer with NULL.

// 3. In question 1, define a method to insert a data into the list at the beginning.

// 4. In question 1, define a method to insert a data into the list at the end

// 5. In question 1, define a method to search a node with the give item.

// 6. In question 1, define a method to insert a data into the list after the specified node of the list.

// 7. In question 1, define a method to delete first node from the list.

// 8. In question 1, define a method to delete last node of the list.

// 9. In question 1, define a method to delete a specific node.

// 10. In question 1, define a destructor to deallocates memory for all the nodes in the linked list.
/*
#include<iostream>
using namespace std;
class node{
  public:
   int data;
   node *next;
};
class CLL{
  private:
    node *last;
  public:
  CLL(){
    last = NULL;
  }
  void insertAtBeginning(int value){
    node *newNode = new node();
    newNode->data = value;
    if(last == NULL){
      last = newNode;
      newNode->next = newNode;
    }else{
      newNode->next = last->next;
      last->next = newNode;
    }
  }
  void insertAtEnd(int value){
    node *newNode = new node();
    newNode->data = value;
    if(last == NULL){
      last = newNode;
      newNode->next = newNode;
    }else{
      newNode->next = last->next;
      last->next = newNode;
      last = newNode;
    }
  }
  void search(int value){
    if(last == NULL){
      cout<<"list is empty";
      return;
    }
    node *temp = last;
    if(temp->data == value){
      cout<<"Element "<<value<<" found"<<endl;
      return;
    }else{
      temp = temp->next;
    }
    while(temp != last){
      if(temp->data == value){
        cout<<"Element "<<value<<" found"<<endl;
        return;
      }
      temp = temp->next;
    }
    cout<<"Element "<<value<<" not found"<<endl;
  }
  void insertAferSpecificNode(int nodeValue, int value){
    if(last == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    node *n = new node;
    n->data = value;
    node *temp = last->next;
    do{
      if(temp->data == nodeValue){
        n->next = temp->next;
        temp->next = n;
        if(temp == last){
          last = n;
        }
        return;
      }
      temp = temp->next;
    }while(temp != last->next);
  }
  void delFirst(){
    if(last == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    node *temp = last->next;
    if(last == last->next){
      delete temp;
      last = NULL;
    }else{
      last->next = temp->next;
      delete temp;
    }
  }
  void delLast(){
    if(last == NULL){
      cout<<"list is empty";
      return;
    }
    node *temp = last->next;
    if(temp == last){
      delete last;
      last = NULL;
      return;
    }else{
      while(temp->next != last){
        temp = temp->next;
      }
      temp->next = last->next;
      delete last;
      last = temp;
    }
  }
  void delSpecificNode(int nodeValue){
    if(last == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    node *temp = last->next;
    if(temp->data == nodeValue){
      delFirst();
      return;
    }
    while(temp->next != last){
      if(temp->next->data == nodeValue){
        node *n = temp->next;
        temp->next = n->next;
        delete n;
        return;
      }
      temp = temp->next;
    }
    if(temp->data == nodeValue){
      delLast();
    }
  }
  void display(){
    if(last == NULL){
      cout<<"List is empty."<<endl;
      return;
    }
    node *temp = last->next;
    do{
      cout<<temp->data<<" -> ";
      temp = temp->next;
    }while(temp != last->next);
  }
  ~CLL(){
    if(last == NULL){
      return;
    }
    node *temp = last->next;
    last->next = NULL;
    while(temp != NULL){
      node *t = temp;
      temp = temp->next;
      delete t;
    }
  }
};
int main(){
  CLL list;
  list.insertAtBeginning(10);
  list.insertAtEnd(20);
  list.insertAferSpecificNode(10, 15);
  list.display();
  list.search(15);
  list.delFirst();
  list.display();
  list.delLast();
  list.display();
  list.delSpecificNode(15);
  list.display();
  cout<<"Completed"<<endl;
  return 0;
}
// */


// Question 341***Assignment-7_Question-1 ***************


// g++ -std=c++20 Array.cpp -o Array && Array