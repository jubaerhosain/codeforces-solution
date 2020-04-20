import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int test = scan.nextInt();
        
        while(test-- > 0){
            char[] array = scan.next().toCharArray();
            
            int counter = 0, L = 0;
            for(int i = 0; i < array.length; i++){
                if(array[i] == 'L'){
                    counter++;
                }
                else{
                    counter = 0;
                }
                
                if(counter > L){
                    L = counter;
                }
            }
            
            System.out.println(L+1);
        }
    }
}
