import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        long n = scan.nextLong();
        long m = scan.nextLong();
        
        long x = n, y = n;
        Set<Long> setx = new HashSet<Long>();
        Set<Long> sety = new HashSet<Long>();
        
        for(long i = 0; i < m; i++){
            long xA = scan.nextLong();
            long yA = scan.nextLong();
            
            if(!setx.contains(xA)){
                setx.add(xA);
                x--;
            }
            if(!sety.contains(yA)){
                sety.add(yA);
                y--;
            }
            
            System.out.print((x*y) + " ");
        }
        
    }
}


