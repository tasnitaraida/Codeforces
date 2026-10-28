import java.util.*;
 
public class LawnMower {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int n=sc.nextInt();
            int w=sc.nextInt();
            int r=n%w;
            int d=n/w;
 
            System.out.println((d*(w-1))+r);
        }
    }
}
