import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int test = scan.nextInt();
        
        while(test-- > 0) {
            int n = scan.nextInt();
            int m = scan.nextInt();
            int x = scan.nextInt();
            int y = scan.nextInt();
            
            char[][] grid = new char[n][m];
            for(int i = 0; i < n; i++) {
                grid[i] = scan.next().toCharArray();
            }
            
            int cost = 0;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(grid[i][j] == '.') {
                        if(j+1 < m && grid[i][j+1] == '.') {
                            if(2*x < y) {
                                cost  += 2*x;
                            } else {
                                cost += y;
                            }
                            j++;
                        } else {
                            cost += x;
                        }
                    }
                }
            }
            
            System.out.println(cost);
        }
    }
}













