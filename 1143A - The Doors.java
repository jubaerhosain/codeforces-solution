import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        int array[] = new int[n+1];
        
        int left = 0, right = 0;
        for(int i = 1; i <= n; i++){
            array[i] = scan.nextInt();
            if(array[i] == 0){
                left++;
            }
            else{
                right++;
            }
        }
        
        for(int i = 1; i <= n; i++){
            if(array[i] == 0){
                left--;
            }
            else{
                right--;
            }
            
            if(left == 0 || right == 0){
                System.out.println(i);
                break;
            }
        }
    }
    
}
