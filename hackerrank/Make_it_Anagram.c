#include "stdio.h"
#include "string.h"

int main()
{
	int i,cnt=0;
	int str[26]={0};
	char a[10002],b[10002];
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<strlen(a);i++)
	{
		str[(a[i]-97)]++;
	}
	for(i=0;i<strlen(b);i++)
	{
		str[(b[i]-97)]--;
	}
	for(i=0;i<26;i++)
		cnt+=abs(str[i]);
	printf("%d\n",cnt);
	return 0;
}

/*

Alice recently started learning about cryptography and found that anagrams are very useful. Two strings are anagrams of each other if they have same character set. For example strings "bacdc" and "dcbac" are anagrams, while strings "bacdc" and "dcbad" are not.

Alice decides on an encryption scheme involving 2 large strings where encryption is dependent on the minimum number of character deletions required to make the two strings anagrams. She need your help in finding out this number.

Given two strings (they can be of same or different length) help her in finding out the minimum number of character deletions required to make two strings anagrams. Any characters can be deleted from any of the strings.

Input Format
Two lines each containing a string.

Constraints
1 <= Length of A,B <= 10000
A and B will only consist of lowercase latin letter.

Output Format
A single integer which is the number of character deletions.

Sample Input #00:
cde
abc

Sample Output #00:
4

Explanation #00:
We need to delete 4 characters to make both strings anagram i.e. ‘d’ and ‘e’ from first string and ‘b’ and ‘a’ from second string. 

*/
