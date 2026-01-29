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
    cout<<"Back to start"<<endl;
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

// Question 341***Assignment-7***************
// Assignment-7: Circular Doubly Linked List
// 1. Define a class CDLL to implement Circular Doubly linked list data structure with member variable start pointer of type node.

// 2. In question 1, define a constructor to initialise start pointer with NULL.

// 3. In question 1, define a method to insert a data into the list at the beginning.

// 4. In question 1, define a method to insert a data into the list at the end.

// 5. In question 1, define a method to search a node with the give item.

// 6. In question 1, define a method to insert a data into the list after the specified node of the list.

// 7. In question 1, define a method to delete the first node of the list.

// 8. In question 1, define a method to delete the last node of the list.

// 9. In question 1, define a method to delete a specific node.

// 10. In question 1, define a destructor to deallocates memory for all the nodes in the linked list.
/*
#include <iostream>
using namespace std;
class node{
public:
  int data;
  node *prev;
  node *next;
};
class CDLL{
private:
  node *start;

public:
  CDLL()  {
    start = NULL;
  }
  void insertAtBeginning(int value){
    node *newNode = new node();
    newNode->data = value;
    if (start == NULL){
      newNode->next = newNode;
      newNode->prev = newNode;
      start = newNode;
    }
    else{
      newNode->next = start;
      newNode->prev = start->prev;
      start->prev->next = newNode;
      start->prev = newNode;
      start = newNode;
    }
  }
  void insertAtEnd(int value){
    node *newNode = new node();
    newNode->data = value;
    if (start == NULL){
      newNode->next = newNode;
      newNode->prev = newNode;
      start = newNode;
    }
    else{
      newNode->next = start;
      newNode->prev = start->prev;
      start->prev->next = newNode;
      start->prev = newNode;
    }
  }
  void searchNodedata(int d){
    node *t = start->next;
    if (start == NULL){
      cout << "List is empty"<<endl;
      return;
    }
    if (start->data == d){
      cout << "Found"<<endl;
      return;
    }
    while (t != start){
      if (t->data == d){
        cout << "Found"<<endl;
        return;
      }
      t = t->next;
    }
    cout << "not found"<<endl;
  }
  void insertAfterSpecificNode(int d, int nodeD){
    if (start == NULL){
      cout << "List is empty"<<endl;
      return;
    }
    node *n = new node();
    n->data = nodeD;
    node *t = start;
    do{
      if (t->data == d){
        n->next = t->next;
        n->prev = t;
        t->next->prev = n;
        t->next = n;
        return;
      }
      t = t->next;
    } while (t != start);
    cout << "Node not found";
  }
  void delFirst(){
    if (start == NULL){
      cout << "List is empty";
      return;
    }
    if (start->next == start){
      delete start;
      start = NULL;
      return;
    }
    else{
      node *t = start;
      start->prev->next = start->next;
      start->next->prev = start->prev;
      start = start->next;
      delete t;
    }
  }
  void delLast(){
    if (start == NULL){
      cout << "List is empty";
      return;
    }
    if (start == start->next){
      delete start;
      start = NULL;
      return;
    }
    else{
      node *t = start;
      while (t->next != start){
        t = t->next;
      }
      t->prev->next = start;
      start->prev = t->prev;
      delete t;
    }
  }
  void delSpecificNode(int d){
    if (start == NULL){
      cout << "List is empty";
      return;
    }
    if (start->data == d){
      delFirst();
      return;
    }
    node *t = start;
    do{
      if (t->data == d){
        t->prev->next = t->next;
        t->next->prev = t->prev;
        delete t;
        return;
      }
      t = t->next;
    } while (t != start);
    cout << "Node not found";
  }
  void display(){
    if (start == NULL){
      cout << "List is empty." << endl;
      return;
    }
    node *temp = start;
    do{
      cout << temp->data << " <-> ";
      temp = temp->next;
    } while (temp != start);
    cout << "Back to start" << endl;
  }

  ~CDLL(){
    if (start == NULL){
      return;
    }
    start->prev->next = NULL;
    node *temp = start;
    while (temp != NULL){
      node *t = temp;
      temp = temp->next;
      delete t;
    }
  }
};
int main(){
  CDLL list;
  list.insertAtBeginning(10);
  list.insertAtEnd(20);
  list.insertAfterSpecificNode(10, 15);
  list.display();
 
  list.searchNodedata(15);
  list.delFirst();
  list.display();

  list.delLast();
  list.display();

  list.delSpecificNode(15);
  list.display();
  
  cout << "Completed" << endl;
  return 0;
}
// */



// Question 342*******Assignment-8 ***************
// Stack using arrays
// 1. Define a class Stack with capacity, top and ptr pointer as member variables. implement stack using array.

// 2. Define a parameterised constructor to initialize member variables.

// 3. Define a method to push a new element on to the stack.

// 4. Define a method to peek top element of the stack.

// 5. Define a method to pop the top element from the stack.

// 6. Define a destructor to deallocates the memory.

// 7. define a method to check stack overflow.

// 8. define a method to check stack underflow.

// 9. define a method to reverse a stack.

// 10. Define a solution to keep track of minimum value element in the stack.

/*
#include <iostream>
using namespace std;
class Stack{
  private:
  int capacity;
  int top;
  int *ptr;
  public:
  Stack(int c){
    capacity = c;
    top = -1;
    ptr = new int[capacity];
  }

  void push(int value){
    if(top == capacity -1){
      cout<<"Stack is full."<<endl;
      return;
    }
    ptr[++top] = value;
  }
  void peek(){
    if(top == -1){
      cout<<"Stack is empty.";
      return;
    }
    cout<<"Top element is: "<<ptr[top]<<endl;
  }
  void pop(){
    if(top == -1){
      cout<<"Stack is empty."<<endl;
      return;
    }
    top--;
  }
  bool isOverflow(){
    return top == capacity -1;
  }
  bool isUnderflow(){
    return top == -1;
  }
  void reverse(){
    if(top == -1){
      cout<<"Stack is empty."<<endl;
      return;
    }
    int f = 0, e = top;
    while(f<e){
      int temp = ptr[f];
      ptr[f] = ptr[e];
      ptr[e] = temp;
      f++, e--;
    }
  }
  void minimumEle(){
    if(top == -1){
      cout<<"Stack is empty."<<endl;
      return;
    }
    int m = ptr[0];
    for(int i = 1; i<= top; i++){
      ptr[i] < m ? m = ptr[i] : m;
    }
    cout<<"Minimum element in the stack is: "<<m<<endl;
  }
  ~Stack(){
    delete[] ptr;
  }
};
int main(){
  Stack s(5);
  s.push(10);
  s.push(20);
  s.push(5);
  s.peek();
  s.pop();
  s.peek();
  s.reverse();
  s.peek();
  s.minimumEle();
  return 0;
}
// */

// /* Question 343*******Assignment-9 ***************
// Stack using linked list
// 1. Define a class Stack with top as member variable. implement stack using linked list.

// 2. Define a constructor to initialize member variables.

// 3. Define a method to push a new element on to the stack.
 
// 4. Define a method to peek top element of the stack.

// 5. Define a method to pop the top element from the stack.

// 6. Define a destructor to deallocates the memory.
 
// 7. define a method to reverse a stack.

// 8. define a method to check whether the stack is palindrome or not.

/*
#include <iostream>
using namespace std;
class Node{
  public:
   int data;
   Node *next;
};
class Stack{
  private:
  int top;
  Node* ptr;
  public:
  Stack(){
    top = -1;
    ptr = NULL;
  }
  void push(int v){
    Node *newNode = new Node();
    newNode->data = v;
    newNode->next = ptr;
    ptr = newNode;
    top++;
  }
  void peek(){
    if(top == -1){
      cout<<"Stack is empty."<<endl;
      return;
    }
    cout<<"Top element is: "<<ptr->data<<endl;
  }
  void pop(){
    if(top == -1){
      cout<<"Stack is empty."<<endl;
      return;
    }
    Node *temp = ptr;
    ptr = ptr->next;
    delete temp;
    top--;
  }
  void reverse(){
    if(top == -1){
      cout<<"Stack is empty."<<endl;
      return;
    }
    Node *prev = NULL;
    Node *current = ptr;
    Node *next = NULL;
    while(current != NULL){
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    ptr = prev;
  }
   void palindrome(){
    if(top == -1){
      cout<<"Stack is empty."<<endl;
      return;
    }
    Node *ptr1 = ptr;
    Node *prev = NULL;
    Node *current = ptr1;
    Node *next = NULL;
    while(current != NULL){
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    Node *ptr2 = prev;
    int i = top/2;
    while(i){
      if(ptr1->data != ptr2->data){
        cout<<"Stack is not palindrome."<<endl;
        return;
      }
      ptr1 = ptr1->next;
      ptr2 = ptr2->next;
      i--;
    }
    cout<<"Stack is palindrome."<<endl;
   }
  ~Stack(){
    while(ptr != NULL){
      Node *temp = ptr;
      ptr = ptr->next;
      delete temp;
    }
  }
};
int main(){
  Stack s;
  s.push(10);
  s.push(20);
  s.push(10);
  s.peek();
  s.pop();
  s.peek();
  s.reverse();
  s.peek();
  s.palindrome();
  return 0;
}
// */

// Question 344*******Assignment-9 ***************
// 9. Define a method to convert infix to postfix expression.

// Question 345*******Assignment-9 ***************
// 10. Define a method to evalute postfix expression.

/*
#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;
// char Stack for infix to postfix conversion
class Node{
  public:
    char data;
    Node *next;
};
class Stack{
  Node* ptr;
  public:
  Stack(){
    ptr = NULL;
  }
  void push(char c){
    Node *n = new Node; 
    n->data = c;
    n->next = ptr;
    ptr = n;
  }
  char peek(){
    return ptr->data;
  }
  char pop(){
    Node *temp = ptr;
    char c = ptr->data;
    ptr = ptr->next;
    delete temp;
    return c;
  }
  bool isEmpty(){
    return ptr == NULL;
  }
};
// Int Stack for evaluating postfix expression
class intNode{
  public:
    int data;
   intNode *next;
};
class intStack{
  intNode* ptr;
  public:
  intStack(){
    ptr = NULL;
  }
  void push(int c){
    intNode *n = new intNode; 
    n->data = c;
    n->next = ptr;
    ptr = n;
  }
  int pop(){
    intNode *temp = ptr;
    int c = ptr->data;
    ptr = ptr->next;
    delete temp;
    return c;
  }
};
int precedence(char c){
  if(c == '+' || c == '-'){
    return 1;
  }else if(c == '*' || c == '/'){
    return 2;
  }else if(c == '^'){
    return 3;
  }else{
    return -1;
  }
}

// Infix to Postfix conversion of expression
string infixToPostfix(string infix){
  Stack s;
  string postfix = "";
  for(int i = 0; i<infix.length(); i++){
    char c = infix[i];
    if(c == ' ') continue;
    if(isalpha(c)){
      postfix += c;
      postfix += ' ';
    }else if(isdigit(c)){
      while(i<infix.length() && isdigit(infix[i])){
        postfix += infix[i++];
      }
      postfix += ' ';
      i--;
    }else if(c == '('){
      s.push(c);
    }else if(c == ')'){
      while(!s.isEmpty() && s.peek() != '('){
        postfix += s.pop();
        postfix += ' ';
      }
      s.pop();
    }else{
      while(!s.isEmpty() && precedence(c) <= precedence(s.peek())){
        postfix += s.pop();
        postfix += ' ';
      }
      s.push(c);
    }
  }
  while(!s.isEmpty()){
    postfix += s.pop();
    postfix += ' ';
  }
  return postfix;
}

// Calculate function for evalute postfix expression
int calculate(int a, int b, char op){
  switch(op){
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return a / b;
    case '^': return pow(a, b);
    default: return 0;
  }
}
int evalPostfix(string postfix){
  intStack s;
  for(int i = 0; i<postfix.length(); i++){
    if(postfix[i] == ' ') continue;
    if(isdigit(postfix[i])){
      int num = 0;
      while(i<postfix.length() && isdigit(postfix[i])){
        num = num * 10 + (postfix[i] - '0');
        i++;
      }
      s.push(num);
    }else{
      int b = s.pop();
      int a = s.pop();
      s.push(calculate(a, b, postfix[i]));
    }
  }  
  return s.pop();
}
int main(){
  // string postfix = infixToPostfix("A+(B*C-(D/E+F)*G)*H");
  string postfix = infixToPostfix("1+(20*3-(10/2+5)*2)*2");
  cout<<"Postfix expression: "<<postfix<<endl;

  cout<<"\n\nEvaluated Postfix expression: "<<evalPostfix(postfix)<<endl;
  return 0;
}  
// */


// Question 346*******Assignment-10 ***************
// Queue using array
// 1. Define a class Queue with capacity, front, rear and ptr pointer as member variables. implement queue using array.

// 2. In this question, define a parameterised constructor to initialize member variables.

// 3. In this question, define a method to insert a new element at the rear in the queue.

// 4. In this question, define a method to view rear element of the queue.

// 5. In this question, define a method to view front element of the queue.

// 6. In this question, define a method to delete the front element from the queue.

// 7. In this question, define a method to check queue overflow.

// 8. In this question, define a method to check queue underflow.

// 9. Define a method to count number of elements present in the queue.

// 10. Define a destructor to deallocates the memory.
/*
#include <iostream>
using namespace std;
class Queue{
  private:
  int capacity;
  int front;
  int rear;
  int *ptr;
  public:
  Queue(int c){
    if(c < 1) c = 10;
    capacity = c;
    front = -1;
    rear = -1;
    ptr = new int[capacity];
  }
  void enqueue(int v){
    if(front == (rear+1)%capacity){
      cout<<"Queue is full."<<endl;
      return;
    }
    if(rear == -1){
      front = rear = 0;
    }else{
      rear = (rear + 1) % capacity;
    }
    ptr[rear] = v;
  }
  void viewRear(){
    if(front == -1){
      cout<<"Queue is empty."<<endl;
      return;
    }
    cout<<"Rear element is: "<<ptr[rear]<<endl;
  }
  void viewFront(){
    if(front == -1){
      cout<<"Queue is empty."<<endl;
      return;
    }
    cout<<"Front element is: "<<ptr[front]<<endl;
  }
  void dequeue(){
    if(rear == -1){
      cout<<"Queue is empty."<<endl;
      return;
    }
    if(front == rear){
      front = rear = -1;
    }else{
      front = (front + 1) % capacity;
    }
  }
  bool isOverflow(){
    return (front == (rear+1)%capacity);
  }
  bool isUnderflow(){
    return rear == -1;
  }
  int countElements(){
    if(rear == -1)   return 0;
    if(rear >= front) return rear - front + 1;
    return (capacity - front + rear + 1);
  }
  ~Queue(){
    delete[] ptr;
  }
};
int main(){
  Queue q(5);
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.viewFront();
  q.viewRear();
  q.dequeue();
  q.viewFront();
  if(q.isOverflow()){
    cout<<"Queue is full."<<endl;
  }else{
    cout<<"Queue is not full."<<endl;
  }
  if(q.isUnderflow()){
    cout<<"Queue is empty."<<endl;
  }else{
    cout<<"Queue is not empty."<<endl;
  }
  cout<<"Number of elements in the queue: "<<q.countElements()<<endl;
  return 0;
}
// */



// Question 347*******Assignment-11 ***************
// Queue using linked list
// 1. Define a class Queue with node type pointers front and rear as member variables. implement queue using Singly linked list.

// 2. In this question, define a constructor to initialize member variables.

// 3. In this question, define a method to insert a new element at the rear in the queue.

// 4. In this question, define a method to view rear element of the queue.

// 5. In this question, define a method to view front element of the queue.

// 6. In this question, define a method to delete the front element from the queue.

// 7. In this question, define a method to count number of elements present in the queue.

// 8. In this question, define a destructor to deallocates the memory.
/*
#include <iostream>
using namespace std;
class Node{
  public:
   int data;
   Node *next;
};
class Queue{
  private:
  Node* front;
  Node* rear;
  public:
  Queue(){
    front = NULL;
    rear = NULL;
  }
  void insert(int v){
    Node* n = new Node;
    n->data = v;
    n->next = NULL;
    if(rear == NULL){
      front = rear = n;
      return;
    }
    rear->next = n;
    rear = n;
  }
  void viewRear(){
    if(rear == NULL){
      cout<<"Queue is empty."<<endl;
      return;
    }
    cout<<"Rear element is: "<<rear->data<<endl;
  }
  void viewFront(){
    if(front == NULL){
      cout<<"Queue is empty."<<endl;
      return;
    }
    cout<<"Front element is: "<<front->data<<endl;
  }
  void delFirst(){
    if(front == NULL){
      cout<<"Queue is empty."<<endl;
      return;
    }
    Node* temp = front;
    front = front->next;
    delete temp;
    if(front == NULL){
      rear = NULL;
    }
  }
  void count(){
    int c = 0;
    if(front == NULL){
      cout<<"Number of elements in the queue: "<<c<<endl;
      return;
    }
    Node* t = front;
    while(t != NULL){
      c++;
      t = t->next;
    }
    cout<<"Number of elements in the queue: "<<c<<endl;
  }
  ~Queue(){
    while(front != NULL){
      Node* temp = front;
      front = front->next;
      delete temp;
    }
  }
};
int main(){
  Queue q;
  q.insert(10);
  q.insert(20);
  q.insert(30);
  q.viewFront();
  q.viewRear();
  q.delFirst();
  q.viewFront();
  q.count();
  return 0;
}
//  */


// Question 348*******Assignment-12 ***************
// Deque
// 1. Define a class Deque with node type pointers front and rear as member variables. implement deque using Doubly linked list.

// 2. In this question, define a constructor to initialize member variables.

// 3. In this question, define a method to insert a new element at the front in the deque.

// 4. In this question, define a method to insert a new element at the rear in the deque.

// 5. In this question, define a method to delete the front element from the deque.

// 6. In this question, define a method to delete the rear element from the deque.  

// 7. In this question, define a method to get front element of the deque.

// 8. In this question, define a method to get rear element of the deque.

// 9. In this question, define a method to check whether the deque is empty or not.

// 10. Define a destructor to deallocate the memory.
/*
#include <iostream>
using namespace std;
class Node{
  public:
   int data;
   Node *next;
   Node *prev;
};
class Deque{
  private:
   Node *front;
   Node *rear;
  public:
  Deque(){
    front = NULL;
    rear = NULL;
  }
  void insertAtfront(int e){
    Node *n = new Node;
    n->data = e;
    if(front == NULL){
      n->next = front;
      n->prev = front;
      front = rear = n;
      return;
    }
    n->next = front;
    n->prev = NULL;
    front->prev = n;
    front = n;
  }
  void insertAtrear(int e){
    Node *n = new Node;
    n->data = e;
    n->next = NULL;
    if(rear == NULL){
      n->prev = rear;
      front = rear = n;
      return;
    }
    n->prev = rear;
    rear->next = n;
    rear = n;
  }
  void delFront(){
    if(front == NULL){
      cout<<"Deque is empty."<<endl;
      return;
    }
    Node *temp = front;
    front = front->next;
    if(front != NULL){
      front->prev = NULL;
    }
    delete temp;
    if(front == NULL){
      rear = NULL;
    }
  }
  void delRear(){
    if(rear == NULL){
      cout<<"Deque is empty."<<endl;
      return;
    }
    Node *temp = rear;
    rear = rear->prev;
    if(rear != NULL){
      rear->next = NULL;
    }
    delete temp;
    if(rear == NULL){
      front = NULL;
    }
  }
  int getFront(){
    if(front == NULL){
      cout<<"Deque is empty."<<endl;
      return -1;
    }
    return front->data;
  }
  int getRear(){
    if(rear == NULL){
      cout<<"Deque is empty."<<endl;
      return -1;
    }
    return rear->data;
  }
  bool isEmpty(){
    return front == NULL;
  }
  ~Deque(){
    while(front != NULL){
      Node *temp = front;
      front = front->next;
      delete temp;
    }
  }
};
int main(){
  Deque dq;
  dq.insertAtfront(10);
  dq.insertAtrear(20);
  cout<<"Front element: "<<dq.getFront()<<endl;
  cout<<"Rear element: "<<dq.getRear()<<endl;
  dq.delFront();
  cout<<"Front element after deletion: "<<dq.getFront()<<endl;
  dq.delRear();
  if(dq.isEmpty()){
    cout<<"Deque is empty."<<endl;
  }else{
    cout<<"Deque is not empty."<<endl;
  }
  return 0;
}
// */


// Question 349*******Assignment-13 ***************
// Priority Queue using linked list
// 1. Define a class PriorityQueue with node type pointer start as member variable. implement priority queue using Singly linked list.

// 2. In this question, define a constructor to initialize member variable.

// 3. In this question, define a method to insert a new element in the Priority Queue according to its priority.

// 4. In this question, define a method to delete the highest priority element from the Priority Queue.

// 5. In this question, define a method to get the highest priority element from the Priority Queue.

// 6. In this question, define a method to get the highest priority from the Priority Queue.

// 7. In this question, define a method to check whether the Priority Queue is empty or not.

// 8. Define a destructor to deallocates the memory.
/*
#include<iostream>
using namespace std;
class node{
  public:
  int data;
  int priority;
  node *next;
};
class PriorityQueue{
  node *start;
  public:
  PriorityQueue(){
    start = NULL;
  }
  void insert(int e, int p){
    node *n = new node;
    n->data = e;
    n->priority = p;
    n->next = NULL;
    if(start == NULL || start->priority < p){
      n->next = start;
      start = n;
    }else{
      node* t = start;
      while(t->next != NULL && t->next->priority >= p){
        t = t->next;
      }
      n->next = t->next;
      t->next = n;
    }
  }

  void del(){
    if(start == NULL){
      cout<<"Priority Queue is empty."<<endl;
      return;
    }
    node *temp = start;
    start = start->next;
    delete temp;
  }

  int getHighestPriorityElement(){
    if(start == NULL){
      cout<<"Priority Queue is empty."<<endl;
      return -1;
    }
    return start->data;
  }

  int getHighestPriority(){
    if(start == NULL){
      cout<<"Priority Queue is empty."<<endl;
      return -1;
    }
    return start->priority;
  }

  bool isEmpty(){
    return start == NULL;
  }

  ~PriorityQueue(){
    while(start != NULL){
      node *temp = start;
      start = start->next;
      delete temp;
    }
  }  
};

int main(){
  PriorityQueue pq;
  pq.insert(10, 2);
  pq.insert(20, 1);
  pq.insert(30, 3);
  cout<<"Highest priority element: "<<pq.getHighestPriorityElement()<<endl;
  cout<<"Highest priority: "<<pq.getHighestPriority()<<endl;
  pq.del();
  cout<<"Highest priority element after deletion: "<<pq.getHighestPriorityElement()<<endl;
  if(pq.isEmpty()){
    cout<<"Priority Queue is empty."<<endl;
  }else{
    cout<<"Priority Queue is not empty."<<endl;
  }
  return 0;
}
// */


// Question 350*******Assignment-13 ***************
// Priority Queue using 2D arrays
// 9. Define a logic to implement priority queue using 2D arrays.
/*
#include<iostream>
#define MAX_Ele 10
#define MAX_Pr 5
int pq[MAX_Pr][MAX_Ele];
int pEleCount[MAX_Pr] = {0};
using namespace std;
void insert(int e, int p){
  if(p < 0 || p >= MAX_Pr){
    cout<<"Invalid priority."<<endl;
    return;
  }
  if(pEleCount[p] >= MAX_Ele){
    cout<<"Priority Queue is full for priority "<<p<<endl;
    return;
  }
  pq[p][pEleCount[p]++] = e;
}

void pop(){
  for(int i = MAX_Pr -1; i>=0; i--){
    if(pEleCount[i] > 0){
      pEleCount[i]--;
      return;
    }
  }
}
int top(){
  for(int i = MAX_Pr -1; i>=0; i--){
    if(pEleCount[i] > 0){
      return pq[i][pEleCount[i]-1];
    }
  }
  cout<<"Priority Queue is empty."<<endl;
  return -1;
}
void display(){
  for(int i = MAX_Pr-1; i>=0; i--){
    if(pEleCount[i]>0){
      for(int j = 0; j<pEleCount[i]; j++){
        cout<<pq[i][j]<<"(p:"<<i<<") ";
      }
      cout<<endl;
    }
  }
}

int main(){
  insert(10, 2);
  insert(20, 1);
  insert(30, 3);
  insert(40, 2);
  insert(50, 4);
  cout<<"Priority Queue elements: "<<endl;
  display();
  cout<<"Top element: "<<top()<<endl;
  pop();
  cout<<"Top element after pop: "<<top()<<endl;
  return 0;  
}
*/


// Question 351*******Assignment-13 ***************
// 10. Define a logic to implement min priority queue and max priority queue in the same data structure.
/*
#include<iostream>
#define size 10
using namespace std;
int arr[size];
int n = 0, mode = 0;

void insert(int e){
  if(n >= size){
    cout<<"Priority Queue is full."<<endl;
    return;
  }
  arr[n++] = e;
}

int sizeOfPQ(){
  return n;
}

void pop(){
  if(n == 0){
    cout<<"Priority Queue is empty."<<endl;
    return;
  }
  int idx = 0;
  for(int i = 1; i<n; i++){
    if(mode == 0 && arr[i] < arr[idx]){
      idx = i;
    }else if(mode == 1 && arr[i] > arr[idx]){
      idx = i;
    }
  }
  for(int i = idx; i<n-1; i++){
    arr[i] = arr[i+1];
  }
  n--;
}

int top(){
  if(n == 0){
    cout<<"Priority Queue is empty."<<endl;
    return -1;
  }
  int idx = 0;
  for(int i = 1; i<n; i++){
    if(mode == 0 && arr[i] < arr[idx]){
      idx = i;
    }else if(mode == 1 && arr[i] > arr[idx]){
      idx = i;
    }
  }
  return arr[idx];
}

void display(){
  for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
  insert(10);
  insert(20);
  insert(4);
  insert(38);
  display();

  mode = 0; // min
  cout<<"Peek "<< top()<<endl;
  pop();
  display();
  
  mode = 1; // max
  cout<<"Peek "<< top()<<endl;
  pop();
  display();
}
//  */


// Question 407*******Assignment-14 (Tree) ***************
// 1. Define a class BST(Binary Search Tree) with node type pointer root as member variable. implement Binary Search Tree using linked representation.

// 2. in this question, define a constructor to initialise root pointer with NULL.

// 3. In this question, define a method to check whether the tree is empty or not.

// 4. define a method to insert a new element in the BST.

// 5. Define a method for preorder traversal of the BST.

// 6. Define a method for inorder traversal of the BST.

// 7. Define a method for postorder traversal of the BST.

// 8. define a method to delete an element from BST.

// 9. define a method to search an item in the BST.

// 10. define a destructor to release memory of all the nodes of BST.
/* 
#include<iostream>
using namespace std;
class Node{
  public:
   int data;
   Node *left;
   Node *right;
  Node(int v): data(v), left(NULL), right(NULL) {}
};
class BST{
  Node* root;
  public:

  BST(): root(NULL) {}

  bool isEmpty(){
    return root == NULL;
  }

  void insert(int v){
    Node* n = new Node(v);
    if(root == NULL){
      root = n;
      return;
    }
    Node* current = root;
    Node* parent = NULL;
    while(current != NULL){
      parent = current;
      if(v < current->data){
        current = current->left;
      }else if(v > current->data){
        current = current->right;
      }else{
        delete n;
        cout<<"Duplicate value "<<v<<" not allowed in BST."<<endl;
        return;
      }
    }
    if(v < parent->data){
      parent->left = n;
    }else{
      parent->right = n;
    }
  }

  void preOrder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
  }
  void preOrder(){
    preOrder(root);
  }

  void inOrder(Node* root){
    if(root == NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
  }
  void inOrder(){
    inOrder(root);
  }

  void postOrder(Node* root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
  }
  void postOrder(){
    postOrder(root);
  }

  Node* deleteRec(Node* root, int v){
    if(root == NULL) return root;
    if(v < root->data){
      root->left = deleteRec(root->left, v);
    }else if(v > root->data){
      root->right = deleteRec(root->right, v);
    }else{
      // case 0 & 1 child
      if(root->left == NULL){
        Node* t = root->right;
        delete root;
        return t;
      }else{
        Node* t = root->left;
        delete root;
        return t;
      }
      // case 2 child
      Node* a = root->right;
      while(a->left != NULL){
        a = a->left;
      }
      root->data = a->data;
      root->right = deleteRec(root->right, a->data);
      return root;
    }
  }
  void del(int v){
    root = deleteRec(root, v);
  }

  bool searchRec(Node* root, int v){
    if(root == NULL) return false;
    if(root->data == v) return true;
    if(v < root->data){
      return searchRec(root->left, v);
    }else{
      return searchRec(root->right, v);
    }
  }
  bool search(int v){
    return searchRec(root, v);
  }

  void destroyTree(Node* root){
    if(root == NULL) return;
    destroyTree(root->left);
    destroyTree(root->right);
    delete root;
  }
  ~BST(){
    // post order deletion
    destroyTree(root);
  }
};
int main(){
  BST tree;
  tree.insert(50);
  tree.insert(30);
  tree.insert(20);
  tree.insert(40);
  tree.insert(70);
  tree.insert(60);
  tree.insert(80);

  cout<<"Preorder traversal: ";
  tree.preOrder();
  cout<<endl;

  cout<<"Inorder traversal: ";
  tree.inOrder();
  cout<<endl;

  cout<<"Postorder traversal: ";
  tree.postOrder();
  cout<<endl;

  int key = 20;
  cout<<"Delete "<<key<<endl;
  tree.del(key);
  cout<<"Inorder traversal after deletion: ";
  tree.inOrder();
  cout<<endl;

  key = 90;
  if(tree.search(key)){
    cout<<key<<" found in the tree."<<endl;
  }else{
    cout<<key<<" not found in the tree."<<endl;
  }

  return 0;
}
// */


//*******Assignment-15 (Recursion) ***************
// Question 408:- Write a recursive function to print first N natural numbers.
/*
#include <iostream>
using namespace std;
void printNNaturalN(int n){
  if(n == 0) return;
  printNNaturalN(n-1);
  cout<<n<<" ";
}
int main(){
  int n;
  cin>>n;
  printNNaturalN(n);
}
// */


// Question 409:- Write a recursive function to print first N natural numbers in reverse order.
/*
#include <iostream>
using namespace std;
void nNaturalNRev(int n){
  if(n == 0) return;
  cout<<n<<" ";
  nNaturalNRev(n-1);
}

int main(){
  int n; cin>>n;
  nNaturalNRev(n);
}
// */


// Question 410:- Write a recursive function to print first N odd natural numbers.
/*
#include <iostream>
using namespace std;
void nNaturalOdd(int n){
  if(n == 0) return;
  nNaturalOdd(n-1);
  cout<<n*2-1<<' ';
}

int main(){
  int n; cin>>n;
  nNaturalOdd(n);
}
// */


// Question 411:- Write a recursive function to print first N odd natural numbers in reverse order.
/*
#include <iostream>
using namespace std;
void nNaturalOddRev(int n){
  if(n == 0) return;
  cout<<n*2-1<<' ';
  nNaturalOddRev(n-1);
}

int main(){
  int n; cin>>n;
  nNaturalOddRev(n);
}
// */


// Question 412:- Write a recursive function to print first N even natural numbers.
/*
#include <iostream>
using namespace std;
void nNaturalEven(int n){
  if(n == 0) return;
  nNaturalEven(n-1);
  cout<<n*2<<' ';
}

int main(){
  int n; cin>>n;
  nNaturalEven(n);
}
// */


// Question 413:- Write a recursive function to print first N even natural numbers in reverse order.
/*
#include <iostream>
using namespace std;
void nNaturalEvenRev(int n){
  if(n == 0) return;
  cout<<n*2<<' ';
  nNaturalEvenRev(n-1);
}
int main(){
  int n; cin>>n;
  nNaturalEvenRev(n);
}
// */

// Question 414:- Write a recursive function to print squares of first N natural numbers.
/*
#include <iostream>
using namespace std;
void nNaturalSquare(int n){
  if(n == 0) return;
  nNaturalSquare(n-1);
  cout<<n*n<<" ";
}
int main(){
  int n; cin>>n;
  nNaturalSquare(n);
}
// */


// Question 415:- Write a recursive function to print squares of first N natural numbers in reverse order.
/*
#include <iostream>
using namespace std;
void nNaturalSquareRev(int n){
  if(n == 0) return;
  cout<<n*n<<" ";
  nNaturalSquareRev(n-1);
}
int main(){
  int n; cin>>n;
  nNaturalSquareRev(n);
}
// */


// Question 416:- Write a recursive function to print cubes of first N natural numbers.
/*
#include <iostream>
using namespace std;
void nNaturalCube(int n){
  if(n == 0) return;
  nNaturalCube(n-1);
  cout<<n*n*n<<" ";
}
int main(){
  int n; cin>>n;
  nNaturalCube(n);
}
// */


// Question 417:- Write a recursive function to print cubes of first N natural numbers in reverse order.
/*
#include <iostream>
using namespace std;
void nNaturalCubeRev(int n){
  if(n == 0) return;
  cout<<n*n*n<<" ";
  nNaturalCubeRev(n-1);
}
int main(){
  int n; cin>>n;
  nNaturalCubeRev(n);
}
// */

//***********Assignment- 16 (More on Recursion)*********/
// Question 418:- Write a recursive function to calculate sum of first N natural numbers. (1)
/*
#include <iostream>
using namespace std;
int sumNNatural(int n){
  if(n == 0) return 0;
  return n + sumNNatural(n-1);
}
int main(){
  int n; cin>>n;
  cout<<"Sum of first "<<n<<" natural numbers is: "<<sumNNatural(n)<<endl;
}
// */


// Question 419:- Write a recursive function to calculate sum of first N odd natural numbers. (2)
/*
#include <iostream>
using namespace std;
int sumNOddNatural(int n){
  if(n == 0) return 0;
  return (2*n - 1) + sumNOddNatural(n-1);
}
int main(){
  int n; cin>>n;
  cout<<"Sum of first "<<n<<" odd natural numbers is: "<<sumNOddNatural(n)<<endl;
}
// */


// Question 420:- Write a recursive function to calculate sum of first N even natural numbers. (3)
/*
#include <iostream>
using namespace std;
int sumNEvenNatural(int n){
  if(n == 0) return 0;
  return (2*n) + sumNEvenNatural(n-1);
}
int main(){
  int n; cin>>n;
  cout<<"Sum of first "<<n<<" even natural numbers is: "<<sumNEvenNatural(n)<<endl;
}
// */


// Question 421:- write a recursive function to calculate sum of squares of first N natural numbers. (4)
/*
#include <iostream>
using namespace std;
int sumNSquareNatural(int n){
  if(n == 0) return 0;
  return (n*n) + sumNSquareNatural(n-1);
}
int main(){
  int n; cin>>n;
  cout<<"Sum of squares of first "<<n<<" natural numbers is: "<<sumNSquareNatural(n)<<endl;
}
// */


// Question 422:- write a recursive function to calculate factorial of a number. (5)
/*
#include <iostream>
using namespace std;
int fact(int n){
  if(n == 0) return 1;
  return n*fact(n-1);
}
int main(){
  int n; cin>>n;
  cout<<"Factorial of "<<n<<" is: "<<fact(n)<<endl;
}
// */


// Question 423:-- Write a recursive function to calculate sum of the digits of a number. (6)
/*
#include <iostream>
using namespace std;

int sumOfDigits(int n){
  if(n == 0) return 0;
  return (n%10) + sumOfDigits(n/10);
}
int main(){
  int n; cin>>n;
  cout<<"Sum of digits of "<<n<<" is: "<<sumOfDigits(n)<<endl;
}
// */ 


// Question 424:- Write a recursive function to print binary of a given decimal number. (7)
/*
#include <iostream>
using namespace std;
void printBinary(int n){
  if(n == 0) return;
  printBinary(n/2);
  cout<<n%2;
}
int main(){
  int n; cin>>n;
  printBinary(n);
}
// */


// Question 425:- write a recursive function to find nth term of fibonacci series. (8)
/*
#include <iostream>
using namespace std;
int fib(int n){
  if(n == 1) return 0;
  if(n == 2) return 1;
  return fib(n-1) + fib(n-2);
}
int main(){
  int n; cin>>n;
  if(n <= 0){
    cout<<"You have entered invalid number for fibonacci series";
    return 0;
  }
  cout<<"Fibonacci term at position "<<n<<" is: "<<fib(n)<<endl;
}
// */


// Question 426:- Write a recursive function to calculate HCF of two numbers. (9)
/*
//           Brute force
// #include <iostream>
// using namespace std;
// int hcf(int a, int b, int h){
//   if(a%h == 0 && b%h == 0) return h;
//   return hcf(a, b, h-1);
// }
// int main(){
//   int a, b; cin>>a>>b;
//   int h = (a < b) ? a : b;
//   cout<<"HCF of "<<a<<" and "<<b<<" is: "<<hcf(a, b, h)<<endl;
// }

//              OR

#include <iostream>
using namespace std;
int hcf(int a, int b){
  if(b == 0) return a;
  return hcf(b, a%b);
}
int main(){
  int a, b; cin>>a>>b;
  cout<<"HCF of "<<a<<" and "<<b<<" is: "<<hcf(a, b)<<endl;
}
// */


// Question 427:- Write a recursive function to calculate x power y. (10)
// day - 90 1st Q
/*
#include <iostream>
using namespace std;
int power(int x, int y){
  if(y == 1) return x;
  return x * power(x, y-1);
}
int main(){
  int x, y; cin>>x>>y;
  if(y < 0){
    cout<<"You have entered invalid power value."<<endl;
    return 0;
  }
  if(y == 0){
    cout<<x<<" power "<<y<<" is: 1"<<endl;
    return 0;
  }
  cout<<x<<" power "<<y<<" is: "<<power(x, y)<<endl;
}
// */

//************Assignment- 17 (Graph Matrix)**********/
// day - 90 2nd Q
// Question 428:-  ASAP


//******Assignment- 18 (Graph List Representation)*****/
// day - 90 3rd Q
// Question 429:- ASAP


//*******Assignment- 19 (Sorting) */
// day - 90 4th Q
// Question 430:- ASAP


// Question 431:-
// Question 432:-
// Question 433:-
// Question 434:-
// Question 435:-
// Question 436:-
// Question 437:-
// Question 438:-
// Question 439:-


//*********Assignment- 20 (Heap)**************/
// Question 440:-
// Question 441:-
// Question 442:-


//**********Assignment-21 (Searching)*************/
// Question 443:-
// Question 444:-



// ****************Completed_DSA******************
// g++ -std=c++20 linearDS.cpp -o linearDS && linearDS