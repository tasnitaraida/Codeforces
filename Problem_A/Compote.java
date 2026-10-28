import java.util.*;
 
public class Compote {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
 
        int a2=a/1;
        int b2=b/2;
        int c2=c/4;
        int min=0;
 
        if(a2<=b2 && a2<=c2) {
            min=a2;
        }
        else if(b2<=a2 && b2<=c2) {
            min=b2;
        }
        else {
            min=c2;
        }
 
        System.out.print(7*min);
    }
}
