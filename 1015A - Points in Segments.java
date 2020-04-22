import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        int[] bound = new int[m+1];
        int[] ans = new int[m+1];
        
        for(int i = 1; i <= n; i++){
            int x = scan.nextInt();
            int y = scan.nextInt();
            
            for(int j = x; j <= y; j++){
                bound[j]++;
            }
        }
        
        int count = 0, j = 0;
        for(int i = 1; i <= m; i++){
            if(bound[i] == 0){
                count++;
                ans[j++] = i;
            }
        }
        
        System.out.println(count);
        for(int i = 0; i < count; i++){
            System.out.print(ans[i] + " ");
        }
    }
    
}
