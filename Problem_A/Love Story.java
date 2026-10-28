import java.util.*;
 
public class LoveStory {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            String s=sc.next();
            int count=0;
 
            if(s.charAt(0)!='c') {
                count++;
            }
 
            if(s.charAt(1)!='o') {
                count++;
            }
 
            if(s.charAt(2)!='d') {
                count++;
            }
 
            if(s.charAt(3)!='e') {
                count++;
            }
 
            if(s.charAt(4)!='f') {
                count++;
            }
 
            if(s.charAt(5)!='o') {
                count++;
            }
 
            if(s.charAt(6)!='r') {
                count++;
            }
 
            if(s.charAt(7)!='c') {
                count++;
            }
 
            if(s.charAt(8)!='e') {
                count++;
            }
 
            if(s.charAt(9)!='s') {
                count++;
            }
 
            System.out.println(count);
        }
    }
}
