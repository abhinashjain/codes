#include "stdio.h"

int main()
{
	int n,m,i,y,x,b;
	scanf("%d %d",&n,&m);
	int arr[n][11];
	char ch[n];
	scanf("%s",ch);
	arr[0][10]=ch[0]-'0';
	for(y=0;y<10;y++)
		arr[0][y]=0;
	for(i=1;i<n;i++)
	{
		arr[i][10]=ch[i]-'0';
		for(y=0;y<10;y++)
		{
			arr[i][y]=arr[i-1][y];
			if(y==arr[i-1][10])
				arr[i][y]+=1;
		}
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&x);
		x--;
		b=0;
		for(y=0;y<10;y++)
			b+=abs((arr[x][10]-y)*arr[x][y]);
		printf("%d\n",b);
	}
	return 0;
}



/*

Yesterday Chef had a great party and doesn't remember the way he celebreated it. But he found a strange paper in his kitchen containing n digits (lets give them indices from 1 to n and name them a1, a2 .. aN).

Chef remembers that he played such game:
    On each step he choose an index x from 1 to n.
    For all indices y (y < x) he calculated the difference by = ax - ay.
    Then he calculated B1 - sum of all by which are greater than 0 and B2 - sum of all by which are less than 0.
    The answer for this step is B1 - B2.

Chef remembers the game, but forgot the answer. Please, help him!

Input
    The first line contains two integers n, m denoting the number of digits and number of steps. The second line contains n digits (without spaces) a1, a2, ..., an.
    Each of next m lines contains single integer x denoting the index for current step.

 
Output
    For each of m steps print single number in a line - answer of the step.

 
Constraints
    1 ≤ n, m ≤ 10^5
    0 ≤ ai ≤ 9
    1 ≤ x ≤ n

 
Example
Input:
10 3
0324152397
1
4
7

Output:
0
7
9

 

Explanation
For index 1 there are no indexes which are less, so B1 = B2 = 0 and the answer is 0.
For index 4 we have b1 = 4-0=4, b2 = 4-3=1, b3 = 4-2=2, so B1 = 4+1+2 = 7, B2 = 0 and the answer is 7.
For index 7 we have b1 = 2-0=2, b2 = 2-3=-1, b3 = 2-2=0, b4 = 2-4=-2, b5 = 2-1=1, b6 = 2-5=-3, so B1 = 2 + 1 = 3, B2 = -1 -2 -3 = -6 and the answer is 9.

*/
