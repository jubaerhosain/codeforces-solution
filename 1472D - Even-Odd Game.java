import java.util.*;

public class Solution {
    private static Scanner scan = new Scanner(System.in);

    public static void main(String args[]) {
        int t = scan.nextInt();
        
        while(t-- > 0) {
            int n = scan.nextInt();
            
            Queue<Integer> even = new PriorityQueue<>((a,b)->(b-a));
            Queue<Integer> odd = new PriorityQueue<>((a,b)->(b-a));
            for(int i = 0; i < n; i++) {
                int val = scan.nextInt();
                if(val%2 == 0) {
                    even.add(val);
                } else {
                    odd.add(val);
                }
            }
            
            play(even, odd);
        }
    }
    
    //**************************************************
    private static void play(Queue<Integer> even, Queue<Integer> odd) {
        if(odd.size() == 0) {
            System.out.println("Alice");
            return;
        } else if(even.size() == 0 && odd.size() == 1) {
            System.out.println("Tie");
            return;
        } else if(even.size() == 0 && odd.size() > 1) {
            System.out.println("Bob");
            return;
        }
        
        int curr = 0;
        long alice = 0, bob = 0;
        while(!even.isEmpty() && !odd.isEmpty()) {
            //Alice turn
            if(curr%2 == 0) {
                if(even.peek() >= odd.peek()) {
                    alice += even.poll();
                } else {
                    odd.poll();
                }
            } else {
                if(even.peek() <= odd.peek()) {
                    bob += odd.poll();
                } else {
                    even.poll();
                }
            }
            curr++;
        }
        
        while(!even.isEmpty()) {
            if(curr%2 == 0) {
                alice += even.poll();
            } else {
                even.poll();
            }
            curr++;
        }
        
        while(!odd.isEmpty()) {
            if(curr%2 == 0) {
                odd.poll();
            } else {
                bob += odd.poll();
            }
            curr++;
        }
        
        if(alice == bob) {
            System.out.println("Tie");
        } else if(alice > bob) {
            System.out.println("Alice");
        } else {
            System.out.println("Bob");
        }
    }
}













