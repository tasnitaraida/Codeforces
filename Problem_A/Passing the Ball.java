import java.util.*;
 
public class PassingTheBall {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int size=sc.nextInt();
            String s=sc.next();
            int count=0;
 
            for(int i=0;i<s.length();i++) {
                if(s.charAt(i)=='L') {
                    count=i+1;
                    break;
                }
                
            }
 
            System.out.println(count);
        }
    }
}
