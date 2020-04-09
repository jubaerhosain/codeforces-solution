import java.util.Scanner;
 
public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        long n, m, a, row, colum;
        
        n = scan.nextLong();
        m = scan.nextLong();
        a = scan.nextLong();
        
        if(n%a == 0){
            row = n/a;
        }
        else{
            row = (n/a)+1;
        }
        
        if(m%a == 0){
            colum = m/a;
        }
        else{
            colum = (m/a)+1;
        }
        
        System.out.println(row*colum);
    }
}
