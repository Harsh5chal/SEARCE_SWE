package WEEK3.DAY1.Practice.Queues;
import java.util.*;

public class iterateQueue {
    public static void main(String[] args) {
        Queue<String> q = new LinkedList<>();
        
        q.add("Harsh");
        q.add("Panchal");
        q.add("SWE");

        Iterator iterator = q.iterator();

        while (iterator.hasNext()) {
            System.out.println(iterator.next() + " ");
        }
    }
}
