//5.2_how to reverse
//eg = 1234 ko 4321 karna he

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rev;
	while(n>0){
		int lastdigit=n%10;
		rev = rev*10 + lastdigit;
		n=n/10;
	}
	cout<<rev;
	
}
