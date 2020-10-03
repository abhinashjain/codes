#!/usr/bin/perl
$t=<STDIN>;
for($i=0;$i<$t;$i++)
{
	$a=<STDIN>;
	if(($a%4)==1)
	{
		print "\nALICE";
	}
	else
	{
		print "\nBOB"
	}
}

=comment

Alice and Bob play the following game.They choose a number N to play with.The runs are as follows :

1.Bob plays first and the two players alternate.

2.In his/her turn ,a player can subtract from N any prime number(including 1) less than N.The number thus obtained is the new N.

3.The person who cannot make a move in his/her turn loses the game.

Assuming both play optimally,who wins the game ?
Input format:

The first line contains the number of test cases T.Each of the next lines contains an integer N.
Output format:

Output T lines one for each test case,containing "ALICE" if Alice wins the game ,or "BOB" if Bob wins the game.
Example

Sample Input:
2
1
2


Sample Output:
ALICE
BOB


Constraints:
1 <= T <= 1000000
1 <= N <= 1000000000


Note : For the first test case, Bob cannot make any move and hence Alice wins the game. For the second test case, Bob subtracts 1 from N. Now, Alice cannot make a move and loses the game.

= cut
