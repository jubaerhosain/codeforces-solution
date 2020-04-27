import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        int divisor[] = new int[n];
        
        Set<Integer> set = new HashSet<Integer>();
        
        int x = 0, y = 0;
        for(int i = 0; i < n; i++){
            divisor[i] = scan.nextInt();
        }
        
        Arrays.sort(divisor);
        x = divisor[n-1];
        
        for(int i = 0; i <  n; i++){
            if(x%divisor[i] == 0 && !set.contains(divisor[i])){
                set.add(divisor[i]);
            }
            else{
                y = divisor[i];
            }
        }
        
        System.out.println(x + " " + y);
    }
    
}
