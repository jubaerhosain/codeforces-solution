import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String args[]){
        int n = scan.nextInt();
        String[] seats = new String[n];
        
        boolean hasEmpty = false;
        
        for(int i = 0; i < n; i++){
            seats[i] = scan.next();
            
            if(!hasEmpty){
                char[] row = seats[i].toCharArray(); 
                
                if(row[0] == 'O' && row[1] == 'O'){
                    hasEmpty = true;
                    row[0] = '+';
                    row[1] = '+';
                    seats[i] = String.valueOf(row);
                }
                else if(row[3] == 'O' && row[4] == 'O'){
                    hasEmpty = true;
                    row[3] = '+';
                    row[4] = '+';
                    seats[i] = String.valueOf(row);
                }
            }
        }
        
        if(hasEmpty){
            System.out.println("YES");
            
            for(int i = 0; i < n; i++){
                System.out.println(seats[i]);
            }
        }
        else{
            System.out.println("NO");
        }
        
    }
    
}
