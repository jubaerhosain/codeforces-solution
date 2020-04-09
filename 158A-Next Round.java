import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int scores[] = new int[51];
    
    public static void main(String args[]){
       int n, k, toNext, playerToNext = 0;
       
       n = scan.nextInt();
       k = scan.nextInt();
       
       for(int i = 1; i <= n; i++){
           scores[i] = scan.nextInt();
       }
      
       toNext = scores[k];
       
       
       for(int i = 1; i <= n; i++){
            if(scores[i] >= toNext && scores[i]  != 0){
                playerToNext++;
            }
            else{
               break;
            }
        }
       
       
       System.out.println(playerToNext);
    }
    
}
