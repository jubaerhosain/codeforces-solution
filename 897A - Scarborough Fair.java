import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        char array[] = scan.next().toCharArray();
        
        while(m-- > 0){
            int l = scan.nextInt();
            int r = scan.nextInt();
            char c1 = scan.next().charAt(0);
            char c2 = scan.next().charAt(0);
            
            for(int i = l-1; i < r; i++){
                if(array[i] == c1){
                    array[i] = c2;
                }
            }
        }
        
        System.out.println(array);
    }
    
}
