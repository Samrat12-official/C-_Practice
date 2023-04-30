// 8.2_intro to array
//qs - input a array of size n and print the max and min of the elements
#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
	for(int i=0;i<n;i++)
	{
/*		if(array[i]>maxNo)
		{
			maxNo=array[i];
		}
		ether of using these three lines we can use maxNo=max(maxNo,array[i]);
*/		
       maxNo=max(maxNo,array[i]);
       minNo=min(minNo,array[i]);
/*		if(array[i]<minNo)
		{
			minNo=array[i];
		}
*/		
		
	}
	cout<<maxNo<<" "<<minNo;
}
