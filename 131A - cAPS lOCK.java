import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        char[] caps = scan.next().toCharArray();
        
        int l = 0;
        for(int i = 1; i < caps.length; i++){
            if(caps[i] >= 65 && caps[i] <= 90){
                l++;
            }
        }
        
        if(l == caps.length - 1){
            for(int i = 0; i < caps.length; i++){
                if(caps[i] >= 65 && caps[i] <= 90){
                    caps[i] = (char)(97 + caps[i] - 65);
                }
                else{
                    caps[i] = (char)(65 + caps[i] - 97);
                }
            }
        }
        
        System.out.println(caps);
    }
    
}
