import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        boolean Andrew = false, Dmitry = false, Michal = false;
        
        int x = scan.nextInt();
        int y = scan.nextInt();
        int z = scan.nextInt();
        
        int green = scan.nextInt();
        int purple = scan.nextInt();
        int black = scan.nextInt();
        
        if(green >= x){
            Andrew = true;
            green -= x;
            
            int gp = green + purple;
            if(gp >= y){
                Dmitry = true;
                gp -= y;
                
                if(gp + black >= z){
                    Michal = true;
                }
            }
        }
        
        if(Andrew && Dmitry && Michal){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}






