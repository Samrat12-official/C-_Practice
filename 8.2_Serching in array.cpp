//8.2_Searching in arrays
//linear searching using function


#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i;
	}
	return -1;
}
int main()
{
	int n;
	cout<<"Enter the number of Elements :";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
	      cin>>arr[i];
	}
	int key;
	cout<<"\n Enter the key :";
	cin>>key;
	
	cout<<linearSearch(arr,n,key)<<endl;
}
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	int array[n];
//	int flag=0;
	cout<<"Enter the number of elements in an array :";
	cin>>n;
	int sc;
    cout<<"Enter The element u r searching for :";
	cin>>sc;	
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	for(int i=0;i<n;i++)
	{
		if(array[i]==sc){
			cout<<"Element found :"<<array[i];
			cout<<"\nPosition :"<<i+1;
			cout<<"\nIndex no :"<<i;
//			flag=1;
		}
		
	}
//	if(flag=0)
//	{
//		cout<<"Element not found ";
//	}
	
	return 0;
}*/
