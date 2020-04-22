import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        Integer[] marks = new Integer[n];
        
        for(int i = 0; i < n; i ++){
            int sum = 0;
            for(int j = 0; j < 4; j++){
                sum += scan.nextInt();
            }
            
            marks[i] = sum;
        }
        
        int thomasMark = marks[0];
        Arrays.sort(marks, Collections.reverseOrder());
        
        for(int i = 0; i < n; i++){
            if(marks[i] == thomasMark){
                System.out.println(i+1);
                break;
            }
        }
    }
    
}
