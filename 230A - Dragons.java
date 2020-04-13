import java.util.*;


public class Solution{
    static class Pair{
        public int x, y;
        Pair(int x, int y){
            this.x = x;
            this.y = y;
        }
    }
    static Scanner scan = new Scanner(System.in);
    
    public static void main(String args[]){
        int s = scan.nextInt();
        int n = scan.nextInt();
        Pair array[] = new Pair[n];
        
        for(int i = 0; i < n; i++){
            int x = scan.nextInt();
            int y = scan.nextInt();
            
            array[i] = new Pair(x,y);
        }
        
       Arrays.sort(array, new Comparator<Pair>(){
           public int compare(Pair o1, Pair o2){
               return (o1.x > o2.x) ? 1 : -1;
           }
       });
       
       boolean win = true;
       for(int i = 0; i < n; i++){
           if(s > array[i].x){
               s += array[i].y;
           }
           else{
               win = false;
               break;
           }
       }
       
       if(win){
           System.out.println("YES");
       }
       else{
           System.out.println("NO");
       }
    }
        
}
