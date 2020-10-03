#include "stdio.h"

int main()
{
    int i,j,n,tmp;
    scanf("%d",&n);
    int arr[n+1],val[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        val[i]=0;
    }
    tmp=n;
    for(i=1;i<=n;i++)
    {
        val[arr[i]]=1;
        if(arr[i]==tmp)
        {
            j=arr[i];
            while(j>0 && val[j])
            {
                printf("%d ",j);
                j--;
            }
            tmp=j;
            printf("\n");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}


/*

According to an old legeng, a long time ago Ankh-Morpork residents did something wrong to miss Fortune, and she cursed them. She said that at some time n snacks of distinct sizes 
will fall on the city, and the residents should build a Snacktower of them by placing snacks one on another. Of course, big snacks should be at the bottom of the tower, while small 
snacks should be at the top.

Years passed, and once different snacks started to fall onto the city, and the residents began to build the Snacktower.

                            Snacktower.png

However, they faced some troubles. Each day exactly one snack fell onto the city, but their order was strange. So, at some days the residents weren't able to put the new stack on the 
top of the Snacktower: they had to wait until all the bigger snacks fell. Of course, in order to not to anger miss Fortune again, the residents placed each snack on the top of the 
tower immediately as they could do it.

Write a program that models the behavior of Ankh-Morpork residents.

Input
The first line contains single integer n (1 ≤ n ≤ 100000) — the total number of snacks.

The second line contains n integers, the i-th of them equals the size of the snack which fell on the i-th day. Sizes are distinct integers from 1 to n.

Output
Print n lines. On the i-th of them print the sizes of the snacks which the residents placed on the top of the Snacktower on the i-th day in the order they will do that. If no snack 
is placed on some day, leave the corresponding line empty.

Examples
Input
3
3 1 2

Output
3

2 1

Input
5
4 5 1 2 3

Output

5 4


3 2 1

Note
In the example a snack of size 3 fell on the first day, and the residents immediately placed it. On the second day a snack of size 1 fell, and the residents weren't able to place it 
because they were missing the snack of size 2. On the third day a snack of size 2 fell, and the residents immediately placed it. Right after that they placed the snack of size 1 
which had fallen before.

*/
