import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        int number[] = new int[n];
        
        for(int i = 0; i < n; i++){
            number[i] = scan.nextInt();
        }
        
        int sum1 = 0, sum2 = 0;
        for(int i = 0, person = 1; i < n; person++){
            if(person%2 == 1){
                if(number[i] > number[n-1]){
                    sum1 += number[i];
                    i++;
                }
                else{
                    sum1 += number[n-1];
                    n--;
                }
            }
            else{
                if(number[i] > number[n-1]){
                    sum2 += number[i];
                    i++;
                }
                else{
                    sum2 += number[n-1];
                    n--;
                }
            }
        }
        
        System.out.println(sum1 + " " + sum2);
    }
    
}
