#!/usr/bin/python
# coding: utf-8

(p,x,y)=map(int,raw_input().split(' '))
success=-1
flag=0
add=-100
while(flag==0):
    add+=100
    success+=1
    tmp=x+add
    while(flag==0 and tmp>=y):
        i=(tmp/50)%475
        for j in xrange(25):
            i=(i*96+42)%475
            win=i+26
            if(win==p):
                flag=1
                break
        tmp-=50
print success


'''

Not so long ago the Codecraft-17 contest was held on Codeforces. The top 25 participants, and additionally random 25 participants out of those who got into top 500, will receive a 
Codeforces T-shirt.

Unfortunately, you didn't manage to get into top 25, but you got into top 500, taking place p.

Now the elimination round of 8VC Venture Cup 2017 is being held. It has been announced that the Codecraft-17 T-shirt winners will be chosen as follows. Let s be the number of points 
of the winner of the elimination round of 8VC Venture Cup 2017. Then the following pseudocode will be executed:


i := (s div 50) mod 475
repeat 25 times:
    i := (i * 96 + 42) mod 475
    print (26 + i)

Here "div" is the integer division operator, "mod" is the modulo (the remainder of division) operator.

As the result of pseudocode execution, 25 integers between 26 and 500, inclusive, will be printed. These will be the numbers of places of the participants who get the Codecraft-17 T-
shirts. It is guaranteed that the 25 printed integers will be pairwise distinct for any value of s.

You're in the lead of the elimination round of 8VC Venture Cup 2017, having x points. You believe that having at least y points in the current round will be enough for victory.

To change your final score, you can make any number of successful and unsuccessful hacks. A successful hack brings you 100 points, an unsuccessful one takes 50 points from you. It's 
difficult to do successful hacks, though.

You want to win the current round and, at the same time, ensure getting a Codecraft-17 T-shirt. What is the smallest number of successful hacks you have to do to achieve that?

Input
The only line contains three integers p, x and y (26 ≤ p ≤ 500; 1 ≤ y ≤ x ≤ 20000) — your place in Codecraft-17, your current score in the elimination round of 8VC Venture Cup 2017, 
and the smallest number of points you consider sufficient for winning the current round.

Output
Output a single integer — the smallest number of successful hacks you have to do in order to both win the elimination round of 8VC Venture Cup 2017 and ensure getting a Codecraft-17 
T-shirt.

It's guaranteed that your goal is achievable for any valid input data.

Examples
Input
239 10880 9889

Output
0

Input
26 7258 6123

Output
2

Input
493 8000 8000

Output
24

Input
101 6800 6500

Output
0

Input
329 19913 19900

Output
8

Note

In the first example, there is no need to do any hacks since 10880 points already bring the T-shirt to the 239-th place of Codecraft-17 (that is, you). In this case, according to the 
pseudocode, the T-shirts will be given to the participants at the following places:

475 422 84 411 453 210 157 294 146 188 420 367 29 356 398 155 102 239 91 133 365 312 449 301 343

In the second example, you have to do two successful and one unsuccessful hack to make your score equal to 7408.

In the third example, you need to do as many as 24 successful hacks to make your score equal to 10400.

In the fourth example, it's sufficient to do 6 unsuccessful hacks (and no successful ones) to make your score equal to 6500, which is just enough for winning the current round and 
also getting the T-shirt.

'''
