//4.1_Pattern qs 5 ( Half pyramid using numbers)          DATE - 25th march 2023
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i;
		}
		cout<<"\n";
	}
}
