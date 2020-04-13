import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        if(Math.min(scan.nextInt(), scan.nextInt()) % 2 == 0){
            System.out.println("Malvika");
        }
        else{
            System.out.println("Akshat");
        }
    }
    
}
