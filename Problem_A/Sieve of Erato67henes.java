import java.util.*;
 
public class SieveOfErato67Henes {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int size=sc.nextInt();
            int[] num=new int[size];
            int i=0;
            int one=0;
            int sixSeven=0;
 
            for(i=0;i<num.length;i++) {
                num[i]=sc.nextInt();
            }
 
            for(i=0;i<num.length;i++) {
                if(num[i]==1) {
                    one++;
                }
                else if(num[i]==67) {
                    sixSeven++;
                }
                else {
                    one=one;
                    sixSeven=sixSeven;
                }
            }
 
            if((one>0 && sixSeven>0) || sixSeven>0) {
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
    }
}
