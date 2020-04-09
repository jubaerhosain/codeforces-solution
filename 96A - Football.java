import java.util.Scanner;
import java.util.Arrays;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int counter0 = 0, counter1 = 0;
        char array[] = scan.next().toCharArray();
        
        if(array.length <= 7){
            System.out.println("NO");
            System.exit(0);
        }
        else{
            for(int i = 0; i < array.length; i++){
                if(array[i] == '0'){
                    counter1 = 0;
                    counter0++;
                    if(counter0 >= 7){
                        System.out.println("YES");
                        System.exit(0);
                    }
                }
                else{
                    counter0 = 0;
                    counter1++;
                    if(counter1 >= 7){
                        System.out.println("YES");
                        System.exit(0);
                    }
                }
            }
        }
        System.out.println("NO");
        
    }
    
}
