//Print Linked List
public class LinkedList{
    Node head;
    static class Node{
        int data;
        Node next;

        Node(int val){
            data = val;
            next = null;
        }
    }

    public static LinkedList insertAttail(LinkedList list, int val){
        Node n = new Node(val);
        n.next = null;

        if(list.head == null){
            list.head = n;
        }
        else{
            Node temp = list.head;

            while(temp.next != null){
                temp = temp.next;
            }

            temp.next = n;
        }
        return list;
    }
    
    public static void printll(LinkedList list){
        Node temp = list.head;

        while(temp != null){
            System.out.print(temp.data + " ");

            temp = temp.next;
        }
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        list = insertAttail(list, 2);
        list = insertAttail(list, 3);
        list = insertAttail(list, 5);
        printll(list);
    }

}
