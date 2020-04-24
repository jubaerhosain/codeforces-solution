import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        String color[] = {"red","purple","green","blue","yellow","orange"};
        String stones[] = {"Reality","Power","Time","Space","Mind","Soul"};
        
        HashMap<String, String> map =  new HashMap<String, String>();
        for(int i = 0; i < 6; i++){
            map.put(color[i], stones[i]);
        }
        
        int n = scan.nextInt();
        for(int i = 0; i < n; i++){
            String input = scan.next();
            map.remove(input);
        }
        
        System.out.println(6-n);
        for(String st : map.values()){
            System.out.println(st);
        } 
    }
    
}
