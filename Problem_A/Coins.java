import java.util.*;
 
public class Coins {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int s=sc.nextInt();
        int r=s%n;
        int d=s/n;
 
        if(r!=0) {
            System.out.println(d+1);
        }
        else {
            System.out.println(d);
        }
    }
}
