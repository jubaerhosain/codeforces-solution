import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        int n = scan.nextInt();
        int array[] = new int[n];
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            array[i] = scan.nextInt();
            sum += array[i];
        }
        
        int avg = (sum*2) / n;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(array[i] + array[j] == avg && i != j){
                    System.out.println((i+1) + " " + (j+1));
                    array[i] = 0;
                    array[j] = 0;
                }
            }
        }
        
    }
}


