import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        char[] string = scan.next().toCharArray();
        
        int x = 0, del = 0;
        for(int i = 0; i < n; i++){
            if(string[i] == 'x'){
                x++;
            }
            else{
                x = 0;
            }
            if(x == 3){
                del++;
                x--;
            }
        }
        
        System.out.println(del);
    }
    
}
