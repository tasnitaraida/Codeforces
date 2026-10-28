import java.util.*;
 
public class PartyMonster {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int size=sc.nextInt();
            String bracket=sc.next();
            int i=0;
            int start=0;
            int end=0;
 
            for(i=0;i<bracket.length();i++) {
                if(bracket.charAt(i) == '(' ) {
                    start++;
                }
                else {
                    end++;
                }
            }
 
            if(start == end) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
    }
}
