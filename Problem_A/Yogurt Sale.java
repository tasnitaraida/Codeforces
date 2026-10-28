import java.util.*;
 
public class YogurtSale{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        
        while(t-->0){
            int n=sc.nextInt();
            int a=sc.nextInt();
            int b=sc.nextInt();
 
            int qd=(n/2);
            int qs=(n%2);
            float bDivide=b/2;
            if(a>bDivide) {
            int price=(qd*b)+(qs*a);
            System.out.println(price);
            }
            else  {
                System.out.println(n*a);
            }
            
        }
    }
}
