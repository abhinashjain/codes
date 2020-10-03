//nlogn
#include "stdio.h"
#include "string.h"
#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])
using namespace std; 

// Binary search (note boundaries in the caller)
// A[] is ceilIndex in the caller
int CeilIndex(int A[], int l, int r, int key)
{
	int m;
	while((r - l) > 1)
	{
		m = l + (r - l)/2;
		(A[m] >= key ? r : l) = m; // ternary expression returns an l-value
	}
	return r;
}
 
int LongestIncreasingSubsequenceLength(int A[], int size)
{
	// Add boundary case, when array size is one
	int *tailTable   = new int[size];
	int len; // always points empty slot
 
	memset(tailTable, 0, sizeof(tailTable[0])*size);
 
	tailTable[0] = A[0];
	len = 1;
	for( int i = 1; i < size; i++ )
	{
		if( A[i] < tailTable[0] )
			tailTable[0] = A[i];	// new smallest value
		else 
			if( A[i] > tailTable[len-1] )
				tailTable[len++] = A[i];	// A[i] wants to extend largest subsequence
			else
				tailTable[CeilIndex(tailTable, -1, len-1, A[i])] = A[i];
				// A[i] wants to be current end candidate of an existing subsequence
				// It will replace ceil value in tailTable
	}
	delete[] tailTable;
	return len;
}
 
int main()
{
	int A[] = { 2, 5, 3, 7, 11, 8, 10, 13, 6 };
	int n = ARRAY_SIZE(A);
 
	printf("Length of Longest Increasing Subsequence is %d\n",LongestIncreasingSubsequenceLength(A, n));
 
	return 0;
}
