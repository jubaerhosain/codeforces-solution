import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        char input[] = scan.next().toCharArray();
        boolean flag = true;
        
        for(int i = 0; i < input.length; i++){
            if(i+2 < input.length && input[i] == 'W' && input[i+1] == 'U' && input[i+2] == 'B'){
                i += 2;
                if(!flag){
                    System.out.print(" ");
                }
            }
            else{
                flag = false ;
                System.out.print(input[i]);
            }
        }
        
    }
    
}
