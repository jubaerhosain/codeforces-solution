import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int n = scan.nextInt();
        char s[] = scan.next().toCharArray();
        
        int a = 0, d = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'A'){
                a++;
            }
            else{
                d++;
            }
        }
        
        if(a == d){
            System.out.println("Friendship");
        }
        else if(d > a){
            System.out.println("Danik");
        }
        else{
            System.out.println("Anton");
        }
    }
    
}
