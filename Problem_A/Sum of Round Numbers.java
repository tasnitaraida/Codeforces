import java.util.*;
 
public class SumOfRoundNumbers {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int n=sc.nextInt();
            int d=0;
            int length=String.valueOf(n).length();
            int count = 0;
            int a=n;
            while(a>0) {
                int r=a%10;
                if(r!=0) {
                    count++;
                }
                a=a/10;
            }
 
            System.out.println(count);
            if(length==1) {
                System.out.print(n);
            }
            while(length>1) {
                int i=0;
                if(length==2) {
                    i=10;
                }
                if(length==3) {
                    i=100;
                }
                if(length==4) {
                    i=1000;
                }
                if(length==5) {
                    i=10000;
                }
                
                d=n/i;
                n=n%i;
                System.out.print(d*i + " ");
                if(n<10 && n>0) {
                    System.out.print(n);
                }
                
                length=String.valueOf(n).length();
            }
            System.out.println();
        }
    }
}
