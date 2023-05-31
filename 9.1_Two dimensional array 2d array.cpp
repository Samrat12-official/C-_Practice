//9.1_Two dimentional arrays | 2D array | c++ placements

#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"\nEnter the size of 2D array :";
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"\nmatrix is:";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}
