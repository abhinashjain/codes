#include "stdio.h"
#include "string.h"

int main()
{
	int n,i,j,k,l,len1,len2,row,col;
    char key[8],cipher[256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%s",key);
        fgets(cipher, 256, stdin);
        fgets(cipher, 256, stdin);
        len1=strlen(key);
        len2=strlen(cipher);

        for(j=0;j<len1;j++)
        {
            for(k=j+1;k<len1;k++)
            {
                if(key[j]==key[k])
                {
                    for(l=k;l<(len1-1);l++)
                    {
                        key[l]=key[l+1];
                    }
                    key[len1-1]='\0';
                }
            }
        }

        col=strlen(key);
        row=26/col;
        if((26%col) != 0)
            row++;

        char matrix[row][col], atoz='A';
        int alpha[26]={0},ind=0;
        for(j=0;j<row;j++)
            for(k=0;k<col;k++)
                matrix[j][k]=0;

        for(j=0;j<col;j++)
        {
            matrix[0][j]=key[j];
            alpha[key[j]-'A']=1;
        }
        for(j=1;j<row;j++)
        {
            k=0;
            while(k != col && atoz <= 'Z')
            {
                if(alpha[atoz-'A']==0)
                {
                    matrix[j][k]=atoz;
                    k++;
                }
                atoz++;
            }
        }
        
        char mapping[26];
        for(atoz='A';atoz<='Z';atoz++)
        {
            for(j=0;j<col;j++)
            {
                if(key[j]==atoz)
                {
                    for(k=0;k<row;k++)
                    {
                        if(matrix[k][j]!=0)
                        {
                            mapping[ind]=matrix[k][j];
                            ind++;
                        }
                    }
                }
            }
        }
        for(j=0;j<len2;j++)
        {
            if(cipher[j]==' ')
                printf(" ");
            else
            {
                for(k=0;k<26;k++)
                {
                    if(cipher[j]==mapping[k])
                    {
                        printf("%c",k+'A');
                    }
                }
            }
        }
        printf("\n");
	}
	return 0;
}



/*
 
A keyword transposition cipher is a method of choosing a monoalphabetic substitution to encode a message. The substitution alphabet is determined by choosing a keyword, arranging the
remaining letters of the alphabet in columns below the letters of the keyword, and then reading back the columns in the alphabetical order of the letters of the keyword.
 
For instance, if one chose the keyword SECRET, the columns generated would look like the following diagram. Note how the letters in the keyword are skipped when laying out the columns,
and duplicate letters are removed from the keyword:
 
SECRT
ABDFG
HIJKL
MNOPQ
UVWXY
Z
 
Since the alphabetical order of the characters in the keyword is CERST, the columns are then read back in that order to get the substitution alphabet.
 
Original:     ABCDE FGHIJ KLMNO PQRSTU VWXYZ
Substitution: CDJOW EBINV RFKPX SAHMUZ TGLQY
 
Task
Given a piece of ciphertext and the keyword used to encipher it, write an algorithm to output the original message with the keyword transposition cipher described above.
 
Input Format
The first line of input will be an integer N (1 <= N <= 10) indicating the number of test cases to follow.
For each test case in N, two additional lines will follow, one containing the keyword, and one containing the ciphertext, respectively.
The keyword will be, at most, 7 characters long, and the ciphertext will be, at most, 255 characters in length (all uppercase).
 
Output Format
Output the decoded version of the ciphertext for each test case, one per line.
 
Sample Input
2
SPORT
LDXTW KXDTL NBSFX BFOII LNBHG ODDWN BWK
SECRET
JHQSU XFXBQ
 
Sample Output
ILOVE SOLVI NGPRO GRAMM INGCH ALLEN GES
CRYPT OLOGY
 
*/