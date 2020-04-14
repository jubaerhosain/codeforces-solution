import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        int min, max, amazing = 0;
        min = max = scan.nextInt();
        for(int i = 1; i < n; i++){
            int input = scan.nextInt();
            if(input > max){
                max = input;
                amazing++;
            }
            if(input < min){
                min = input;
                amazing++;
            }
        }
        
        System.out.println(amazing);
    }
    
}

