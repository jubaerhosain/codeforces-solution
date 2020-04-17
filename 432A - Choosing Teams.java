import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int k = scan.nextInt();
        int students[] = new int[n];
        
        for(int i = 0;i  < n; i++){
            students[i] = scan.nextInt() + k;
        }
        
        Arrays.sort(students);
        
        int team = 0;
        for(int i = 0; i < n-2; i++){
            if(students[i+2] <= 5){
                team++;
                i += 2;
            }
        }
        
        System.out.println(team);
    }
    
}

