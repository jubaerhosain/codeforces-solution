import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int t = scan.nextInt();
        char queue[] = scan.next().toCharArray();
        
        while(t > 0){
            for(int i = 1; i < n; i++){
                if(queue[i] == 'G' && queue[i-1] == 'B'){
                    queue[i] = 'B';
                    queue[i-1] = 'G';
                    i++;
                }
            }
            t--;
        }
        
        System.out.println(queue);
    }
    
}
