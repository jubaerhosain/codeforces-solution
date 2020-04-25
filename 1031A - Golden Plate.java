import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        int k = scan.nextInt();
        
        int ans = 0;
        for (int i = 0; i < k; i++){
		    ans += ((n + m) * 2 - 4);
		    n -= 4;
		    m -= 4;
	    }
        
        System.out.println(ans);
    }
    
}
