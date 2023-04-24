//4.1_Pattern qs-6(Floyd's Triangle)   DATE-25th march
#include<iostream>
using namespace std;
int main()
{
	int n;
	int c=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<c<<" ";
			c++;
		}
		
		cout<<"\n";
	}
}
