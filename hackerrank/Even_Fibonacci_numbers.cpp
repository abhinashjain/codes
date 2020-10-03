#include "stdio.h"
#include "vector"
using namespace std;

int main()
{
	int i,t;
    unsigned long long n,tot,first=1,second;
    vector<unsigned long long> vect;
    vector<unsigned long long>::iterator iter;
    vect.push_back(2);
    for(second=2;second<=40000000000000000;)
    {
        first+=second;
        if((first&1)==0)
            vect.push_back(first);
        second+=first;
        if((second&1)==0)
            vect.push_back(second);
    }
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%llu",&n);
        tot=0;
        for(iter=vect.begin();iter!=vect.end();iter++)
        {
            if((*iter)>n)
                break;
            tot+=(*iter);
        }
        printf("%llu\n",tot);
	}
	return 0;
}


/*

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1,2,3,5,8,13,21,34,55,89,...
By considering the terms in the Fibonacci sequence whose values do not exceed N, find the sum of the even-valued terms.
 
Input Format
First line contains T that denotes the number of test cases. This is followed by T lines, each containing an integer, N.
 
Output Format
Print the required answer for each test case.
 
Constraints
1<=T<=10^5
10<=N<=4×10^16

Sample Input
2
10
100

Sample Output
10
44
 
*/