# *******Assignment-1 (Time Complexity)**********
# Question 352 : Find upper bound for f(n) = 2n+5
# :- O(n)

# Question 353 : Find upper bound for f(n) = 2n^2 + 1
# :- O(n^2)

# Question 354 : Find upper bound for f(n) = n^3 + 5n^2 + 10n + 3
# :- O(n^3)


# Question 355 : Find upper bound for f(n) = 100
# :- O(1)


# Question 356 : Find upper bound for f(n) = 3n^4 - 4n^3
# :- O(n^4)


# Question 357 : Find upper bound for f(n) = n^2
# :- O(n^2)


# Question 358 : Find upper bound for f(n) = 5n+2
# :- O(n)


# Question 359 : Find upper bound for f(n) = n^3 + 2n^2 + 4
# :- O(n^3)


# Question 360 : Find upper bound for f(n) = 2n^3+5
# :- O(n^3)


# Question 361 : Find upper bound for f(n) = 5n
# :- O(n)


# *******Assignment-2 (Common Properties)**********
# Question 362 : What is the sum of 1+2+3+4+...+n?
# :- n(n+1)/2


# Question 363 : what is the sum of 1+1/2+1/3+...+1/n?
# :- O(log n)


# Question 364 : What is the sum of 1+x+x^2+x^3+...+x^n?
# :- (x^(n+1)-1)/(x-1) , x!=1
# :- n+1 , x=1


# Question 365 : What is the sum of 1+3+5+7+...+n terms?
# :- n^2

# Question 366 : What is the sum of 2+4+6+8+...+n terms?
# :- n(n+1)


# Question 367 : What is the sum of 1^2 + 2^2 + 3^2 + ... + n^2?
# :- n(n+1)(2n+1)/6


# Question 368 : Simplify log x + log y
# :- log(xy)


# Question 369 : Simplify log x - log y
# :- log(x/y)


# Question 370 : Simplify log x^n
# :- n log x


# Question 371 : what is the sum of log 1+ log 2 + log 3 + ... + log n?
# :- log(n!)


# *******Assignment-3 (Algorithmic Analysis & Time Complexity)******
"""
  instructions:
  - Analyze the provided python pseudo-code for each question.
  - identify the worst-case time complexity.
  - Choose the most appropriate Big O notation.
  
"""
# Question 372 : Inserting a node at the end of a Singly Linked List (without tail pointer)
"""
def insert_at_end(head, data):
    new_node = Node(data)
    if head is None:
        return new_node
    current = head
    while current.next is not None:
        current = current.next
    current.next = new_node
    return head
"""
# :- O(n)


# Question 373 : linear search in an Array
"""
def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1
"""
# :- O(n)


# Question 374 : Bubble Sort Algorithm
"""
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr
"""
# :- O(n^2)

# Question 375 : Finding the maximum Value in an Unsorted Array
"""
def find_max(arr):
    max_val = arr[0]
    for num in arr:
        if num > max_val:
            max_val = num
    return max_val
"""
# :- O(n)

# Question 376 : Merging two sorted arrays
"""
def merge_sorted_arrays(arr1, arr2):
    merged = []
    i = j = 0
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            merged.append(arr1[i])
            i += 1
        else:
            merged.append(arr2[j])
            j += 1
    while i < len(arr1):
        merged.append(arr1[i])
        i += 1
    while j < len(arr2):
        merged.append(arr2[j])
        j += 1
    return merged
"""
# :- O(n + m) where n and m are the lengths of arr1 and arr2 respectively


# *******Assignment-4 (Algorithmic Analysis & Time Complexity)******
"""
  instructions:
  - Analyze the provided python pseudo-code for each question.
  - identify the worst-case time complexity.
  - Choose the most appropriate Big O notation.
"""
# Question 377 : Binary search on a Sorted Array
"""
def binary_search(arr, target):
    low, high = 0, len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1
"""
# :- O(log n)
    

# Question 378 : Insertion Sort Algorithm
"""
def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr
"""
# :- O(n^2)

# Question 379 : checking if a number is prime  
"""
import math
def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
"""
# :- O(√n)


# Question 380 : Fibonacci series (iterative method)
"""
def print_fibonacci(n):
    a, b = 0, 1
    for i in range(n):
        print(a, end=' ')
        a, b = b, a + b
    print()
"""
# :- O(n)


# Question 381 : inserting an item at index 0 of an Array
"""
def insert_at_start(arr, item):
    arr.append(None)  # Increase the size of the array
    for i in range(len(arr) - 1, 0, -1):
        arr[i] = arr[i - 1]
    arr[0] = item
    return arr
"""
# :- O(n)







































































































































































































































































































