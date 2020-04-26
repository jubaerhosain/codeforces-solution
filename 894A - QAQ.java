import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        char array[] = scan.next().toCharArray();
        
        int counter = 0, n = array.length;
        for(int i = 0; i < n; i++){
            
            if(array[i] == 'Q'){
                
                for(int j = i+1; j < n; j++){
                    
                    if(array[j] == 'A'){
                        
                        for(int k = j+1; k < n; k++){
                            
                            if(array[k] == 'Q'){
                                counter++;
                            }
                        }
                    }
                }
            }
        }
        
        System.out.println(counter);
    }
    
}
