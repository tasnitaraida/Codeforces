import java.util.*;
 
public class RestoringThreeNumbers {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num[]=new int[4];
        int max=-9999;
        
        for(int i=0;i<num.length;i++) {
            num[i]=sc.nextInt();
        }
 
        for(int i=0;i<num.length;i++) {
            if(num[i]>max) {
                max=num[i];
            }
        }
 
        for(int i=0;i<num.length;i++) {
            int x=max-num[i];
            if(x!=0) {
            System.out.print(x+" ");
            }
        }
    }
}
