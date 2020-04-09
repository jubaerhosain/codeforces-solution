import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        String str1 = scan.next().toLowerCase();
        String str2 = scan.next().toLowerCase();
        
        if(str1.compareTo(str2) == 0){
            System.out.println(0);
        }
        else if(str1.compareTo(str2) > 0){
            System.out.println(1);
        }
        else{
            System.out.println(-1);
        }
    }
    
}
