import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        
        if(a < b){
            if(b <= a+c){
                System.out.println("?");
            }
            else{
                System.out.println("-");
            }
        }
        else if(a > b){
            if(a <= b+c){
                System.out.println("?");
            }
            else{
                System.out.println("+");
            }
        }
        else{
            if(c != 0){
                System.out.println("?");
            }
            else{
                System.out.println("0");
            }
        }
    }
    
}
