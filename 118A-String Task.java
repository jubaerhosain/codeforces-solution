import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    static boolean isVowel(char c){
        boolean vowel = false;
        
        switch(c){
            case 'a':
                vowel = true;
                break;
                
            case 'e':
                vowel = true;
                break;
                
            case 'i':
                vowel = true;
                break;
                
            case 'o':
                vowel = true;
                break;
                
            case 'u':
                vowel = true;
                break;
                
            case 'y':
                vowel = true;
                break;
        }
        
        return vowel;
    }
    
    public static void main(String args[]){
       StringBuilder input = new StringBuilder(scan.next().toLowerCase());
       String answer = "";
       
       for(int i = 0; i < input.length(); i++){
           if( !isVowel( input.charAt(i) ) ){
               answer += input.charAt(i);
           }
       }
       
       for(int i = 0; i < answer.length(); i++){
           System.out.print(".");
           System.out.print(answer.charAt(i));
       }
       System.out.println();
    }
    
}
