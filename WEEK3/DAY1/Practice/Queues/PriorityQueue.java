package WEEK3.DAY1.Practice.Queues;
import java.util.*;

public class PriorityQueue {
    public static void main(String[] args) {
        Queue<Integer> q = new PriorityQueue<Integer>();

        q.add(10);
        q.add(20);
        q.add(30);

        System.out.println(q.peek());
        System.out.println(q);
        System.out.println(q.poll());//Print the top element and remove it from PriorityQueue container
    }
}
