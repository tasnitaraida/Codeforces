import java.util.*;
 
public class Magents {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] magnets=new int[n];
 
        for(int i=0;i<magnets.length;i++) {
            magnets[i]=sc.nextInt();
        }
 
        int count=1;
 
        for(int i=0;i<magnets.length-1;i++) {
            if(n==1) {
                count=1;
                break;
            }
            int j=i+1;
            if(magnets[i]!=magnets[j]){
                count++;
            }
        }
 
        System.out.println(count);
    }
}
