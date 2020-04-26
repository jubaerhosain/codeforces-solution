import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        long x = scan.nextLong();
        
        int child = 0;
        for(int i = 0; i < n; i++){
            char ch = scan.next().charAt(0);
            int num = scan.nextInt();
            
            if(ch == '+'){
                x += num;
            }
            else{
                if(x >= num){
                    x -= num;
                }
                else{
                    child++;
                }
            }
        }
        
        System.out.println(x + " " + child);
    }
    
}
