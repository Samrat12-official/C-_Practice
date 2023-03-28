#include<iostream>
using namespace std;

int main()
{
	
//	qs1:
//	int i = 1;
	    //1   //3
//	i = i++ + ++i;
//	cout<<i<<endl;   //op : 4
	
//	qs2:
//    int i=1;
//    int j=2;
//    int k;
    //    1 + 2 + 1   + 2   +   3 +   4
//    k = i + j + i++ + j++ + ++i + ++j;
//    cout<<i<<" "<<j<<" "<<" "<<k<<endl;   //op: 3 4 13

//  qs3:
//      int i = 0;
      //  0   -   0 +   1 - 1
//      i = i++ - --i + ++i - i--;  //op: 0
//      cout<<i<<endl;

//  qs4:
//         int i=1,j=2,k=3;
        //      1   - 2     3
//        int m = i-- - j-- - k--;
//        cout<<i<<endl;  //op:0
//        cout<<j<<endl;  //op:1
//        cout<<k<<endl;  //op:2
//        cout<<m<<endl;  //op:-4
	

//  qs5:
           int i=10,j=20,k;
           //  10  - 9   +   19-   20+   9 - 20  +   10 - 19
           k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
           
           cout<<i<<endl; //op:10
           cout<<j<<endl; //op:20
           cout<<k<<endl; //op: -20
	
	
	return 0;
}
