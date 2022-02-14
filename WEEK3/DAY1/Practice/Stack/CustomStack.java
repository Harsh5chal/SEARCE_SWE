import java.util.*;

public class PracticeCustomStack {
  protected int[] data;
  private static final int DEFAULT_SIZE = 10;
  
  int ptr = -1;
  
  public PracticeCustomStack(){
    this(DEFAULT_SIZE);
  }
  
  public PracticeCustomStack(int size){
    this.data = new int[size];
  }
  
  //Push
  public boolean push(int item){
    //IF array is full
    if (isFull()){
      System.out.println("Stack is Fulls");
      return false;
    }
    
    ptr++;
    data[ptr] = item;
    return true;
  }
  
  //Pop
  public int pop() throws StackException{
    if (isEmpty()){
      throw new StackException("Cannot Pop from an empty stack");
    }
    int removed = data[ptr];
    ptr--; //because we have to shift ptr to 2nd last index
    return removed; //or return data[ptr--];
  }
  
  //Peek -- what is at the top
  public int peek() throws StackException{
    if (isEmpty()){
      throw new StackException("Cannot Peek from an empty stack");
    }
    return data[ptr];
  }
  
  //IsFull
  private boolean isFull(){
    return ptr == data.length-1; //ptr is at last index
  }
  
  //IsEmpty
  private boolean isEmpty(){
    return ptr == -1; //ptr is at last index
  }
}
