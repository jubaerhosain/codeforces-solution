import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        int numberOfClick = 0;
        
        while(n != m){
            if(m > n){
                if(m%2 == 0){
                    m /= 2;
                    numberOfClick++;
                }
                else{
                   m++;
                   numberOfClick++;
                }
            }
            if(n > m){
                m++;
                numberOfClick++;
            }
        }
        
        System.out.println(numberOfClick);
    }
}
 
