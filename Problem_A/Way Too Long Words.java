import java.util.*;
 
public class WayTooLongWords {
    public static void main(String [] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while (t-->0) {
            String word=sc.next();
 
            int i=0;
            int count=0;
 
            for(i=0;i<word.length();i++) {
                count++;
            }
            
            if(count>10) {
                System.out.print(word.charAt(0));
                System.out.print(count-2);
                System.out.println(word.charAt(i-1));
            }
            else {
                System.out.println(word);
            }
        }
    }
}
