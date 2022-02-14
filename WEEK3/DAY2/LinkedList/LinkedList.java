package WEEK3.DAY2.LinkedList;

public class LinkedList {
    public static void main(String[] args) {
        LinkedList<String> list = new LinkedList<String>();

        list.add("H");
        list.add("A");
        list.add("R");
        list.add("S");
        list.add("H");

        System.out.println(list);

        list.remove("R");
        list.remove("A")
        list.removeFirst();
        list.removeLast();
        System.out.println(list);
    }
}
