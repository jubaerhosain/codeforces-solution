import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int b = scan.nextInt();
        int boys[] = new int[b];
        
        for(int i = 0; i < b; i++){
            boys[i] = scan.nextInt();
        }
        
        int g = scan.nextInt();
        int girls[] = new int[g];
        
        for(int i = 0; i < g; i++){
            girls[i] = scan.nextInt();
        }
        
        Arrays.sort(boys);
        Arrays.sort(girls);
        
        int counter = 0;
        for(int i = 0; i < b; i++){
            for(int j = 0; j < g; j++){
                if(Math.abs(boys[i] - girls[j]) <= 1){
                    counter++;
                    girls[j] = 1000;
                    break;
                }
            }
        }
        
        System.out.println(counter);
    }
    
}

