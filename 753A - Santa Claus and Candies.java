import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int n = scan.nextInt();
        
        int i = 1;
        List<Integer> list = new ArrayList<>();
        while(n  >= i) {
            list.add(i);
            n -= i;
            i++;
        }
        
        System.out.println(list.size());
        for(i = 0; i < list.size()-1; i++) {
            System.out.print(list.get(i) + " ");
        }
        System.out.println(list.get(i)+n);
    }
}
