import java.util.*;

public class HelloWorld{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String []args){
        int n = scan.nextInt();
        
        if(n%2 == 1){
            System.out.println(-1);
        }
        else{
            System.out.print("2 1 ");
            
            for(int i = 3; i < n; i += 2){
                System.out.print(i+1 + " " + i + " ");
            }
        }
    }
}
