import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            n /= 2;
            
            if(n%2 != 0){
                System.out.println("NO");
                continue;
            }
            else{
                long sum1 = 0, sum2 = 0;
                
                System.out.println("YES");
                for(int i = 1; i <= n; i++){
                    System.out.print((2*i) + " ");
                    sum1 += (2*i);
                }
                for(int i = 1; i < n; i++){
                    System.out.print((2*i)-1 + " ");
                    sum2 += (2*i)-1;
                }
                System.out.println(sum1-sum2);
            }
        }
    }
    
}
