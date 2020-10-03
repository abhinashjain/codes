#include "stdio.h"
#include "string.h"
#include <string>
using namespace std;

int main()
{
	int t,i,j,n,f;
	char a[40002],b[40002],d[40002];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int child[26]={0},parent[26]={0};
		scanf("%s %s",a,b);
		scanf("%d",&n);
		string c,p;
		p+=a;
		p+=b;
		for(j=0;j<n;j++)
		{
			scanf("%s",d);
			c+=d;
		}
		for(j=0;j<p.length();j++)
		{
			parent[(p[j]-97)]++;
			if(j<c.length())
			{
				child[(c[j]-97)]++;
			}
		}
		f=0;
		for(j=0;j<26;j++)
		{
			if(child[j]>parent[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

/*
In an attempt to reduce the growing population, Archer was asked to come up with a plan. Archer being as intelligent as he is, came up with the following plan:

If N children, with names C1, C2, ..., CN, are born to parents with names A and B, and you consider C to be the concatenation of all the names of the children, i.e. C = C1 + C2 + ... + CN (where + is concatenation operator), then C should be a substring of one of the permutations of A + B.

You are given the task to verify whether the names parents propose to give their children are in fact permissible by Archer's plan or not.
Input

The first line contains an integer T, the number of test cases. T test cases follow. Each test case stats with a line containing two space separated strings A and B, denoting the names of the parents. The next line contains a single integer N denoting the number of children A and B are planning to have. Following this are N lines, the i'th line containing Ci, the proposed name for the i'th child.
Output

For each test case output a single line containing "YES" if the names are permissible by Archer's plan, otherwise print "NO". (quotes are meant for clarity, please don't print them)
Constraints

    1 ≤ T ≤ 100
    1 ≤ N ≤ 1000
    The lengths of all the strings including A, B, and all Ci will be in the range [1, 40000], both inclusive. All these strings will contain only lowercase English letters.
    The combined lengths of all names of children will not exceed the combined length of the names of their parents.

Example

Input:
3
tom marvoloriddle
2
lord
voldemort
cheap up
1
heapcup
bruce wayne
2
bat
man

Output:
YES
YES
NO

Explanation:

Let Y denote the concatenation of names of all the children, and X denote the concatenation of the names of the parents.

Case 1: Here X = "tommarvoloriddle", and Y = "lordvoldemort". Consider Z = "iamlordvoldemort". It is not difficult to see that Z is a permutation of X and Y is a substring of Z. Hence Y is a substring of a permutation of X, so the answer is "YES".

Case 2: Here X = "cheapup", and Y = "heapcup". Since Y in itself is a permutation of X, and as every string is a substring of itself, Y is a substring of X and also a permutation of X. Hence "YES".

Case 3: Here X = "brucewayne", and Y = "batman". As "t" is not present in X, "t" wont be present in any permutation of X, hence the answer is "NO".
*/
