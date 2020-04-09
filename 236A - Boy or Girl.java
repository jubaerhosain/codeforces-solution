import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int counter[] = new int[26];
    
    public static void main(String args[]){
        int distinct = 0;
        
        char[] input = scan.next().toCharArray();
        
        for(int i = 0; i < input.length; i++){
            counter[input[i] - 97]++;
        }
        
        for(int i = 0; i < 26; i++){
            if(counter[i] != 0){
                distinct++;
            }
        }
        
        if(distinct%2 == 0){
            System.out.println("CHAT WITH HER!");
        }
        else{
            System.out.println("IGNORE HIM!");
        }
    }
    
}
