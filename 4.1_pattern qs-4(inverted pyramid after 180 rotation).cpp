//4.1_Pattern qs-4(half pyramid after 180 rotation)       DATE - 25th march 2023

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++){
			if(j<=n-i){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
			
		}
		cout<<"\n";
	}
}
