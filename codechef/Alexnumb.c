#include "stdio.h"

int main()
{
	int i,j,t,tmp;
	long long n,cnt;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		cnt=0;
		scanf("%lld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&tmp);		
		}
		cnt=(n*(n-1))/2;
		printf("%lld\n",cnt);
	}
	return 0;
}

/*

Alexandra has some distinct integer numbers a1,a2...an.
Count number of pairs (i,j) such that:
1≤ i ≤ n
1≤ j ≤ n
ai < aj

 
Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.The first line of each test case contains a single integer n denoting the number of numbers Alexandra has. The second line contains n space-separated distinct integers a1, a2, ..., an denoting these numbers.

 
Output
For each test case, output a single line containing number of pairs for corresponding test case.

Constraints
    1 ≤ T ≤ 4
    1 ≤ n ≤ 100000
    0 ≤ ai ≤ 10^9
    All the ai are distinct

Example
2
2
2 1
3
3 1 2

Output:
1
3
 
Explanation
Case 1: Only one such pair: (2,1)
Case 2: 3 possible pairs: (2,1), (2,3), (3,1)

*/
