import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int array[] = new int[n];
        int steps[] = new int[n];
        
        for(int i = 0; i < n; i++){
            array[i] = scan.nextInt();
        }
        
        int number = 0, count = 1, j = 0;
        for(int i = 0; i <n-1; i++){
            if(array[i+1] > array[i]){
                count++;
            }
            else{
                number++;
                steps[j++] = count;
                count = 1;
            }
        }
        number++;
        steps[j] = count;
        
        System.out.println(number);
        for(int i = 0; i < number; i++){
            System.out.print(steps[i] + " ");
        }
    }
    
}
