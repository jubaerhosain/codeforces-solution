import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int[] unicode = new int[26];
    
    public static void main(String args[]){
        int n = scan.nextInt();
        char[] input = scan.next().toUpperCase().toCharArray();
        
        if(n < 26){
            System.out.println("NO");
        }
        else{
            for(int i = 0; i < n; i++){
                unicode[input[i]-65]++;
            }
            
            int counter = 0;
            for(int i = 0; i < 26; i++){
                if(unicode[i] >= 1){
                    counter++;
                }
            }
            
            if(counter >= 26){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
    
}
