//8.4_Array challenges
//sub-array vs subsequence
/*sub array- continuous part of the array
eg - a part of array if broken example
      1 2 0 7 2 0 2
      - 2 0 7 2 - - 
      if broken from the main array
      so 2 0 7 2 is a sub array
      
Number of subarray of an array with n elements = nC2 + n = n*(n+1)/2.
single element is also a sub array


*>Subsequence - A subsequence is a sequence that can be derived an array by selecting zero or more elements,
 without changing the order of the remaining elements
 eg - an array 1 2 0 7 2 0 2
      not continuous but order must be same of the elements
No of subsequence of an array with n elements = 2^n   

Every subarray is a subsequence but every subsequence is not a subarray
*/   

/*topic - sum of all sub arrays
qs - Given an array[] of size n. Output sum of each subarray of the given array
example - array  - 1 2 2
      sub array-   1, 1 2, 1 2 2            which is 3 sub array(start from index 0)
      sub array-   2, 2 2                   which is 2 sub array(start from index 1)
      sub array-   2                       which is 1 sub array(start from index 2)
      total sub arrays are 1, 1 2 , 1 2 2 , 2 , 2 2 , 2 
      sum of the subs  are 1,   3 ,     5 , 2 ,   4 , 2
Approach:
    1. Iterate over all the subarrays      
         nested loop
         ;
         
         for every i=0 to i=n-1
           for every j=i to j=n-1
              output sum[i..j]
     
Dry Run:
1 2 0 7 2

*/
//--------------------code-------------------
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n Enter the size of array :";
	cin>>n;
	int arr[n];
	cout<<"\nEnter the array Elements :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int curr=0;
	for(int i=0;i<n;i++)
	{
		curr = 0;
//		cout<<"\n Index no :"<<i;
		cout<<"\nstart index :"<<i;
		for(int j=i;j<n;j++)
		{
			curr = curr + arr[j];
			cout<<"\n"<<curr;
		}
		
	}
}
	          
      
