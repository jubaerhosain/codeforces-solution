import java.util.*;

public class HelloWorld{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String []args){
        int n = scan.nextInt();
        
        int counter = 0;
        for(int i = 1; i <= n; i++){
            n -= (i*(i+1)) / 2;
            
            if(n >= 0){
                counter++;
            }
            else{
                break;
            }
        }
        
        System.out.println(counter);
    }
}
