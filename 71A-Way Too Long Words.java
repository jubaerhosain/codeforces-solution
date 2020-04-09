import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int number, strlen; 
        String string;
        
        number = scan.nextInt();
        scan.nextLine();
        
        for(int i = 0; i < number; i++){
            string = scan.next();
            strlen = string.length();
            
            if(strlen <= 10){
                System.out.println(string);
            }
            else{
                System.out.print(string.charAt(0));
                System.out.print(strlen-2);
                System.out.println(string.charAt(strlen-1));  
            }
        }
    }
    
}
