//8.4 _Array challenges | c++ placement

//qs-1 Given an array a[] of size n. for every i form i to n-1 output max(a[0],a[1],...,a[i]).
#include<iostream>
using namespace std;
int main()
{
	int mx=-19999;
	cout<<"Enter the size";
	int n;
	cin>>n;
	
	cout<<"Enter the array elements :";
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		mx=max(mx,a[i]);
		cout<<mx<<endl;
	}
}
