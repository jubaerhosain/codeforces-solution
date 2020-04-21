import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        char events[] = scan.next().toCharArray();
        
        int sf = 0;
        for(int i = 0; i < n-1; i++){
            if(events[i] == 'S' && events[i+1] == 'F'){
                sf++;
            }
            else if(events[i] == 'F' && events[i+1] == 'S'){
                sf--;
            }
        }
        
        if(sf >= 1){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
    
}
