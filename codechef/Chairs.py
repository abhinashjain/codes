#!/usr/bin/python
# coding: utf-8

t=int(raw_input())
for i in xrange(t):
    n=int(raw_input())
    arr=raw_input()
    ones=[]
    length=zero=0
    for j in xrange(n):
        if(arr[j]=='1'):
            length+=1
            ones.append(j)
        else:
            zero+=1
    max=ones[0]+n-(ones[length-1]+1)
    for j in xrange(1,length):
        tmp=ones[j]-(ones[j-1]+1)
        if(tmp>max):
            max=tmp
    print zero-max


'''

There are N chairs placed in circular order. Some of the chairs are empty while others have a child sitting in it. You are required to change the places of the children so that all 
the children sit next to each other (i.e. they form a connected segment). You can do that by doing the following operation a number of times:

Choose a child and tell him to walk around the circle in clockwise order or anti-clockwise order until he finds the first empty chair, and tell him to sit there.
What is the minimum number of operations required to make all children sit next to each other?

Input
The first line contains T, the number of test-cases.
The first line of each test-case contains N, the number of chairs.
The second line of each test-case contains a binary string of length N. If the i-th character is 1 then the i-th chair has a child initially. Otherwise (i.e. the i-th character is 0) 
it's empty.

Output
For each test case, output a single line containing a single integer donating minimum number of operations needed.

Constraints
1 ≤ T ≤ 5,000
1 ≤ sum of N in all test-cases ≤ 10^6
at least one chair will be occupied

Example
Input:
1
8
10001010

Output:
2

Explanation
The initial configuration is:

    1
  0   0
1       0
  0   0
    1

We can tell the child who is boldened to move counter-clockwise, and the new configuration will be:

    0
  1   0
1       0
  0   0
    1

because he has moved to the first empty chair on his way.
Now, we again tell him to move counter-clockwise, and now the new configuration will be:

    0
  0   0
1       0
  1   0
    1

because he moved counter-clockwise, found an occupied chair, and hence kept moving. The next chair was vacant, and he sat down there.
Note that, in this example, we moved the same child twice, but this need not be the case. We can move different children in different moves.
You can check that this is the best we can do, and 2 is the minimum.

'''
