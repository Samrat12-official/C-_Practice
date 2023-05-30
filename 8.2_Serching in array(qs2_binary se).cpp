//8.2_Searching in array
// Binary search using function
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
	int start=0;
	int end=n;
	while(start<=end)
	{
		int mid=(start+end)/2;
		
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		else
		    start=mid+1;
	}
	return -1;
}
int main()
{
	int n;
	cout<<"Enter the number of elements :";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the Search element :";
	cin>>key;
	cout<<binarySearch(arr,n,key)<<endl;
}
