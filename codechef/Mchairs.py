#!/usr/bin/python
# coding: utf-8

t=int(raw_input())
for i in range(t):
	n=int(raw_input())
	p=1
	q=2
	while(n>0):
		if(n&1): #if(n%2==1)
			p=(p*q)%1000000007
		q=(q*q)%1000000007
		n/=2
	print p-1




'''

A new school in Byteland is now in the process of renewing some classrooms with new, stronger and better chairs, so that the students can stay still and pay attention to class :)

However, due to budget and logistic reasons, it's only possible to carry a chair at a time to the classroom, which means that for a long time, many students will be up, waiting for their chair to arrive.

The teacher, however, as she is very clever, decided to challenge her students with a problem: "Imagine that there are N students in the classroom and that there are only K chairs. In how many ways, can I choose K elements from the class to sit down, if I see them as being distinct?"

Lira replied immediately with the right answer, so, the teacher decided to make the game a little funnier: "Okay Lira, as you are so fast, now I want you to tell me exactly the same thing, but, with the addition that the value of K is changing, this is, I want you to tell me the sum of the number of ways I can sit down K of you, if the value of K goes from 1 (meaning that there are no chairs in the classroom but one) to N (meaning that all of your chairs arrived). Can you be as fast now? As the answer might get large I want you to tell me the result modulo 1000000007. (10^9 + 7)"

As you might have noticed, it's time for you to help Lira solving this variant of the problem. :D
Input

The first line of the input file contains an integer T, denoting the number of test cases on the input file.

Afterwards, T lines follow, each containing an integer N, the number of students that the teacher will try to sit down as the number of chairs goes from 1 to N.
Output

For each test case, you should output an integer, denoting the sum of the number of ways the teacher can make N students sit down on K chairs, as K goes from 1 to N, modulo 10^9 + 7.
Constraints

    1 ≤ T ≤ 100
    1 ≤ N ≤ 100000000

 
Example
Input:
2
1
2

Output:
1
3

'''
