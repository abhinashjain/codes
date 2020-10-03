#!/usr/bin/perl
use List::Util qw( min max );

($n,$k)=split(' ',<>);
@arr1=split(' ',<>);
if($k==0)
{
	print "@arr1";
}
else
{
	$max=max @arr1;
	for($j=0;$j<scalar(@arr1);$j++)
	{
		$arr1[$j]=$max-$arr1[$j];
	}
	$max=max @arr1;
	for($j=0;$j<scalar(@arr1);$j++)
	{
		$arr2[$j]=$max-$arr1[$j];
	}
	if($k&1)
	{
		print "@arr1";
	}
	else
	{
		print "@arr2";
	}
}


=comment

Roman has no idea, why this problem is called Stone. He also has no idea on how to solve the followong problem: given array of N integers A and a number K. During a turn the maximal value over all Ai is chosen, let's call it MAX. Then Ai =
MAX - Ai is done for every 1 <= i <= N. Help Roman to find out how will the array look like after K turns.

Input
The numbers N and K are given in the first line of an input. Then N integers are given in the second line which denote the array A.

Output
Output N numbers on a single line. It should be the array A after K turns.

Constraints
    1 <= N <= 10^5
    0 <= K <= 10^9
    Ai does not exceed 2 * 10^9 by it's absolute value.
 
Example
Input:
4 1
5 -1 7 0

Output:
2 8 0 7

= cut
