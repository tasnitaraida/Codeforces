import java.util.*;
 
public class Suspension {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int n=sc.nextInt();
            int y=sc.nextInt();
            int r=sc.nextInt();
            int player=0;
 
            player=(y/2)+r;
 
            if(player>n) {
                System.out.println(n);
            }
            else {
                System.out.println(player);
            }
        }
    }
}
