import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static boolean isComposit(int n){
        if(n%3 == 0 || n%2 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        for(int i = 4; i < n-4; i++){
            if(isComposit(i) && isComposit(n-i)){
                System.out.println((i) + " " + (n-i));
                break;
            }
        }
    }
    
}

