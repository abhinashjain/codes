#include "stdio.h"

int main()
{
    int n,i,j,tmp,ind;
    scanf("%d",&n);
    int arr[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=n/2;
    for(i=1;i<=j;i++)
    {
        if(i&1)
        {
            ind=n-i+1;
            tmp=arr[i];
            arr[i]=arr[ind];
            arr[ind]=tmp;
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
	return 0;
}


/*

Young Timofey has a birthday today! He got kit of n cubes as a birthday present from his parents. Every cube has a number ai, which is written on it. Timofey put all the cubes in a 
row and went to unpack other presents.

In this time, Timofey's elder brother, Dima reordered the cubes using the following rule. Suppose the cubes are numbered from 1 to n in their order. Dima performs several steps, on 
step i he reverses the segment of cubes from i-th to (n - i + 1)-th. He does this while i ≤ n - i + 1.

After performing the operations Dima went away, being very proud of himself. When Timofey returned to his cubes, he understood that their order was changed. Help Timofey as fast as 
you can and save the holiday — restore the initial order of the cubes using information of their current location.

Input
The first line contains single integer n (1 ≤ n ≤ 2*10^5) — the number of cubes.
The second line contains n integers a1, a2, ..., an ( - 10^9 ≤ ai ≤ 10^9), where ai is the number written on the i-th cube after Dima has changed their order.

Output
Print n integers, separated by spaces — the numbers written on the cubes in their initial order.
It can be shown that the answer is unique.

Examples
Input
7
4 3 7 6 9 1 2
 
Output
2 3 9 6 7 1 4

Input
8
6 1 4 2 5 6 9 2

Output
2 1 6 2 5 4 9 6
 
Note
Consider the first sample.
1. At the begining row was [2, 3, 9, 6, 7, 1, 4].
2. After first operation row was [4, 1, 7, 6, 9, 3, 2].
3. After second operation row was [4, 3, 9, 6, 7, 1, 2].
4. After third operation row was [4, 3, 7, 6, 9, 1, 2].
5. At fourth operation we reverse just middle element, so nothing has changed. The final row is [4, 3, 7, 6, 9, 1, 2]. So the answer for this case is row [2, 3, 9, 6, 7, 1, 4].

*/
