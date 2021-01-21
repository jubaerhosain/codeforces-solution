import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    private static int MAX = 2*100000+2;
    
    public static void main(String args[]) {
        int test = scan.nextInt();
        
        while(test-- > 0) {
            char[] arr = scan.next().toCharArray();
            ternary(arr);
        }
    }
    
    private static void ternary(char[] arr) {
	    int min = Integer.MAX_VALUE;
	    int left = 0;
	    int one = 0, two = 0, three = 0;
	    for(int i = 0; i < arr.length; i++) {
	        if(arr[i] == '1') one++;
	        else if(arr[i] == '2') two++;
	        else three++;
	        
	        while(one >= 1 && two >= 1 && three >= 1) {
	            min = Math.min(min, i-left+1);
	            if(arr[left] == '1') one--;
	            else if(arr[left] == '2') two--;
	            else three--;
	            left++;
	        }
	    }
	    
	    System.out.println(min==Integer.MAX_VALUE?0:min);
	}
}






