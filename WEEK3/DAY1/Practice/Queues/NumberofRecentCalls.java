//933 Leetcode
class RecentCounter {

    Queue<Integer> q;    
    
    public RecentCounter() {
        
        q = new LinkedList<Integer>();
    }
    
    public int ping(int t) {
        while(!q.isEmpty() && q.peek() < t-3000) {
            q.remove();
        }
            q.add(t);
            return q.size();
    }
}
