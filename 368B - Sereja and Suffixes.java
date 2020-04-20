import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int input[] = new int[100005];
    static int result[] = new int[100005];
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        for(int i = 1; i <= n; i++){
            input[i] = scan.nextInt();
        }
        
        Set<Integer> set = new HashSet<Integer>();
        for(int i = n; i > 0; i--){
            set.add(input[i]);
            result[i] = set.size();
        }
        
        while(m-- > 0){
            int q = scan.nextInt();
            System.out.println(result[q]);
        }
    }
}
