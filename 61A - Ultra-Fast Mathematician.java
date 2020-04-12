import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        char s1[] = scan.next().toCharArray();
        char s2[] = scan.next().toCharArray();
        
        for(int i = 0; i < s1.length; i++){
            if(s1[i] == s2[i]){
                System.out.print("0");
            }
            else{
                System.out.print("1");
            }
        }
    }
    
}
