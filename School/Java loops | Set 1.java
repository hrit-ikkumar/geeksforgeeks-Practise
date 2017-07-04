/*
For a given N, prints the sum of even and odd integers of the first N natural numbers.

Input:
First line of the input contains an integer T which denotes the number of test cases. Then T test cases follow.  Each test case contains a single line containing N.

Output: 
For each test case, print space separated sums of even and odd integers of the first N natural numbers respectively.

Constraints:
1 <= T< = 10
1<=N<=10000

Example:
Input:
2
1
6 
Output:
0 1
12 9  

*/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t,n,i,sume,sumo;
		t=sc.nextInt();
		while(t-->0)
		{
		    sume=sumo=0;
		    n=sc.nextInt();
		    for(i=1;i<=n;i++)
		    {
		        if(i%2==1)
		        sumo=sumo+i;
		        else
		        sume=sume+i;
		    }
		    System.out.println(sume+" "+sumo);
		}
	}
}
