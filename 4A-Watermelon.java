import java.util.Scanner;
 
public class Solution{
    static Scanner sc = new Scanner(System.in);
    
    public static void main(String args[]){
        int w = sc.nextInt();
        
        if(w <= 2){
            System.out.println("NO");
        }
        else if(w % 2 == 0){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
