import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        char[] table = scan.next().toCharArray();
        
        boolean isPlay = false;
        for(int i = 1; i <=5; i++){
            char[] card = scan.next().toCharArray();
            
            if(table[0] == card[0] || table[0] == card[1] || table[1] == card[0] || table[1] == card[1]){
                isPlay = true;
            }
        }
        
        if(isPlay){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
    
}

