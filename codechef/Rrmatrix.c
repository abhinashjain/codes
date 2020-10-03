#include "stdio.h"

int gcd(int a, int b)
{
	if (a==0 || b == 0)
		return a+b;
	else
		return gcd(b, a % b);
}

int main()
{
	int t,n,m,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&m);
		if(n==1 || n==m)
			printf("%d\n",m);
		else
			if(m==1)
				printf("%d\n",n);
			else
				printf("%d\n",( gcd(n-1,m-1) + 1 ));
	}
	return 0;            
}


/*

Given two matrices A and B. Both have N rows and M columns. In the matrix A, numbers from 1 to MN have been written in row major order. Row major order numbers cells from left to right, and top to bottom. That is,

A =            1		2		3		...		M
	       M+1		M+2		M+3		...		2M
              2M+1		2M+2		2M+3		...		3M
	        .		.		.		...		.
        	.		.		.		...		.
	      (N-1)M+1		(N-1)M+2	(N-1)M+3	...		NM

Similarly, in the matrix B, numbers from 1 to MN have been written in column major order. Column major order numbers cells from top to bottom and left to right.

You are to count number of pairs (i,j) such that Ai,j=Bi,j.

Input

The input consists of multiple test cases. The first line of input contains a single integer T, the number of test cases. T test cases follow. Each test case is described by one line containing two space separated integers, N and M

Output

Output T lines, ith line containing answer of the ith test case.

Constraints

1 ≤ T ≤ 10^5
1 ≤ N, M ≤ 10^9

Example

Input:
1
4 5

Output: 
2

Explanation

For the first case two matrices look as follows:


A=

1 2 3 4 5

6 7 8 9 10

11 12 13 14 15

16 17 18 19 20

B=

1 5 9 13 17

2 6 10 14 18

3 7 11 15 19

4 8 12 16 20

A1,1=B1,1

A4,5=B4,5

*/
