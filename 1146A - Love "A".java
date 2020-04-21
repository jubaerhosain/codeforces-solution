import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        char s[] = scan.next().toCharArray();
        
        int a = 0;
        for(int i = 0; i < s.length; i++){
            if(s[i] == 'a'){
                a++;
            }
        }
        
        if(a > s.length/2){
           System.out.println(s.length); 
        }
        else{
            System.out.println(a+a-1);
        }
    }
    
}
