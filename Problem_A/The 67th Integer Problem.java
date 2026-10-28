import java.util.*;
 
public class The67thIntegerProblem {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int x=sc.nextInt();
 
            if(x==1 || x==3 || x==5) {
                System.out.println(x+1);
            }
            else {
                System.out.println(x);
            }
        }
    }
}
