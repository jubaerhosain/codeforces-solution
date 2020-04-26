import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        long d1 = scan.nextLong();
        long d2 = scan.nextLong();
        long d3 = scan.nextLong();
        
        long min = Math.min(d1, d2);
        long distance = min;
        if(d1+d2 > d3){
            distance += d3;
            if(d3+min < Math.max(d1, d2)){
                distance += d3 + min;
            }
            else{
                distance += Math.max(d1, d2);
            }
        }
        else{
            distance += d1+d2 + Math.max(d1, d2);
        }
        
        System.out.println(distance);
    }
    
}
