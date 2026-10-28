import java.util.*;
 
public class PrefixMax {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int n=sc.nextInt();
            int[] a=new int[n];
            int max=-99;
 
            for(int i=0;i<a.length;i++) {
                a[i]=sc.nextInt();
            }
 
            for(int i=0;i<a.length;i++) {
                if(a[i]>max) {
                    max=a[i];
                }
            }
 
            System.out.println(max*n);
        }
    }
}
