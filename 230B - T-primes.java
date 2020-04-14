import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static long MAX = 1000000;
    static boolean[] flag = new boolean[(int)MAX];
    
    static boolean isPerfectSqure(long n){
        double sqrt = Math.sqrt(n);
        
        if(sqrt == (int)Math.sqrt(n)){
            return true;
        }
        else{
            return false;
        }
    }
    
    static void initializeFlag(){
        flag[0] = flag[1] = true;
        
        for(long i = 2; i < MAX; i++){
            if(!flag[(int)i]){
                for(long j = i*i; j < MAX; j+=i){
                    flag[(int)j] = true;
                }
            }
        }
    }
    
    public static void main(String args[]){
        long total = scan.nextLong();
        
        initializeFlag();
        
        for(long i = 0; i < total; i++){
            long number = scan.nextLong();
            
            if(number == 4){
                System.out.println("YES");
            }
            else if(number%2 == 0){
                System.out.println("NO");
            }
            else if(isPerfectSqure(number) && !flag[(int)Math.sqrt(number)]){
                System.out.println("YES");   
            }
            else{
                System.out.println("NO");
            }
        }
    }
     
}

