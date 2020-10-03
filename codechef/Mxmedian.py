#!/usr/bin/python
# coding: utf-8

t=int(raw_input())
for i in xrange(t):
    n=int(raw_input())
    arr=map(int,raw_input().split(' '))
    arr.sort()
    length=2*n
    b=[]
    for j in xrange(n,length):
        b.append(arr[j])
    print b[n/2]
    for j in xrange(n):
        print arr[j], arr[n+j],


'''

You are given an array A of size 2 * N consisting of positive integers, where N is an odd number. You can construct an array B from A as follows, B[i] = max(A[2 * i - 1], A[2 * i]), 
i.e. B array contains the maximum of adjacent pairs of array A. Assume that we use 1-based indexing throughout the problem.

You want to maximize the median of the array B. For achieving that, you are allowed to permute the entries of A. 
Find out the maximum median of corresponding B array that you can get. Also, find out any permutation for which this maximum is achieved.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer N.
The second line of each test case contains 2 * N space separated integers denoting array A.

Output
For each test case, output two lines.
The first of which should contain an integer corresponding to maximum value of the median of array B that you can get.
In the second line, print 2 * N integers in a single line denoting any permutation of A for which the maximum value of median of array B is achieved.

Constraints
1 ≤ T ≤ 10
1 ≤ N ≤ 50000
1 ≤ Ai ≤ 2 * N

Subtasks
Subtask #1 (25 points) : 1 ≤ N ≤ 3
Subtask #2 (75 points) : original constraints

Example
Input:
3
1
1 2
3
1 2 3 4 5 6
3
1 3 3 3 2 2

Output:
2
1 2
5
1 3 2 5 4 6
3
1 3 3 3 2 2

Explanation
Example case 1. There are only two possible permutations of A, for both of those B will be 2. The median of B is 2.

Example case 2. For following permutation of A: 1 3 2 5 4 6, the corresponding B will be: 3 5 6, whose median is 5, which is the maximum that you can achieve.

Example case 3. For A: 1 3 3 3 2 2, the corresponding B will be: 3, 3, 2. Its median is 3, which is maximum that you can achieve.

'''
