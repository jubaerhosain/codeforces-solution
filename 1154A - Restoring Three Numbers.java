import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
       int array[] = new int[4];
       for(int i = 0; i < 4; i++){
           array[i] = scan.nextInt();
       }
       
       Arrays.sort(array);
       
       int a = array[3] - array[0];
       int b = array[3] - array[1];
       int c = array[3] - array[2];
       
       System.out.println((a) + " " + (b) + " " + (c));
    }
    
    
}

