import java.util.Scanner;
import java.util.Arrays;

public class Pairs
{
    public static void main(String[] args) 
    {
        int n,k,t,e;
        int []a;
        Scanner in = new Scanner(System.in);
        n=in.nextInt();
        k=in.nextInt();        
        a=new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=in.nextInt();
        }
        Arrays.sort(a);
        t=0;
        for(int i=0;i<n;i++)
        {
            e=a[i]+k;
            if(Arrays.binarySearch(a, e) >= 0)
            {
                t++;
            }
        }
        System.out.println(t);
    }
}

/*

Given N numbers [N<=10^5], count the total pairs of numbers that have a difference of K. [K>0 and K<1e9]. Each of the N numbers will be greater than 0 and be at least K away from 2^31-1 (Everything can be done with 32 bit integers).

Input Format:

1st line contains N & K (integers).
2nd line contains N numbers of the set. All the N numbers are assured to be distinct.

Output Format:

One integer saying the number of pairs of numbers that have a diff K.

Sample Input #00:

5 2
1 5 3 4 2

Sample Output #00:

3

Sample Input #01:

10 1
363374326 364147530 61825163 1073065718 1281246024 1399469912 428047635 491595254 879792181 1069262793 

Sample Output #01:

0

*/
