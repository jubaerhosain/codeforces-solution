import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int array[][] = new int[4][5001];
    static int team[] = new int[4];
    
    public static void main(String args[]){
        int n = scan.nextInt();
        
        for(int i = 1; i <= n; i++){
            int t = scan.nextInt();
            
            array[t][team[t]++] = i;
        }
        
        int maxTeam = Math.min(team[1], Math.min(team[2], team[3]));
        
        if(maxTeam == 0){
            System.out.println(0);
        }
        else{
            System.out.println(maxTeam);
            
            for(int i = 0; i <  maxTeam; i++){
                System.out.println(array[1][i] + " " + array[2][i] + " " + array[3][i]);
            }
        }
    }
    
}

