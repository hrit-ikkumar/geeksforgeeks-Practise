/*
Construct an N input OR Gate. An OR Gate returns 0 if all its inputs are 0, otherwise 1.

Input:

The first line of input takes the number of test cases, T. Then T test cases follow.

Each test case consists of 2 lines.

The first line of each test case takes the number of inputs to the OR Gate, N. The second line of each test case takes N space separated integers denoting the inputs to the OR Gate. Note that the inputs can be either 1's or 0's.

Output:

Print the output of the N input OR Gate for each test case on a new line.

Constraints:

1<=T<=100

1<=N<=100

Example:

Input:

3
2
1 1
3
0 0 0
4
1 1 1 0

Output:

1
0
1

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,r;
	cin>>t;
	while(t--)
	{
	    r=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        r=r|a[i];
	    }
	    cout<<r<<endl;
	}
	return 0;
}
