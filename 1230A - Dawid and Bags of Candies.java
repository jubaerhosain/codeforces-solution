import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int array[] = new int[4];
        
        for(int i = 0; i < n; i++){
            array[i] = scan.nextInt();
        }
        
        Arrays.sort(array);
        
        String ans = "NO";
        if(array[0] + array[1] + array[2] == array[3] || array[0] + array[3] == array[1] + array[2]){
            ans = "YES";
        }
        
        System.out.println(ans);
    }
    
}
