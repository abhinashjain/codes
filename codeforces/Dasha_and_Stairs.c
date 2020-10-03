#include "stdio.h"

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0 && b==0)
        printf("NO");
    else
        if(a==b || (a+1)==b || a==(b+1))
            printf("YES");
        else
            printf("NO");
	return 0;
}


/*

On her way to programming school tiger Dasha faced her first test — a huge staircase!
            Dasha_and_Stairs.png
 
The steps were numbered from one to infinity. As we know, tigers are very fond of all striped things, it is possible that it has something to do with their color. So on some interval 
of her way she calculated two values — the number of steps with even and odd numbers.
 
You need to check whether there is an interval of steps from the l-th to the r-th (1 ≤ l ≤ r), for which values that Dasha has found are correct.
 
Input
In the only line you are given two integers a, b (0 ≤ a, b ≤ 100) — the number of even and odd steps, accordingly.
 
Output
In the only line print "YES", if the interval of steps described above exists, and "NO" otherwise.
 
Examples
Input
2 3
 
Output
YES
 
Input
3 1
 
Output
NO
 
Note
In the first example one of suitable intervals is from 1 to 5. The interval contains two even steps — 2 and 4, and three odd: 1, 3 and 5.

*/