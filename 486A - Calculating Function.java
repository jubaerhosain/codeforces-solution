import java.util.Scanner;

public class Solution{
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        long n = scan.nextLong();
        long numberOfOdd, numberOfEven;
        
        if(n%2 == 0){
            numberOfOdd = numberOfEven = n/2;
        }
        else{
            numberOfOdd = n/2 + 1;
            numberOfEven = n/2;
        }
        
        long oddSum = numberOfOdd * numberOfOdd;
        long evenSum = numberOfEven * (numberOfEven + 1);
        
        System.out.println(evenSum - oddSum);
    }
    
}
