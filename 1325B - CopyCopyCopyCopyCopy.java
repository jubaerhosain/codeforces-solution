import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int test = scan.nextInt();
        Set<Integer> set = new HashSet<Integer>();
        
        while(test-- > 0){
            int n = scan.nextInt();
            
            for(int i = 0; i < n; i++){
                set.add(scan.nextInt());
            }
            
            System.out.println(set.size());
            set.clear();
        }
    }
    
}
