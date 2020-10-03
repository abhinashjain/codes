#!/usr/bin/python
# coding: utf-8

(n,k)=map(int,raw_input().split(' '))
arr=map(int,raw_input().split(' '))
arr.sort()
cnt=0
for i in xrange(1,n):
    tmp=arr[i]-arr[0]
    if((tmp%k)!=0):
        cnt=-1
        break
    cnt+=(tmp/k)
print cnt


'''

Oleg the bank client checks share prices every day. There are n share prices he is interested in. Today he observed that each second exactly one of these prices decreases by k rubles 
(note that each second exactly one price changes, but at different seconds different prices can change). Prices can become negative. Oleg found this process interesting, and he asked 
Igor the financial analyst, what is the minimum time needed for all n prices to become equal, or it is impossible at all? Igor is busy right now, so he asked you to help Oleg. Can 
you answer this question?

Input
The first line contains two integers n and k (1 ≤ n ≤ 10^5, 1 ≤ k ≤ 10^9) — the number of share prices, and the amount of rubles some price decreases each second.
The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 10^9) — the initial prices.

Output
Print the only line containing the minimum number of seconds needed for prices to become equal, of «-1» if it is impossible.

Examples
Input
3 3
12 9 15

Output
3

Input
2 2
10 9

Output
-1

Input
4 1
1 1000000000 1000000000 1000000000

Output
2999999997

Note
Consider the first example.

Suppose the third price decreases in the first second and become equal 12 rubles, then the first price decreases and becomes equal 9 rubles, and in the third second the third price 
decreases again and becomes equal 9 rubles. In this case all prices become equal 9 rubles in 3 seconds.

There could be other possibilities, but this minimizes the time needed for all prices to become equal. Thus the answer is 3.

In the second example we can notice that parity of first and second price is different and never changes within described process. Thus prices never can become equal.

In the third example following scenario can take place: firstly, the second price drops, then the third price, and then fourth price. It happens 999999999 times, and, since in one 
second only one price can drop, the whole process takes 999999999 * 3 = 2999999997 seconds. We can note that this is the minimum possible time.

'''
