import java.util.*;

public class Solution{
    private static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        long n = scan.nextLong();
        
        char[] a = scan.next().toCharArray();
        char[] b = scan.next().toCharArray();
        
        long zero = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == '0'){
                zero++;
            }
        }
        
        long oneZero = 0, oneOne = 0, zeroZero = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == '0' && b[i] == '0'){
                zeroZero++;
            }
            else if(a[i] == '1' && b[i] == '1'){
                oneOne++;
            }
            else if(a[i] == '1' && b[i] == '0'){
                oneZero++;
            }
        }
        
        System.out.println((zero * oneZero) + (zeroZero * oneOne));
    }
    
}
