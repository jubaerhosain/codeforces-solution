import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        StringBuilder s = new StringBuilder(scan.next());
        StringBuilder t = new StringBuilder(scan.next());
        
        s = s.reverse();
        
        if(s.toString().equals(t.toString())){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
        
    }
    
}
