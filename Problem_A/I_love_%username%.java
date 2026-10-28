import java.util.*;
 
public class IloveUserName {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size=sc.nextInt();
        int[] n=new int[size];
 
        for(int i=0;i<n.length;i++) {
            n[i]=sc.nextInt();
        }
 
        int i=0;
        int j=0;
        int count=0;
        int max=n[i];
        int min=n[i];
        for(i=0,j=1;i<n.length && j<n.length;i++,j++) {
            if(n[i]>max) {
                max=n[i];
            }
 
            if(n[i]<min) {
                min=n[i];
            }
 
            if(n[j]>max || n[j]<min) {
                count++;
            } 
        }
 
        System.out.println(count);
    }
}
