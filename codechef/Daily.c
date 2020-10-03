#include "stdio.h"
#include "math.h"

int main()
{
	int x,n,i,j,k,cnt=0;
	int fact[7]={1,1,2,6,24,120,720};
	double lftmp;
	char ch[54];
	scanf("%d %d",&x,&n);
	int train[n][9];
	for(i=0;i<n;i++)
		for(j=0;j<9;j++)
			train[i][j]=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",ch);
		for(j=1;j<=36;j++)
		{
			if(ch[j-1]=='0')
			{
				lftmp=j;
				k=(int)ceil(lftmp/4);
				train[i][k-1]++;
			}
		}		
		for(j=37;j<=54;j++)
		{
			if(ch[j-1]=='0')
			{
				if(j==37 || j==38)
					train[i][8]++;
				if(j==39 || j==40)
					train[i][7]++;
				if(j==41 || j==42)
					train[i][6]++;
				if(j==43 || j==44)
					train[i][5]++;
				if(j==45 || j==46)
					train[i][4]++;
				if(j==47 || j==48)
					train[i][3]++;
				if(j==49 || j==50)
					train[i][2]++;
				if(j==51 || j==52)
					train[i][1]++;
				if(j==53 || j==54)
					train[i][0]++;
			}
		}		
	}
	for(i=0;i<n;i++)
		for(j=0;j<9;j++)
		{
			if(train[i][j]>x)
				cnt+=(fact[train[i][j]]/(fact[train[i][j]-x]*fact[x]));
			else
				if(train[i][j]==x)
					cnt++;	//cnt+=(fact[train[i][j]]/fact[x])
		}
	printf("%d\n",cnt);
	return 0;
}


/*

A daily train consists of N cars. Let's consider one particular car. It has 54 places numbered consecutively from 1 to 54, some of which are already booked and some are still free. The places are numbered in the following fashion (daily.jpg):

The car is separated into 9 compartments of 6 places each, as shown in the picture. So, the 1st compartment consists of places 1, 2, 3, 4, 53 and 54, the 2nd compartment consists of places 5, 6, 7, 8, 51 and 52, and so on.

A group of X friends wants to buy tickets for free places, all of which are in one compartment (it's much funnier to travel together). You are given the information about free and booked places in each of the N cars. Find the number of ways to sell the friends exactly X tickets in one compartment (note that the order in which the tickets are sold doesn't matter).
Input

The first line of the input contains two integers X and N (1 ≤ X ≤ 6, 1 ≤ N ≤ 10) separated by a single space. Each of the following N lines contains the information about one car which is a string of length 54 consisting of '0' and '1'. The i-th character (numbered from 1) is '0' if place i in the corresponding car is free, and is '1' if place i is already booked.

Output
Output just one integer -- the requested number of ways.

Example

Input:
1 3
100101110000001011000001111110010011110010010111000101
001010000000101111100000000000000111101010101111111010
011110011110000001010100101110001011111010001001111010

Output:
85

Input:
6 3
100101110000001011000001111110010011110010010111000101
001010000000101111100000000000000111101010101111111010
011110011110000001010100101110001011111010001001111010

Output:
1

Input:
3 2
000000000000000000000000000000000000000000000000000000
000000000000000000000000000000000000000000000000000000

Output:
360

Explanation:

In the first test case, any of the free places can be sold. In the second test case, the only free compartment in the train is compartment 3 in the first car (places 9, 10, 11, 12, 49 and 50 are all free). In the third test case, the train is still absolutely free; as there are 20 ways to sell 3 tickets in an empty compartment, the answer is 2 * 9 * 20 = 360.

*/
