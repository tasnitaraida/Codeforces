import java.util.*;
 
public class PanoramixsPrediction {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        int primeNum=0;
 
        int [] prime={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
 
        for(int i=0,j=1;i<prime.length && j<prime.length;i=i+1,j=j+1) {
            if(n==prime[i] && m==prime[j]) {
                primeNum=1;
            }
        }
 
        if(primeNum==1) {
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}
