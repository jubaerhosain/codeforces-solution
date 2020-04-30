import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        int n = scan.nextInt();
        int k = scan.nextInt();
        
        Queue<Integer> queue = new ArrayDeque<Integer>();
        
        for(int i = 1; i <= n; i++){
            int input = scan.nextInt();
            
            if(!queue.contains(input)){
                queue.add(input);
                
                if(queue.size() > k){
                    queue.remove();
                }
            }
        }
        
        //Reverse queue
        Stack<Integer> stack = new Stack<>(); 
        while (!queue.isEmpty()) { 
            stack.add(queue.peek()); 
            queue.remove(); 
        } 
        
        System.out.println(stack.size());
        while (!stack.isEmpty()) { 
            System.out.print(stack.peek() + " "); 
            stack.pop(); 
        } 
    }
}



