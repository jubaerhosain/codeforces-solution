import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        int seq[] = new int[n];
        List<Integer> list = new ArrayList<Integer>();
        
        for(int i = 0; i < n; i++){
            seq[i] = scan.nextInt();
        }
        
        for(int i = 0; i < m; i++){
            list.add(scan.nextInt());
        }
        
        for(int i = 0, j = 0; i < n; i++){
            if(list.contains(seq[i])){
                System.out.print(seq[i] + " ");
            }
        }
        
        System.out.println();
    }
    
}
