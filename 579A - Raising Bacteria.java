import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        long x = scan.nextLong();
        
        int count = 0;
        while(x/2!=0)
        {
            if(x%2==1)
                count++;

            x=x/2;
        }
    
        System.out.println(count+1);
    }
    
}

