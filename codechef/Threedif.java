import java.util.Scanner;
import java.util.Arrays;
import java.math.BigInteger;

public class Threedif
{
    public static void main(String[] args) 
    {
        BigInteger [] a=new BigInteger[3];     
        BigInteger two=new BigInteger("2");
        BigInteger mo=new BigInteger("1000000007");                
        BigInteger b;
        int t;
        Scanner in = new Scanner(System.in);
        t=in.nextInt();
        for(int i=0;i<t;i++)
        {
            b=new BigInteger("0");
            a[0]=in.nextBigInteger();
            a[1]=in.nextBigInteger();
            a[2]=in.nextBigInteger();            
            Arrays.sort(a);
            b=a[2].subtract(two);
            b=b.multiply(a[1].subtract(BigInteger.ONE));
            b=(b.multiply(a[0])).mod(mo); 
            System.out.println(b);
        }
    }
}

/*
This is probably the simplest problem ever. You just need to count the number of ordered triples of different numbers (X1, X2, X3), where Xi could be any positive integer from 1 to Ni, inclusive (i = 1, 2, 3).
No, wait. I forgot to mention that numbers N1, N2, N3 could be up to 1018. Well, in any case it is still quite simple :)
By the way, because of this the answer could be quite large. Hence you should output it modulo 109 + 7. That is you need to find the remainder of the division of the number of required triples by 109 + 7.
Input

The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. The only line of each test case contains three space-separated integers N1, N2, N3.
Output

For each test case, output a single line containing the number of required triples modulo 109 + 7.
Constraints

1 ≤ T ≤ 1000
1 ≤ Ni ≤ 1018
Example

Input:
5
3 3 3
2 4 2
1 2 3
25 12 2012
1 1 2013

Output:
6
4
1
578880
0
Explanation

Example case 1. We have the following triples composed of different numbers up to 3:
(1, 2, 3)
(1, 3, 2)
(2, 1, 3)
(2, 3, 1)
(3, 1, 2)
(3, 2, 1)
Example case 2. Here the triples are:
(1, 3, 2)
(1, 4, 2)
(2, 3, 1)
(2, 4, 1)
Example case 3. Here the only triple is (1, 2, 3).
Example case 4. Merry Christmas!
Example case 5. ... and Happy New Year! By the way here the answer is zero since the only choice for X1 and for is X2 is 1, so any such triple will have equal numbers.
*/
