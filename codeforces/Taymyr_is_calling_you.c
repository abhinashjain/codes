#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n,m,z,i,cnt=0;
    scanf("%d %d %d",&n,&m,&z);
    int* arr=(int*)calloc(z+1, sizeof(int));
    for(i=m;i<=z;i+=m)
        arr[i]=1;
    for(i=n;i<=z;i+=n)
    {
        if(arr[i])
            cnt++;
    }
    printf("%d",cnt);
	return 0;
}


/*

Comrade Dujikov is busy choosing artists for Timofey's birthday and is recieving calls from Taymyr from Ilia-alpinist.
 
Ilia-alpinist calls every n minutes, i.e. in minutes n, 2n, 3n and so on. Artists come to the comrade every m minutes, i.e. in minutes m, 2m, 3m and so on. The day is z minutes long, 
i.e. the day consists of minutes 1, 2, ..., z. How many artists should be killed so that there are no artists in the room when Ilia calls? Consider that a call and a talk with an 
artist take exactly one minute.
 
Input
The only string contains three integers — n, m and z (1 ≤ n, m, z ≤ 10^4).

Output
Print single integer — the minimum number of artists that should be killed so that there are no artists in the room when Ilia calls.

Examples
Input
1 1 10
 
Output
10
 
Input
1 2 5
 
Output
2
 
Input
2 3 9
 
Output
1
 
Note
Taymyr is a place in the north of Russia.
In the first test the artists come each minute, as well as the calls, so we need to kill all of them.
In the second test we need to kill artists which come on the second and the fourth minutes.
In the third test — only the artist which comes on the sixth minute.

*/
