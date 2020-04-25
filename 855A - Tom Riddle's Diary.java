import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        List<String> list = new ArrayList<String>();
        
        
        for(int i = 0; i < n; i++){
            String input = scan.next();
            
            if(list.contains(input)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
                list.add(input);
            }
        }
    }
    
}
