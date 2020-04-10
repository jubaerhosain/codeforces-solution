import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        String s = scan.next();
        
        int lower = 0, upper = 0;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) >= 65 && s.charAt(i) <= 90){
                upper++;
            }
            else{
                lower++;
            }
        }
        
        if(lower >= upper){
            s = s.toLowerCase();
        }
        else{
            s = s.toUpperCase();
        }
        
        System.out.println(s);
    }
    
}
