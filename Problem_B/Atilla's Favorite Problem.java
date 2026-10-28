import java.util.*;
 
public class AtillaSFavoriteProblem {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int size=sc.nextInt();
            String s=sc.next();
            int max=0;
 
            for(int i=0;i<s.length();i++) {
                int value=(int)s.charAt(i);
                if(value>max) {
                    max=value;
                }
            }
 
            System.out.println(max-96);
        }
    }
}
