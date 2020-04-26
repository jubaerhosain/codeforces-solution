import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        int c = scan.nextInt();
        
        int score[] = new int[n];
        int time[] = new int[n];
        
        for(int i = 0; i < n; i++){
            score[i] = scan.nextInt();
        }
        for(int i = 0; i < n; i++){
            time[i] = scan.nextInt();
        }
        
        long limak = 0, radewoosh = 0;
        long t1 = 0, t2 = 0;
        for(int i = 0, j = n-1; i < n; i++,j--){
            t1 += time[i];
            t2 += time[j];
            
            limak += Math.max(0,  score[i] - t1*c);
            radewoosh += Math.max(0, score[j] - t2*c);
        }
        
        if(limak > radewoosh){
            System.out.println("Limak");
        }
        else if(limak < radewoosh){
            System.out.println("Radewoosh");
        }
        else{
            System.out.println("Tie");
        }
    }
    
}
