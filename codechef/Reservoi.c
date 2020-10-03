#include "stdio.h"

int main()
{
	int t,n,m,i,j,k,ans;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&m);
        char arr[m];
        char reservoir[n+2][m+2];
        for(k=0;k<(m+2);k++)
        {
            reservoir[0][k]='Z';
            reservoir[n+1][k]='Z';
        }
        for(j=0;j<(n+2);j++)
        {
            reservoir[j][0]='Z';
            reservoir[j][n+1]='Z';
        }
        for(j=1;j<=n;j++)
        {
            scanf("%s",arr);
            for(k=1;k<=m;k++)
            {
                reservoir[j][k]=arr[k-1];
            }
        }
        ans=1;
        for(j=1;j<=n;j++)
        {
            for(k=1;k<=m;k++)
            {
                if(reservoir[j][k]=='B')
                {
                    if(reservoir[j+1][k]=='A' || reservoir[j+1][k]=='W')
                    {
                        ans=0;
                        break;
                    }
                }
                if(reservoir[j][k]=='W')
                {
                    if(j==n || reservoir[j][k-1]=='Z' || reservoir[j][k+1]=='Z' || reservoir[j+1][k]=='A' || reservoir[j][k-1]=='A' || reservoir[j][k+1]=='A')
                    {
                        ans=0;
                        break;
                    }
                }
            }
        }
        if(ans)
            printf("yes\n");
        else
            printf("no\n");
	}
	return 0;
}


/*

You are given a structure of a water reservoir. The reservoir is a 2 dimensional structure of height N and width M. It can be thought of divided into M vertical sections, each of
equal width. The reservoir height is of N blocks. Each block of the reservoir can contain either water, brick or air. We will denote the water by character 'W', brick by 'B' and air
by 'A'.
 
You are given representation of reservoir at a fixed instant. Can you tell whether the current state of reservoir is stable, i.e. it will remain on the same state forever or not?
 
For example, let the reservoir be
 
WW
BB
This is not stable, as the water in the block (1, 1) can overflow to the left, similarly water in block (1, 2) can overflow to the right too.
 
BWB
BBB
This is stable, as the water at block (1, 2) is entrapped between bricks from all sides.
 
AWA
BBB
This is not stable, as the water at block (1, 2) might overflow to the left or the right.
 
BAA
ABB
This is not stable, as there is a brick at block (1, 1) and air at (2, 1). The brick will go down and air will come up, so its not stable too.
 
BWAAB
BWBWB
BBBBB
This is not stable too, as there is water at block (1, 2) and air at (1, 3), and (1, 4). The water will move towards those blocks.
 
BBB
BAB
BBB
This is not stable too, as there is air at block (2, 2). So brick at (1, 2) will fill the gap made by air.

Now, you are given description of reservoir. Can you tell whether the current state of reservoir is stable or not?
 
Input
The first line of input contains an integer T denoting number of test cases. Description of T test cases follows.
The first line of each test case, contains two integers N and M denoting the height and width of reservoir, respectively.
Each of the next N lines a string of length M. The j-th character in the i-th of the line denotes content at block (i, j). The characters can be 'B' denoting brick, 'A' denoting air, 
'W' denoting water.
 
Output
For each test case, output a line containing "yes" or "no" (without quotes) corresponding to the situation whether the reservoir is stable or not?

Constraints
1 ≤ T ≤ 50
1 ≤ N, M ≤ 1000
 
Subtask #1: (15 points)
There is no water in the reservoir.
 
Subtask #2: (25 points)
1 ≤ N, M ≤ 100
 
Subtask #3: (60 points)
original constraints
 
Example
Input:
6
2 2
WW
BB
2 3
BWB
BBB
2 3
AWA
BBB
2 3
BAA
ABB
3 5
BWAAB
BWBWB
BBBBB
3 3
BBB
BAB
BBB
 
Output:
no
yes
no
no
no
no
 
Explanation
All the examples are explained in the problem statement itself.

*/
