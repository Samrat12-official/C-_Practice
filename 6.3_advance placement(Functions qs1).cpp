//6.3 Advance placement qs on functions
/*
quick qs on functions
1>sum of 1st n numbers
2>Check pythagorian triplet
3>conversions
 a>binary to decimal
 b>octal to decimal
 c>hexadecimal to decimal
 d>decimal to binary
 e>decimal to octal
4>add two binary numbers
*/



//6.3_advance functions 
/* find sum of 1st n naturals numbers
 formula s = 1+2+3+4+.....+n
           = n(n+1)/2
*/ 
#include<iostream>
using namespace std;
int sumofn(int n)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"Enter the number :";
	cin>>n;
	
	int z = sumofn(n);
	cout<<z;
}
