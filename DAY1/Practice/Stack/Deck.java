import java.util.Stack;
import java.util.LinkedList;
import java.util.Queue;
import java.util.*;


class PracticeDeck {
  public static void main(String[] args) {
    
	Deque<Integer> deque = new ArrayDeque<>();
    /* The ArrayDeque in Java provides a way to apply resizable-array 
    in addition to the implementation of the Deque interface.
    It is also known as Array Double Ended Queue or Array Deck.*/
    
    deque.add(89);
    deque.addLast(78);
    deque.removeFirst();
    System.out.println(deque);
  }
}
