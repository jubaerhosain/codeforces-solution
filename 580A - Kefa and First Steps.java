import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        long array[] = new long[n];
        
        for(int i = 0; i < n; i++){
            array[i] = scan.nextLong();
        }
        
        int length = 1, max = 1;
        for(int i = 0; i < n-1; i++){
            if(array[i] <= array[i+1]){
                length++;
            }
            else{
                length = 1;
            }
            if(length > max){
                max = length;
            }
        }
        
        System.out.println(max);
    }
    
}
