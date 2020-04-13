import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int array[] = new int[n+1];
        
        int max = Integer.MIN_VALUE, min = Integer.MAX_VALUE, maxPos = 0, minPos = 0;
        
        for(int i = 0; i < n; i++){
            array[i] = scan.nextInt();
            
            if(array[i] <= min){
                min = array[i];
                minPos = i;
            }
            if(array[i] > max){
                max = array[i];
                maxPos = i;
            }
        }
        
        if(maxPos > minPos){
            System.out.println((maxPos-1) + (n-minPos) - 1);
        }
        else{
            System.out.println((maxPos-1) + (n-minPos));
        }
      
    }
    
}
