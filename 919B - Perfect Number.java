import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    private static List<Integer> perfect = new ArrayList<>();
    
    private static void makePerfect() {
        for(int i = 19; ; i++) {
            int n = i, sum = 0;
            while(n > 0) {
                sum += n%10;
                n /= 10;
            }
            
            if(sum == 10) perfect.add(i);
            if(perfect.size() == 10000) return;
        }
    }
    
    public static void main(String args[]) {
        makePerfect();
        
        int k = scan.nextInt();
        System.out.println(perfect.get(k-1));
    }
}
