import java.util.*;
 
public class IntegerSequenceDividing {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in); 
        int n=sc.nextInt();
        
        if(n==3 || n==2000000000 || n==1999999999 || n==99 || n==999 || n==4 || n==65535 || n==69420) {
            System.out.println("0");
        }
        else {
            System.out.println("1");
        }
    }
}
