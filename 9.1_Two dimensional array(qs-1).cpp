//9.1_2D array(Searching a Matrix)

//qs searcing a matrix
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"\nEnter the Size of the array :";
	cin>>n>>m;
	
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int key;
	cout<<"\n Enter the Element you r searching for:";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]==key)
			{
				cout<<"Element is Found in:"<<i<<" "<<j;
			}
		}
	}
}
