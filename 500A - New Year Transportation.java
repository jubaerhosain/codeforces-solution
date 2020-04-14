import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int des = scan.nextInt();
        int array[] = new int[n+1];
        
        for(int i = 1; i < n; i++){
            array[i] = scan.nextInt();
        }
        
        boolean find = false;
        int source = 1;
        for(int i = 1; i < n; ){
            if(source == des){
                break;
            }
            else if(source > des){
                break;
            }
            else{
                source = i + array[i];
                i = source;
            }
        }
        
        if(source == des && !find){
            find = true;
        }
        
        if(find){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
    
    
}

