#!/usr/bin/python
# coding: utf-8

(n,t,k,d)=map(int,raw_input().split(' '))
ans=(n/k)
if((n%k)!=0):
    ans+=1
ans=ans*t
if(ans > (d+t)):
    print "YES"
else:
    print "NO"


'''

In some game by Playrix it takes t minutes for an oven to bake k carrot cakes, all cakes are ready at the same moment t minutes after they started baking. Arkady needs at least n 
cakes to complete a task, but he currently don't have any. However, he has infinitely many ingredients and one oven. Moreover, Arkady can build one more similar oven to make the 
process faster, it would take d minutes to build the oven. While the new oven is being built, only old one can bake cakes, after the new oven is built, both ovens bake simultaneously
. Arkady can't build more than one oven.

Determine if it is reasonable to build the second oven, i.e. will it decrease the minimum time needed to get n cakes or not. If the time needed with the second oven is the same as 
with one oven, then it is unreasonable.

Input
The only line contains four integers n, t, k, d (1 ≤ n, t, k, d ≤ 1000) — the number of cakes needed, the time needed for one oven to bake k cakes, the number of cakes baked at the
same time, the time needed to build the second oven.

Output
If it is reasonable to build the second oven, print "YES". Otherwise print "NO".

Examples
Input
8 6 4 5

Output
YES

Input
8 6 4 6

Output
NO

Input
10 3 11 4

Output
NO

Input
4 2 1 4

Output
YES

Note
In the first example it is possible to get 8 cakes in 12 minutes using one oven. The second oven can be built in 5 minutes, so after 6 minutes the first oven bakes 4 cakes, the 
second oven bakes 4 more ovens after 11 minutes. Thus, it is reasonable to build the second oven.

In the second example it doesn't matter whether we build the second oven or not, thus it takes 12 minutes to bake 8 cakes in both cases. Thus, it is unreasonable to build the second 
oven.

In the third example the first oven bakes 11 cakes in 3 minutes, that is more than needed 10. It is unreasonable to build the second oven, because its building takes more time that 
baking the needed number of cakes using the only oven.

'''