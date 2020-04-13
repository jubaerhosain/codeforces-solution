import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        
        map.put(scan.next(), 0);
        System.out.println("OK");
        
        for(int i = 1; i < n; i++){
            String key = scan.next();
            
            if(!map.containsKey(key)){
                map.put(key, 0);
                System.out.println("OK");
            }
            else{
                System.out.println(key + (map.get(key)+1));
                map.put(key, map.get(key)+1);
            }
        }
    }
    
    
}

