import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int[] unicode = new int[26];
    static int[] unicode1 = new int[26];
    
    public static void main(String args[]){
        String s = scan.next() + scan.next();
        char[] s1 = s.toCharArray();
        char[] s2 = scan.next().toCharArray();
        
        for(int i = 0; i < s1.length; i++){
            unicode[s1[i] - 65]++;
        }
        
        for(int i = 0; i < s2.length; i++){
            unicode1[s2[i] - 65]++;
        }
        
        boolean has = true;
        for(int i = 0; i < 26; i++){
            if(unicode[i] != unicode1[i]){
                has = false;
                break;
            }
        }
        
        if(has){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
    
}
