#include "stdio.h"

int main()
{
    int n,i;
    char arr[9];
    scanf("%d",&n);
    scanf("%s",arr);
    for(i=0;i<n;i++)
        scanf("%s",arr);
    if(n&1)
        printf("contest\n");
    else
        printf("home\n");
	return 0;
}


/*

There are literally dozens of snooker competitions held each year, and team Jinotega tries to attend them all (for some reason they prefer name "snookah")! When a competition takes 
place somewhere far from their hometown, Ivan, Artsem and Konstantin take a flight to the contest and back.

Jinotega's best friends, team Base have found a list of their itinerary receipts with information about departure and arrival airports. Now they wonder, where is Jinotega now: at 
home or at some competition far away? They know that:

1. this list contains all Jinotega's flights in this year (in arbitrary order),
2. Jinotega has only flown from his hometown to a snooker contest and back,
3. after each competition Jinotega flies back home (though they may attend a competition in one place several times),
4. and finally, at the beginning of the year Jinotega was at home.

Please help them to determine Jinotega's location!

Input

In the first line of input there is a single integer n: the number of Jinotega's flights (1 ≤ n ≤ 100). In the second line there is a string of 3 capital Latin letters: the name of 
Jinotega's home airport. In the next n lines there is flight information, one flight per line, in form "XXX->YYY", where "XXX" is the name of departure airport "YYY" is the name of
arrival airport. Exactly one of these airports is Jinotega's home airport.

It is guaranteed that flights information is consistent with the knowledge of Jinotega's friends, which is described in the main part of the statement.

Output
If Jinotega is now at home, print "home" (without quotes), otherwise print "contest".

Examples
Input
4
SVO
SVO->CDG
LHR->SVO
SVO->LHR
CDG->SVO

Output
home

Input
3
SVO
SVO->HKT
HKT->SVO
SVO->RAP

Output
contest

Note
In the first sample Jinotega might first fly from SVO to CDG and back, and then from SVO to LHR and back, so now they should be at home. In the second sample Jinotega must now be at 
RAP because a flight from RAP back to SVO is not on the list.

*/
