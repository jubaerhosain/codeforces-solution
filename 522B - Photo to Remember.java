import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]) {
        int n = scan.nextInt();
        int[][] arr = new int[n][2];    //stores the width and height of all friends
        
        int h1 = 0, h2 = 0;        //maximum and second maximum height  
        int width = 0;
        for(int i = 0; i < n; i++) {
            int wi = scan.nextInt();
            int hi = scan.nextInt();
            
            width += wi;
            arr[i][0] = wi;
            arr[i][1] = hi;
            
            //finding max and second max height
            if(hi > h1) {
                h2 = h1;
                h1 = hi;
            } else if(hi > h2) {
                h2 = hi;
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(arr[i][1] == h1) {
                System.out.print(((width-arr[i][0])*h2) + " ");
            } else {
                System.out.print(((width-arr[i][0])*h1) + " ");
            }
        }
    }
}
