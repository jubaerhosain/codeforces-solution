import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        int n = scan.nextInt();
        int k = scan.nextInt();
        
        Queue<Integer> queue = new ArrayDeque<Integer>();
        Stack<Integer> stack = new Stack<Integer>();
        for(int i = 1; i <= n; i++){
            int input = scan.nextInt();
            
            if(!queue.contains(input)){
                queue.add(input);
                stack.add(input);
                
                if(queue.size() > k){
                    int val = queue.peek();
                    queue.remove();
                    stack.remove(val);
                }
            }
        }
        
        System.out.println(stack.size());
        while (!stack.isEmpty()) { 
            System.out.print(stack.peek() + " "); 
            stack.pop(); 
        } 
    }
}



