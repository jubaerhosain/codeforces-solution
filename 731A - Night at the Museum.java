import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        char[] n = scan.next().toCharArray();
        
        int counter = 0;
        char in = 'a';
        for(int i = 0; i < n.length; i++){
            int dis = Math.min(26 - Math.abs((in-97)-(n[i]-97)), Math.abs((in-97)-(n[i]-97)));

            counter += dis;
            in = n[i];
        }
        
        System.out.println(counter);
    }
    
}
