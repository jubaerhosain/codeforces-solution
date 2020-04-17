import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int array[][] = new int[n][n];
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == 0){
                    array[i][j] = 1;
                }
                else if(j == 0){
                    array[i][j] = 1;
                }
                else{
                    array[i][j] = array[i-1][j] + array[i][j-1];
                }
            }
        }
        
        System.out.println(array[n-1][n-1]);
    }
    
}

