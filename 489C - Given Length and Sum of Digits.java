import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int length = scan.nextInt();
        int sum = scan.nextInt();
        
        String largest = "";
        
        if(sum == 0){
            if(length == 1){
                System.out.println(0 + " " + 0);
                return;
            }
            else{
                System.out.println(-1 + " " + -1);
                return;
            }
        }
        else{
            for(int i = 1; i <= length; i++){
                int digit = Math.min(sum, 9);
                largest += digit;
                sum -= digit;
                if(sum < 0){
                    sum = 0;
                }
            }
            
            if(sum > 0){
                System.out.println(-1 + " " + -1);
                return;
            }
            
            StringBuilder sb = new StringBuilder(largest);
            sb.reverse();
            char[] smallest = sb.toString().toCharArray();
            
            int i = 0;
            for(; smallest[i] == '0'; i++);  //for find samllest..and move first 0's to the right
            smallest[i]--;
            smallest[0]++;
            
            System.out.println(String.valueOf(smallest) + " " + largest);
        }
        
    }
    
}

