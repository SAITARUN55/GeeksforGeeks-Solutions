import java.util.*;
public class GFG{
    public static void main(String as[]){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        while(n>0){
            String s=sc.next();
            int count=0;
            char c[]=s.toCharArray();
            for(int i=0;i<c.length;i++){
                if(c[i]>=65 && c[i]<=90){
                    count++;
                }
            }
            n--;
            System.out.println(count);
        }
        
    }
}
