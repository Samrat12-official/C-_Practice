//8.5_Arrays - Q's asked by top MNCs | c++ placement course

/*
qs asked by amazon,microsoft
First reapting element

Problem - Given an array arr[] of size N. The task is to find reapeating element in the array of integers,
i.e., an element that occurs more the once and whose index of firt occurence is smallest.


Constraints:
1<=N<=10^6
0<=Ai<=10^6

Example: 
input :- 
  7
  1 5 3 4 3 5 6 
  
output :-
  2

Explanation:-
5 is apprearing twice and its first apprearance is at index 2 which is less than 3 whose first occurinf index is 3.


Base idea:- 
To check if a element is repeating, we maintain an array idx[], which stores the first
occurrence9index) of a perticular element a[i].
*> initialize the idx[] with -1, and minidx with INT_MAX
          -1  -1  -1  -1  -1  -1  -1  -1
           0   1   2   3   4   5   6   7

*>keep updating idx[], while traversing the given array.

base idea:
> at i = 0
 
  Given array: 
       1  5  3  4  3  5  6 

