import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int h = scan.nextInt();
        
        int counter  = 0;
        for(int i = 0; i < n; i++){
            int a = scan.nextInt();
            
            if(a > h){
                counter += 2;
            }
            else{
                counter += 1;
            }
        }
        
        System.out.println(counter);
    }
    
}
