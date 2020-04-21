// I have used counting sort. other sorting tecnique is not suitable for this problem

import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    static int array[] = new int[200009];
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int sorted[] = new int[n];
        
        for(int i = 0; i < n; i++){
            array[scan.nextInt()]++;
        }
        
        int k = 0;
        for(int i = 0; i < array.length; i++){
            for(int j = 0; j < array[i]; j++){
                sorted[k++] = i;
            }
        }
        
        long no = 1;
        for(int i = 0; i < n; i++){
            if(sorted[i] >= no){
                no++;
            }
        }
        
        System.out.println(no-1);
    }
    
}
