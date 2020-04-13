import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            String s = scan.next();
            
            switch(s){
                case "Tetrahedron" : 
                    sum += 4;
                    break;
                case "Cube" : 
                    sum += 6;
                    break;
                case "Octahedron" : 
                    sum += 8;
                    break;
                case "Dodecahedron" : 
                    sum += 12;
                    break;
                case "Icosahedron" : 
                    sum += 20;
                    break;
            }
        }
        
        System.out.println(sum);
    }
    
}
