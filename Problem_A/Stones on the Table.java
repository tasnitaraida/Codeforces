import java.util.*;
 
public class StonesOnTheTable {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String s=sc.next();
        char a=s.charAt(0);
        int count=0;
 
        for(int i=1;i<s.length();i++) {
            if(s.charAt(i)==a) {
                count++;
            }
            else {
                a=s.charAt(i);
            }
        }
 
        System.out.println(count);
    }
}
