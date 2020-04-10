import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        for(int i = 1; i < n; i++){
            if(i%2 == 1){
                System.out.print("I hate that ");
            }
            else{
                System.out.print("I love that ");
            }
        }
        if(n%2 == 1){
            System.out.print("I hate it\n");
        }
        else{
            System.out.print("I love it\n");
        }
    }
    
}
