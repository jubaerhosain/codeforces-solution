import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int play[] = new int[n+1];
        
        //Inputs
        int p = scan.nextInt();
        for(int i = 1; i <= p; i++){
            play[scan.nextInt()]++;
        }
        p = scan.nextInt();
        for(int i = 1; i <= p; i++){
            play[scan.nextInt()]++;
        }
        
        int counter = 0;
        for(int i = 1; i <= n; i++){
            if(play[i] >= 1){
                counter++;
            }
        }
        
        if(counter == n){
            System.out.println("I become the guy.");
        }
        else{
            System.out.println("Oh, my keyboard!");
        }
    }
    
}
