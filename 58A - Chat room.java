import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        char[] string = scan.next().toCharArray();
        char[] hello = "hello".toCharArray();
        
        int index = 0;
        for(int i = 0; i < string.length; i++){
            if(string[i] == hello[index]){
                index++;
                if(index == 5){
                    break;
                }
            }
        }
        
        if(index == 5){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
    
}
