// 8.1_Introduction to Arrays in c++
// Array - is a list of variables of similar types
/* array initialization
  eg = <syntax> 
       datatype arrayName[size];
    
    int array = {10,20,30,40}
    int - 4bytes
    array - 4x4 = 16 bytes
*/
#include<iostream>
using namespace std;
int main()
{
/*	int array[4]={10,20,30,40};
//	array[0]=10;
//	array[1]=20
    cout<<array[3];
*/

//take array as size as user input
    int n;
	cin>>n;
	
	int array[n];
	
//	cin>>array[0]  to input one-by-one
    for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}	
	for(int i=0;i<n;i++)
	{
		cout<<array[i];
	}
}
