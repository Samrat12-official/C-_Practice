//5.2_armstrong or not
//eg - 153 is armstrong number as cubing all the digits gives th no it self
// 1+125+27 = 153
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,arm=0;
	int originaln;
	cin>>n;
	originaln = n;
	while(n>0){
	int lastdigit = n%10;
	arm = arm + pow(lastdigit,3);
	n = n/10;
    }
    cout<<arm;
    if(originaln==arm){
	cout<<"Its a armstrong number :"<<endl;
    }
    else
    {
    	cout<<"it is not";
	}
	
	
}
