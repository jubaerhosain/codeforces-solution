import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        char[] array = scan.next().toCharArray();
        int sizes[] = new int[(n/2)+1];
        
        int group = 0,count = 0, j = 0;
        for(int i = 0; i < n; i++){
            if(array[i] == 'B'){
                count++;
            }
            else if(count != 0){
                group++;
                sizes[j++] = count;
                count = 0;
            }
        }
        if(array[n-1] == 'B'){
            group++;
            sizes[j++] = count;
        }
        
        System.out.println(group);
        for(int i = 0; i < group; i++){
            System.out.print(sizes[i] + " ");
        }
    }
    
}
