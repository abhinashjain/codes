#!/usr/bin/python
# coding: utf-8

(k,a,b)=map(int,raw_input().split(' '))
awin=a/k
bwin=b/k
maxset=awin+bwin
if(maxset):
    arem=a%k
    brem=b%k
    if(arem>0 and bwin==0):
        print "-1"
    else:
        if(brem>0 and awin==0):
            print "-1"
        else:
            print maxset
else:
    print "-1"


'''

Misha and Vanya have played several table tennis sets. Each set consists of several serves, each serve is won by one of the players, he receives one point and the loser receives 
nothing. Once one of the players scores exactly k points, the score is reset and a new set begins.

Across all the sets Misha scored a points in total, and Vanya scored b points. Given this information, determine the maximum number of sets they could have played, or that the 
situation is impossible.

Note that the game consisted of several complete sets.

Input
The first line contains three space-separated integers k, a and b (1 ≤ k ≤ 10^9, 0 ≤ a, b ≤ 10^9, a + b > 0).

Output
If the situation is impossible, print a single number -1. Otherwise, print the maximum possible number of sets.

Examples
Input
11 11 5

Output
1

Input
11 2 3

Output
-1

Note
Note that the rules of the game in this problem differ from the real table tennis game, for example, the rule of "balance" (the winning player has to be at least two points ahead to 
win a set) has no power within the present problem.

'''
