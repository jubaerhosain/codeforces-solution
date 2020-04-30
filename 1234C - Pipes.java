import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        int queries = scan.nextInt();
        
        while(queries-- > 0){
            int n = scan.nextInt();
            char[][] pipe  = new char[2][n];
            
            pipe[0] = scan.next().toCharArray();
            pipe[1] = scan.next().toCharArray();
            
            int row = 0, col = 0;
            for(col = 0; col < n; col++){
                if(pipe[row][col] >= '3'){
                    if(pipe[row^1][col] < '3'){
                        break;
                    }
                    else{
                        row ^= 1;
                    }
                }
            }
            
            if(col == n && row == 1){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
    
}
