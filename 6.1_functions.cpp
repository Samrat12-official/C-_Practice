//6.1 Functions in c++
#include<iostream>
using namespace std;
void print(int num){
	cout<<num<<endl;
	
}
int add(int n1,int n2){
	print(n1);
	print(n2);
	int sum = n1+n2;
	return sum;
}
int main(){
	int a =1,b=2;
	int c = add(a,b);
	cout<<c;
}
