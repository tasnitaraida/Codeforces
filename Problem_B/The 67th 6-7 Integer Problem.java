import java.util.*;
 
public class The67th67IntegerProblem {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int[] num = new int[7];
            int max=-9999;
            int i=0;
            int sum=0;
 
            for(i=0;i<7;i++) {
                num[i]=sc.nextInt();
            }
 
            for(i=0;i<7;i++) {
                sum-=num[i];
            }
 
            for(i=0;i<7;i++) {
                if(num[i]>max) {
                    max=num[i];
                }
            }
 
            System.out.println(sum+max+max);
        }
    }
}
