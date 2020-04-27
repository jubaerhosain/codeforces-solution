import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int l = scan.nextInt();
        int r = scan.nextInt();
        
        boolean has;
        int result = -1;
        for(int num = l; num <= r; num++){
            int arr[] = new int[10];
            has = true;
            
            int number = num;
            while(number != 0){
                int digit = number % 10;
                arr[digit]++;
                number /= 10;
                
                if(arr[digit] > 1){
                    has = false;
                }
            }
            
            if(has){
                result = num;
                break;
            }
        }
        
        System.out.println(result);
    }
    
}
