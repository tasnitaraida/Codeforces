import java.util.*;
 
public class HQ9 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int hq9=0;
 
        for(int i=0;i<s.length();i++) {
            if(s.charAt(i)=='H' || s.charAt(i)=='Q' || s.charAt(i)=='9') {
                hq9=1;
            }
        }
 
        if(hq9==1) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
