import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        int[][] matrix = new int[n][n];
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                matrix[i][j] = scan.nextInt();
            }
        }
        
        int mid = n / 2;
        long sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
        for(int i = 0; i < n; i++){
            sum1 += matrix[i][i];
            sum2 += matrix[i][n-i-1];
            sum3 += matrix[i][mid];
            sum4 += matrix[mid][i];
        }
        
        System.out.println((sum1+sum2+sum3+sum4) - 3*matrix[mid][mid]);
    }
    
}
