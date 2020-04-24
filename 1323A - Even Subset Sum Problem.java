import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            int n = scan.nextInt();
            int array[] = new int[n+1];
            
            for(int i = 1;  i <= n; i++){
                array[i] = scan.nextInt();
            }
            
            if(n == 1 && array[1]%2 != 0){
                System.out.println(-1);
            }
            else{
                if(array[1]%2 == 0){
                    System.out.println("1\n1");
                }
                else if(array[2]%2 == 0){
                    System.out.println("1\n2");
                }
                else{
                    System.out.println("2\n1 2");
                }
            }
        }
    }
    
}
