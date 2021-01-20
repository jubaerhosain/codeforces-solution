import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    private static List<Integer> list = new ArrayList<>();

    public static void main(String args[]) {
        int test = scan.nextInt();
        primeSieve();
        
        while(test-- > 0) {
            int d = scan.nextInt();
            
            int res = 1;
            int i = 0, j = -1;
            for(i = 0; i < list.size(); i++) {
                if(list.get(i) - 1 >= d) {
                    res *= list.get(i);
                    j = list.get(i);
                    break;
                }
            }
            
            for(; i < list.size(); i++) {
                if(list.get(i) - j >= d) {
                    res *= list.get(i);
                    j = list.get(i);
                    break;
                }
            }
            
            System.out.println(res);
        }
    }
    
    private static void primeSieve() {
        int MAX = 100000;
        boolean[] prime = new boolean[MAX+1];
	    prime[2] = true;                    
	                                        
	    for(int i = 3; i <= MAX; i+=2) {   
	        prime[i] = true;
	    }
	    
	    for(long i = 3; i <= MAX;  i+=2) {
	        if(prime[(int)i]) {                 
	            for(long j = i*i; j <= MAX; j += i) {
	                prime[(int)j] = false;
	            }
	        }
	    }
	    
	    for(int i = 2; i <= MAX; i++) {
	        if(prime[i]) {
	            list.add(i);
	        }
	    }
	}
}





