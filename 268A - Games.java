import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int host[] = new int[n];
        int guest[] = new int[n];
        
        for(int i = 0; i < n; i++){
            host[i] = scan.nextInt();
            guest[i] = scan.nextInt();
        }
        
        int counter = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(host[i] == guest[j]){
                    counter++;
                }
            }
        }
        
        System.out.println(counter);
    }
    
}
