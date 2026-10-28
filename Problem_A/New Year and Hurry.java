import java.util.*;
 
public class NewYearAndHurry {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
 
        int i=0;
        int time=0;
        int eT=0;
        eT=240-k;
        for(i=1;i<=n;i++) {
            time = time + 5*i;
            if(time>eT) {
                break;
            }
        }
 
        System.out.println(i-1);
    }
}
