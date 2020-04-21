import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            char array[] = scan.next().toCharArray();
            int n = array.length;
            
            if(n >= 2 && array[n-2] == 'p' && array[n-1] == 'o'){
                System.out.println("FILIPINO");
            }
            else if(n >= 4 && array[n-4] == 'd' && array[n-3] == 'e' && array[n-2] == 's' && array[n-1] == 'u'){
                System.out.println("JAPANESE");
            }
            else if(n >= 4 && array[n-4] == 'm' && array[n-3] == 'a' && array[n-2] == 's' && array[n-1] == 'u'){
                System.out.println("JAPANESE");
            }
            else{
                System.out.println("KOREAN");
            }
        }
    }
    
}
