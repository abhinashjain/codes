#include "stdio.h"
#include "vector"
using namespace std;

int main()
{
	int t,n,i,j,k,u,v,ind,max,big,bigbutone;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
        scanf("%d",&n);
        int p[n+1],arr[n+1];
        max=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&p[j]);
            arr[j]=p[j];
            if(p[j]>max)
            {
                max=p[j];
                big=j;
            }
        }
        max=0;
        for(j=1;j<=n;j++)
        {
            if(p[j]>max && j!=big)
            {
                max=p[j];
                bigbutone=j;
            }
        }
        vector<int> vect[50001];
        vector<int>::iterator iter;
        for(j=1;j<n;j++)
        {
            scanf("%d %d",&v,&u);
            vect[v].push_back(u);
            vect[u].push_back(v);
        }
        for(j=1;j<=n;j++)
        {
            arr[j]=0;
            for(iter=vect[j].begin();iter!=vect[j].end();iter++)
            {
                arr[*iter]=0;
            }
            if(arr[big]!=0)
            {
                ind=big;
            }
            else
            {
                if(arr[bigbutone]!=0)
                {
                    ind=bigbutone;
                }
                else
                {
                    max=0;
                    for(k=1;k<=n;k++)
                    {
                        if(arr[k]>max)
                        {
                            max=arr[k];
                            ind=k;
                        }
                    }
                }
            }
            printf("%d ",ind);
            arr[j]=p[j];
            for(iter=vect[j].begin();iter!=vect[j].end();iter++)
            {
                arr[*iter]=p[*iter];
            }

        }
        printf("\n");
	}
	return 0;
}


/*

Chef is playing a video game. In a video game, there's a advanced civilization that has a total of N planets under control. All of those planets are connected with N-1 teleports in 
such a way, that it's possible to travel between any two planets using those teleports.
 
There's a chance that some planet gets infected. In this case it takes 24 hours for civilization to find out infection and prevent it from spreading. During this time infection uses 
teleport one time and infect all the planets that can be achieved in one teleport jump. So, once infection is detected at planet V, scientists already know that all planets connected 
to V via teleport are also infected. All the neccessary teleports are disabled right away and medics start working on eliminating the infection.
 
Each planet has population. Planets are numbered from 1 to N and their populations are P1, P2, ..., PN. It is known that all the Pi are distinct.
 
There's a capital among all those planets. The capital is known to have the biggest population.
 
Once infection is detected at planet V, after disabling teleports on planet V and all connected to them, government has to establish a new capital if needed in the remaining not-
infected planets. So, they list all the planets that are not connected to V and are not V. Then they pick the planet with biggest population. Your task is to find the number of this 
planet for every possible V.
 
Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains one integer N.
Next line contains N space-separated integers P1, P2, ..., PN denoting the population of each planet.
Next N-1 lines contain two space-separated integers each V and U denoting that there's a teleport between planet V and U.
 
Output
For each test case, output a single line containing N integers A1, A2, ..., AN separated by a space. Here Ai denotes the number of the planet picked to be new capital in case 
infection starts spreading from the planet i. In case infection affects all the planets output 0.
 
Constraints
1 ≤ T ≤ 5
1 ≤ N ≤ 50000
1 ≤ Pi ≤ 10^9
All Pi are distinct
1 ≤ V ≤ N
1 ≤ U ≤ N
 
Subtasks
Subtask #1 (20 points): N ≤ 100
Subtask #2 (30 points): N ≤ 10000
Subtask #3 (50 points): No additional constraints
 
Example
Input:
1
6
5 10 15 20 25 30
1 3
2 3
3 4
4 5
4 6
 
Output:
6 6 6 2 6 5

*/
