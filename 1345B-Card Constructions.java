/**
 *
 * @author jubaer
 */
import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    private static List<Integer> list = new ArrayList<>();
    private static int MAX = 1000000000;
    
    private static void updateList() {
        list.add(0);
        list.add(2);
        
        for(int h = 2; h < MAX; h++) {
            int curr = list.get(h-1) + 3*h-1;
            list.add(curr);
            if(curr >= MAX) break;
        }
    }
    
    //Upper bound less than or equal
	private static int lowerBound(int target) {
	    int low = 0, high = list.size();    //high = N, not N-1
	    while(low < high) {
	        int mid = low+(high-low)/2;
	        if(list.get(mid) == target) {
	            return mid;
	        } else if(list.get(mid) < target) {
	            low = mid+1;
	        } else {
	            high = mid;
	        }
	    }
	    return low-1;
	}

    public static void main(String args[]) {
        int test = scan.nextInt();
        updateList();
        while(test-- > 0) {
            int n = scan.nextInt();
            int res = 0;
            
            while(n > 1) {
                int i = lowerBound(n);
                n -= list.get(i);
                res++;
            }
            
            System.out.println(res);
        }
    }
}
