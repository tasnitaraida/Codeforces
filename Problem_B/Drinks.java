import java.util.*;
 
public class Drinks {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
 
        double[] pi=new double[n];
 
        for(int i=0;i<pi.length;i++) {
            pi[i]=sc.nextDouble();
        }
 
        double m = (double) n;
        double orangeTotal=0;
        double orangePercent=0;
        for(int i=0;i<pi.length;i++){
            orangeTotal+=pi[i];
            orangePercent=orangeTotal/m;
        }
 
        System.out.println(orangePercent);
    }
}
