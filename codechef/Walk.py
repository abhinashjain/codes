#!/usr/bin/python
# coding: utf-8

t=int(raw_input())
for i in xrange(t):
	n=int(raw_input())
	w=raw_input()
	arr=map(int,w.split(' '))
	cnt=0
	for item in reversed(arr):
		if(item>cnt):
			cnt=item
		else:
			cnt+=1
	print cnt
	

'''

Chef and his girlfriend are going to have a promenade. They are walking along the straight road which consists of segments placed one by one. Before walking Chef and his girlfriend stay at the beginning of the first segment, they want to achieve the end of the last segment.

There are few problems:

1.    At the beginning Chef should choose constant integer - the velocity of mooving. It can't be changed inside one segment.
2.    The velocity should be decreased by at least 1 after achieving the end of some segment.
3.    There is exactly one shop on each segment. Each shop has an attractiveness. If it's attractiveness is W and Chef and his girlfriend move with velocity V then if V < W girlfriend will run away into the shop and the promenade will become ruined.

Chef doesn't want to lose her girl in such a way, but he is an old one, so you should find the minimal possible velocity at the first segment to satisfy all conditions.

 
Input
    The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
    The first line of each test case contains a single integer N denoting the number of segments. The second line contains N space-separated integers W1, W2, ..., WN denoting the attractiveness of shops.

 
Output
    For each test case, output a single line containing the minimal possible velocity at the beginning.

 
Constraints
    1 ≤ T ≤ 10
    1 ≤ N ≤ 10^5
    1 ≤ Wi ≤ 10^6

 
Example
Input:
2
5
6 5 4 3 2
5
3 4 3 1 1

Output:
6
5

 
Explanation
Example case 1.
If we choose velocity 6, on the first step we have 6 >= 6 everything is OK, then we should decrease the velocity to 5 and on the 2nd segment we'll receive 5 >= 5, again OK, and so on.

Example case 2.
If we choose velocity 4, the promanade will be ruined on the 2nd step (we sould decrease our velocity, so the maximal possible will be 3 which is less than 4).

'''
