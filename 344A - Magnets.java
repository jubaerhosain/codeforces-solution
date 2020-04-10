import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int array[] = new int[n];
        
        for(int i = 0; i < n; i++){
            array[i] = scan.nextInt();
        }
        
        int group = 1;
        for(int i = 0; i < n-1; i++){
            if(array[i] != array[i+1]){
                group++;
            }
        }
        
        System.out.println(group);
    }
    
}
