#include "stdio.h"
#include "string.h"

int main() 
{
	int t,i,j,c;
	char s[10002];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		c=0;
		int a[26]={0},b[26]={0};
		scanf("%s",s);
		if(strlen(s)%2==1)
			printf("-1\n");
		else
		{
			for(j=0;j<strlen(s)/2;j++)
				a[s[j]-97]++;
			for(j=strlen(s)/2;j<strlen(s);j++)
				b[s[j]-97]++;
			for(j=0;j<26;j++)
				if(b[j]-a[j]>0)
					c+=b[j]-a[j];
			printf("%d\n",c);
		}
	}
	return 0;
}


/*

Sid is obsessed about reading short stories. Being a CS student, he is doing some interesting frequency analysis with the books. From two short story books, he choses strings having length a from the first and strings having length b from the second one. The strings are such that the difference of length is <= 1

i.e.

|a-b|<=1, where |x| represents a modulus function.

He believes that both the strings should be anagrams based on his experiment. Your challenge is to help him find the minimum number of characters of the first string he needs to change to make it an anagram of the second string. Neither can he add a character nor delete a character from the first string. Only replacement of the characters with new ones is allowed.

Input Format

First line will contain an integer T representing the number of test cases Each test case will contain a string having length (a+b) which will be concatenation of both the strings described in problem. The string will only contain small letters and without any spaces.

Output Format

An integer corresponding to each test case is printed in a different line i.e., the number of changes required for each test case. Print ‘-1’ if it is not possible.

Constraints

1<=T<=100
length of input string i.e. 1<=a+b<=10000

Sample Input

5
aaabbb
ab
abc
mnop
xyyx

Sample Output

3
1
-1
2
0 

Explanation

In fifth test case, first string will be “xy” while second string will be “yx” . so a = 2 and b = 2, where a and b are length of strings. As we can see that a and b are following relation

|a-b|<=1

and both strings are anagrams.So number of changes required = 0.

*/
