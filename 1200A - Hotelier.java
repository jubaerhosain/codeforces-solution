import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int status[] = new int[10];
    
    public static void main(String args[]){
        int n = scan.nextInt();
        char[] input = scan.next().toCharArray();
        
        for(int i = 0; i < n; i++){
            char ch = input[i];
            
            if(ch >= '0' && ch <= '9'){
                status[ch-48] = 0;
            }
            else if(ch == 'L'){
                for(int j = 0; j <= 9; j++){
                    if(status[j] == 0){
                        status[j] = 1;
                        break;
                    }
                }
            }
            else if(ch == 'R'){
                for(int j = 9; j >= 0; j--){
                    if(status[j] == 0){
                        status[j] = 1;
                        break;
                    }
                }
            }
        }
        
        for(int i = 0; i <= 9; i++){
            System.out.print(status[i]);
        }
    }
    
}
