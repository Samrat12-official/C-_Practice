#include<iostream>
using namespace std;
int main(){
	int row,col;
	
//	process -1 when we know the no of columns
//	cin>>row;
//	for(int i=0;i<row;i++)
//	{
//		cout<<"*";
//		cout<<"*";
//		cout<<"*";
//		cout<<"*";
//		cout<<"\n";
//	}

// process to when row and column both to be entered
cin>>row;
cin>>col;
for(int i=1;i<=row;i++){
	for(int j=1;j<=col;j++){
		cout<<"*";
	}
	cout<<"\n";
}
}
