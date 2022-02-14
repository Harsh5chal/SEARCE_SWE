import java.util.LinkedList;
import java.util.Queue;

class MyStack {

    Queue<Integer> q = new LinkedList<>();
    
    public void push(int x) {
        q.add(x);
        
        for(int i = 0;i< q.size()-1;i++){
            int num = q.remove();
            q.add(num);
        }
    }
    
    public int pop() {
        return q.remove();
        
    }
    
    public int top() {
        return q.peek();
    }
    
    public boolean empty() {
        return q.isEmpty();
    }
}
