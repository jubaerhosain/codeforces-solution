import java.util.*;


public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        long location = 1, time = 0;
        for(int i = 1; i <= m; i++){
            int workHouse = scan.nextInt();
            if(location <= workHouse){
                time += workHouse - location;
                location = workHouse;
            }
            else{
                time += n -location + workHouse;
                location  = workHouse;
            }
        }
        
        System.out.println(time);
    }
    
    
}

