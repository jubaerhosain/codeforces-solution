import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int a = scan.nextInt();
        if (a > 0)
            System.out.println(a);
    else {
        int b,c;
        b=a/10;
        c=a/100*10 + a%10;
        System.out.println(Math.max(b, c));
    }
    }
    
}

