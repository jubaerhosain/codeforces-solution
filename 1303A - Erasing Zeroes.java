import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int testCase = scan.nextInt();
        
        while(testCase-- > 0){
            char[] array = scan.next().toCharArray();
            int pos1 = 0, pos2 = 0;
            
            for(int i = 0; i < array.length; i++){
                if(array[i] == '1'){
                    pos1 = i;
                    break;
                }
            }
            for(int i = array.length-1; i >= 0; i--){
                if(array[i] == '1'){
                    pos2 = i;
                    break;
                }
            }
            
            int count = 0;
            for(int i = pos1; i < pos2; i++){
                if(array[i] == '0'){
                    count++;
                }
            }
            
            System.out.println(count);
        }
    }
    
}
