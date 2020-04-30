import java.util.*;

public class Solution{
    static Scanner scan = new Scanner(System.in);

    public static void main(String []args){
        int n = scan.nextInt();
        int k = scan.nextInt();
        
        Queue<Integer> queue = new LinkedList<Integer>();
        Set<Integer> set = new HashSet<Integer>();
        
        for(int i = 1; i <= n; i++){
            int input = scan.nextInt();
            
            if(!set.contains(input)){
                queue.add(input);
                set.add(input);
                
                if(queue.size() > k){
                    int val = queue.peek();
                    queue.remove();
                    set.remove(val);
                }
            }
        }
        
        //Reverse queue
        Stack<Integer> stack = new Stack<Integer>();
        while (!queue.isEmpty()) { 
            stack.add(queue.peek()); 
            queue.remove(); 
        } 
        
        System.out.println(stack.size());
        while(!stack.isEmpty()){
            System.out.print(stack.peek() + " ");
            stack.pop();
        }
    }
}



