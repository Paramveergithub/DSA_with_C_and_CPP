// Day - 116 1st Question**************Two Pointers-1*************
// Question 525:- Given a 1-indexed array of integers numbers that is already sorted in non- decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
// Example 1:
// Input: numbers = [2, 7, 11, 15], target = 9
// Output: [1, 2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
// Example 2:
// Input: numbers = [2, 3, 4], target = 6
// Output: [1, 3]

/*
#include<iostream>
#include<vector>
using namespace std;

vector<int>twoSum(vector<int>& numbers, int target){
    int left = 0, right = numbers.size() - 1;
    while(left < right){
        int sum = numbers[left] + numbers[right];
        if(sum == target){
            return {left + 1, right + 1};
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    return {-1, -1};
}
int main(){
    vector<int>numbers ={2, 7, 11, 15};
    int target = 9;
    vector<int>result = twoSum(numbers, target);
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
// */



// Day - 116 2nd Question**************Two Pointers-2*************
// Question 526:- Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.
// Example 1:
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]

/*
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>triplet(vector<int>&nums){
  int i = 0, j = nums.size()-2, k = nums.size()-1;
  set<vector<int>>res;
  sort(nums.begin(), nums.end());
  
  while(i < j && j < k){
      int target = -nums[k];
     while (i<j){
         int sum = nums[i] + nums[j];
         if(sum < target){
             i++;
         }
         else if(sum > target){
             j--;
         }
         else{
             res.insert({nums[i], nums[j], nums[k]});
             i++;
             j--;
         }
     }
     i = 0;
     k = k - 1;
     j = k - 1;
  }
  vector<vector<int>>ans(res.begin(), res.end());
  return ans;
}
int main(){
    vector<int>nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>>res = triplet(nums);
    cout<<"[ ";
    for(auto i : res){
        cout<<"[ ";
        for(auto j : i)
            cout<<j<<" ";
        cout<<"], ";
    }
    cout<<"]";
    return 0;
}
// */



// Day - 117 1st Question**************Two Pointers-3*************
// Question 527:- You are given an integer array height of length n. there are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.
// Example 1:
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is between the index 1 (height = 8) and index 8 (height = 7). the area is calculated as min(height[1], height[8]) * (8 - 1) = 49.

/*
#include<iostream>
#include<vector>
using namespace std;
int maxWater(vector<int>&height){
    int l = 0, r = height.size()-1, maxArea = 0;
    while(l < r){
        maxArea = max(maxArea, min(height[l], height[r]) * (r - l));
        if(height[l] < height[r])
            l++;
        else
            r--;
    }
    return maxArea;
}

int main(){
    vector<int>arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<maxWater(arr);
    return 0;
}
// */

// Day - 117 2nd Question**************Two Pointers-4*************
// Question 528:- Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. then return the number of unique elements in nums.
// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
// 1. Modify the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// 2. Return k.
// input : nums = [0,0,1,1,1,2,2,3,3,4]
// output : 5, nums = [0,1,2,3,4,_,_,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
// It does not matter what you leave beyond the returned k.
/*
#include<iostream>
#include<vector>
using namespace std;
int res(vector<int>&nums){
    if(nums.size() == 0)
        return 0;
    int i = 0, j = 1;
    while(j < nums.size()){
        if(nums[i] != nums[j]){
            nums[++i] = nums[j];
        }
        j++;
    }
    return i + 1;
}
int main(){
    vector<int>nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    // vector<int>nums = {4};
    cout<<res(nums)<<endl;
    for(auto i : nums){
        cout<<i<<" ";
    }
    return 0;
}
// */


// Day - 118 1st Question**************Two Pointers-5*************
// Question 529:- Given a string s, return true if the s can be palindrome after deleting at most one character from it.
// Example 1:
// Input: s = "aba"
// Output: true
// Example 2:
// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
/*
#include<iostream>
#include<string>
using namespace std;
bool isValid(const string &s, int i, int j){
    while(i < j){
        if(s[i] == s[j])
            i++, j--;
        else
            return false;
    }
    return true;
}
bool isPalindrome(string s){
    int i = 0, j = s.size()-1;
    while(i < j){
      if(s[i] == s[j]){
        i++, j--;
      }else{
        return isValid(s, i+1, j) || isValid(s, i, j-1);
      }
    }
    return true;
}
int main(){
    // string s = "abca";
    string s = "abffssba";
    cout<<(isPalindrome(s) ? "true" : "false");
    return 0;
}
// */


// Day - 118 2nd Question**************Sliding Window-1*************
// Question 530:- Given an array of integers nums and a positive integer k, find the maximum sum of any contiguous subarray of size k. A subarray is a contiguous non-empty sequence of elements within an array.
// Example 1:
// Input: nums = [2,1,5,1,3,2], k = 3 
// Output: 9
// Explanation: The subarray [5,1,3] has the maximum sum of 9.
/*
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxSum(vector<int>&nums, int k){
   if(nums.size() < k || k <= 0)
   return 0;
   int s = 0, ws = 0, ms = INT_MIN;
   for(int e = 0; e < nums.size(); e++){
       ws += nums[e];
       if(e >= k-1){
           ms = max(ms, ws);
           ws -= nums[s];
           s++;
       }
   }
   return ms;
}
int main(){
  vector<int>nums = {2,1,5,1,3,2};
  cout<<maxSum(nums, 3)<<endl;
  return 0;
}
*/


// Day - 119 1st Question**************Sliding Window-2*************
// Question 531:- Given a string s, find the length of longest substring without repeating characters.
// A substring is a contiguous sequence of characters within a string.
//Exa- input: s = "abcabcbb" , output = 3
//Exa- input: s = "bbbbb" , output = 1
//Exa- input: s = "pwwkew" , output = 3
/*
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

int longestSubstring(string s){
    int left = 0, right = 0, maxLength = 0;
    map<char, int> charIndexMap;
    while(right < s.length()){
        char currentChar = s[right];
        if(charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= left){
            left = charIndexMap[currentChar] + 1;
        }
        charIndexMap[currentChar] = right;
        maxLength = max(maxLength, right - left + 1);
        right++;
    }    
    return maxLength;
}
int main(){
    string s = "abcabcbdsb";
    cout<<longestSubstring(s)<<endl;
    return 0;
}
// */


// Day - 119 2nd Question**************Sliding Window-3*************
// Question 532:- Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".
// The testcases will be generated such that the answer is unique.
// Example 1:
// Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
/*
#include<iostream>
#include<string>
#include<unordered_map>
#include<climits>
#include<algorithm>
using namespace std;

string sol(string s, string t){
    if(s.empty() || t.empty() || s.length() < t.length())   return "";
    unordered_map<char, int> tMap;

    for(char c : t)    tMap[c]++;

    int left = 0, right = 0, start = 0, required = tMap.size(), formed = 0;
    unordered_map<char, int> windowCount;
    int minLength = INT_MAX;

    while(right < s.length()){
        char cc = s[right];
        windowCount[cc]++;

        if(tMap.find(cc) != tMap.end() && windowCount[cc] == tMap[cc])    formed++;

        while(left <= right && formed == required){
            char lch = s[left];
            int windowLength = right - left + 1;
            if(windowLength < minLength){
                minLength = windowLength;
                start = left;
            }
            windowCount[lch]--;
            if(tMap.find(lch) != tMap.end() && windowCount[lch] < tMap[lch])    formed--;
            left++; 
        }
        right++;
    }
    if(minLength == INT_MAX)    return "";
    return s.substr(start, minLength);
}
int main(){
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout<<sol(s, t)<<endl;
    return 0;
}
// */



// Day - 120 1st Question**************Sliding Window-4*************
// Question 533:- You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array fruits where fruits[i] is the type of fruit the ith tree produces.
// You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:
// 1. You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
// 2. Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. The stoping point is when you reach a tree with a fruit type that cannot fit in your baskets.
// Return the maximum number of fruits you can pick.
// Example 1:
// Input: fruits = [1,2,1]
// Output: 3
// Explanation: We can pick from all 3 trees.
/*
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maxFruits(vector<int>&fruits){
    int left = 0, right = 0, maxFruits = 0;
    unordered_map<int, int> fruitCount;

    while(right < fruits.size()){
        fruitCount[fruits[right]]++;

        while(fruitCount.size() > 2){
            fruitCount[fruits[left]]--;

            if(fruitCount[fruits[left]] == 0){
                fruitCount.erase(fruits[left]);
            }
            left++;
        }
        maxFruits = max(maxFruits, right - left + 1);
        right++;
    }
    return maxFruits;
}
int main(){
    vector<int> fruits = {1, 2, 3, 2, 2};
    cout<<maxFruits(fruits)<<endl;
    return 0;
}
// */


// Day - 120 2nd Question**************Sliding Window-5*************
// Question 534:- Given a word txt and a pattern pat, find the total count of all anagrams of the pat in txt. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “abcd” and “dabc” are anagrams of each other.
// A substring of txt is a considered an anagram of pat if the characters in the substring can be rearranged to form pat.
// Example 1:
// Input: txt = "forxxorfxdofr", pat = "for"
// Output: 3
// Explanation: The three anagrams of pat in txt are "for", "orf", and "ofr".
/*
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int countAnagrams(string txt, string pat){
    if(pat.length() == 0 || txt.length() < pat.length())    return 0;

    int left = 0, right = 0, count = 0;
    unordered_map<char, int>patMap, windowMap;
    
    for(char c : pat)    patMap[c]++;

    while(right < txt.length()){
        windowMap[txt[right]]++;
        if(right - left + 1 == pat.length()){
            if(windowMap == patMap)    count++;
            windowMap[txt[left]]--;
            if(windowMap[txt[left]] == 0)    windowMap.erase(txt[left]);
            left++;
        }
        right++;
    }
    return count;
}
int main(){
    string txt = "forxxorfxdofr";
    string pat = "for";
    cout<<countAnagrams(txt, pat)<<endl;
    return 0;
}
// */


// Day - 121 1st Question**************Fast and Slow Pointers-1 *************
// Question 535:- Given head, the head of a linked list, determine if the linked list has a cycle in it. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
// Return true if there is a cycle in the linked list. Otherwise, return false.
// Example 1:
// Input : head = [3,2,0,-4], pos = 1
// Output : true
// Explanation : There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
/*
bool hasCycle(ListNode *head){
    if(!head || !head->next)    return false;
    ListNode *slow = head, *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)    return true;
    }
    return false;
}
// */


// Day - 121 2nd Question**************Fast and Slow Pointers-2 *************
// Question 536:- Given the head of a singly linked List, return the middle node of the linked list. If there are two middle nodes, return the second middle node.
// Example 1:
// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
/*
ListNode* middleNode(ListNode* head){
    if(!head)    return nullptr;
    ListNode *slow = head, *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
// */


// Day - 122 1st Question**************Fast and Slow Pointers-3 *************
// Question 537:- Given the head of a singly linked list, return true if it is a palindrome. or false otherwise. A palindrome is a sequence that reads the same backward as forward.
// Example 1:
// Input: head = [1,2,2,1]
// Output: true
/*
bool isPalindrome(ListNode* head){
    if(!head || !head->next) return true;
    ListNode *slow = head, *fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;    
    }
    ListNode *prev = nullptr, *curr = slow;
    while(curr){
        ListNode *Temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Temp;
    }
    ListNode *firstHalf = head, *secondHalf = prev;
    bool flag = true;
    while(flag && secondHalf){
        if(firstHalf->val != secondHalf->val)    flag = false;
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    return flag;
}
// */


// Day - 122 2nd Question**************Fast and Slow Pointers-4 *************
// Question 538:- Given the head of a linked list, remove the nth node from the end of the list and return its head.
// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
/*
ListNode* removeNthFromEnd(ListNode* head, int n){
    ListNode dummy(0);
    dummy.next = head;
    ListNode *right = &dummy, *left = &dummy;
    for(int i = 0; i <= n; i++)    right = right->next;
    while(right){
        right = right->next;
        left = left->next;
    }
    left->next = left->next->next;
    return dummy.next;
}
// */


// Day - 123 1st Question**************Fast and Slow Pointers-5 *************
// Question 539:- write an algorithm to determine if a number n is happy. A happy number is a number defined by the following process: 
// 1. Starting with any positive integer, replace the number by the sum of the squares of its digits.
// 2. Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle that does not include 1.
// Those numbers for which this process ends in 1 are happy numbers.
// Return true if n is a happy number, and false if not.
// Example 1:
// Input: n = 19
// Output: true
// Explanation: 1^2 + 9^2 = 82
// 8^2 + 2^2 = 68
// 6^2 + 8^2 = 100
// 1^2 + 0^2 + 0^2 = 1
// Example 2:
// Input: n = 2
// Output: false
// Explanation: 2^2 = 4, 4^2 = 16, 1^2 + 6^2 = 37, 3^2 + 7^2 = 58, 5^2 + 8^2 = 89, 8^2 + 9^2 = 145, 1^2 + 4^2 + 5^2 = 42, 4^2 + 2^2 = 20, 2^2 + 0^2 = 4 (cycle detected)
/*
int getNext(int n){
    int totalSum = 0;
    while(n > 0){
        int digit = n % 10;
        totalSum += digit * digit;
        n /= 10;
    }
    return totalSum;
}
bool isHappy(int n){
    int slow = n, fast = getNext(n);
    while(fast != 1 && slow != fast){
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    }
    return fast == 1;
}
// */


// Day - 123 2nd Question**************Binary Search-1*************
// Question 540:- Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4.
/*
int search(int *nums, int target){
    int n = sizeof(nums)/sizeof(nums[0]);
    int left = 0, right = n - 1;
    if(n == 0 || target < nums[left] || target > nums[right])    return -1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)    return mid;
        else if(nums[mid] < target)    left = mid + 1;
        else    right = mid - 1;
    }
    return -1;
}
// */

// Day - 124 1st Question**************Binary Search-2*************
// Question 541:- There is an integer array nums sorted in ascending order (with distinct values). Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
// You must write an algorithm with O(log n) runtime complexity.
// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Explanation: 0 exists in nums and its index is 4.
/*
int search(int *nums, int target){
    int n = sizeof(nums)/sizeof(nums[0]);
    int left = 0, right = n-1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)    return mid;
        if(nums[left] <= nums[mid]){
            if(nums[left] <= target && target < nums[mid])    right = mid - 1;
            else    left = mid + 1;
        }else{
            if(nums[mid] < target && target <= nums[right])    left = mid + 1;
            else    right = mid - 1;
        }
    }
    return -1;
}
// */


// Day - 124 2nd Question**************Binary Search-3*************
// Question 542:- Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
// You must not use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
// Example 1:
// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// /*


// */



// Day - 125 1st Question**************Binary Search-4*************
// Question 543:-
// Day - 125 2nd Question**************Binary Search-5*************
// Question 544:-


// Day - 126 1st Question**************Stack and Monotonic Stack-1*************
// Question 545:-
// Day - 126 2nd Question**************Stack and Monotonic Stack-2*************
// Question 546:-

// Day - 127 1st Question**************Stack and Monotonic Stack-3*************
// Question 547:-
// Day - 127 2nd Question**************Stack and Monotonic Stack-4*************
// Question 548:-

// Day - 128 1st Question**************Stack and Monotonic Stack-5*************
// Question 549:-
// Day - 128 2nd Question**************Priority Queue/Heap-1*************
// Question 550:-


// Day - 129 1st Question**************Priority Queue/Heap-2*************
// Question 551:-
// Day - 129 2nd Question**************Priority Queue/Heap-3*************
// Question 552:-

// Day - 130 1st Question**************Priority Queue/Heap-4*************
// Question 553:-
// Day - 130 2nd Question**************Priority Queue/Heap-5*************
// Question 554:-

// Day - 131 1st Question**************Hashing-1*************
// Question 555:-
// Day - 131 2nd Question**************Hashing-2*************
// Question 556:-

// Day - 132 1st Question**************Hashing-3*************
// Question 557:-
// Day - 132 2nd Question**************Hashing-4*************
// Question 558:-

// Day - 133 1st Question**************Hashing-5*************
// Question 559:-
// Day - 133 2nd Question**************Graph (DFS and BFS)-1*************
// Question 560:-

// Day - 134 1st Question**************Graph (DFS and BFS)-2*************
// Question 561:-
// Day - 134 2nd Question**************Graph (DFS and BFS)-3*************
// Question 562:-

// Day - 135 1st Question**************Graph (DFS and BFS)-4*************
// Question 563:-
// Day - 135 2nd Question**************Graph (DFS and BFS)-5*************
// Question 564:-


// Day - 136 1st Question**************Tree-1*************
// Question 565:-
// Day - 136 2nd Question**************Tree-2*************
// Question 566:-

// Day - 137 1st Question**************Tree-3*************
// Question 567:-
// Day - 137 2nd Question**************Tree-4*************
// Question 568:-

// Day - 138 1st Question**************Tree-5*************
// Question 569:-
// Day - 138 2nd Question**************Dynamic Programming-1*************
// Question 570:-

// Day - 139 1st Question**************Dynamic Programming-2*************
// Question 571:-
// Day - 139 2nd Question**************Dynamic Programming-3*************
// Question 572:-

// Day - 140 1st Question**************Dynamic Programming-4*************
// Question 573:-
// Day - 140 2nd Question**************Dynamic Programming-5*************
// Question 574:-

// Day - 141 1st Question**************Backtracking-1*************
// Question 575:-
// Day - 141 2nd Question**************Backtracking-2*************
// Question 576:-

// Day - 142 1st Question**************Backtracking-3*************
// Question 577:-
// Day - 142 2nd Question**************Backtracking-4*************
// Question 578:-

// Day - 143 1st Question**************Backtracking-5*************
// Question 579:-
// Day - 143 2nd Question**************Bit Manipulation-1*************
// Question 580:-

// Day - 144 1st Question**************Bit Manipulation-2*************
// Question 581:-
// Day - 144 2nd Question**************Bit Manipulation-3*************
// Question 582:-

// Day - 145 1st Question**************Bit Manipulation-4*************
// Question 583:-
// Day - 145 2nd Question**************Bit Manipulation-5*************
// Question 584:-

// Day - 146 1st Question**************Greedy-1*************
// Question 585:-
// Day - 146 2nd Question**************Greedy-2*************
// Question 586:-


// Day - 147 1st Question**************Greedy-3*************
// Question 587:-
// Day - 147 2nd Question**************Greedy-4*************
// Question 588:-

// Day - 148 1st Question**************Greedy-5*************
// Question 589:-
// Day - 148 2nd Question**************Matrix / Grid Problem-1*************
// Question 590:-

// Day - 149 1st Question**************Matrix / Grid Problem-2*************
// Question 591:-
// Day - 149 2nd Question**************Matrix / Grid Problem-3*************
// Question 592:-

// Day - 150 1st Question**************Matrix / Grid Problem-4*************
// Question 593:-
// Day - 150 2nd Question**************Matrix / Grid Problem-5*************
// Question 594:-


// Day - 151 1st Question**************Linked List Mastery-1*************
// Question 595:-
// Day - 151 2nd Question**************Linked List Mastery-2*************
// Question 596:-


// Day - 152 1st Question**************Linked List Mastery-3*************
// Question 597:-
// Day - 152 2nd Question**************Linked List Mastery-4*************
// Question 598:-

// Day - 153 1st Question**************Linked List Mastery-5*************
// Question 599:-




// g++ DSA_15_Patterns/Blind_75.cpp -o main && ./main -- for github codespaces (bash terminal)
// g++ -std=c++20 Blind_75.cpp -o Blind_75 && Blind_75 -- for local machine (cmd prompt)
