import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int array[][] = new int[6][6];
    
    public static void main(String args[]){
        int row = 0, colum = 0;
        
        for(int i = 1; i<= 5; i++){
            for(int j = 1; j <= 5; j++){
                array[i][j] = scan.nextInt();
                if(array[i][j] == 1){
                    row = i;
                    colum = j;
                }
            }
        }
        
        
        System.out.println(Math.abs(3-row) + Math.abs(3-colum));
        
    }
    
}
