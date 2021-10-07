/**
 * Main class of the Java program.
 */

public class Main {
    
    
    // Linked list implementation in Java

    public static class LinkedList {
      // Creating a node
      Node head;
    }
     public static class Node {
        int value;
        Node next;
    
        Node(int d) {
          value = d;
          next = null;
        }
    }

    public static void main(String[] args) {
        LinkedList linkedList = new LinkedList();

        // Assign value values
        linkedList.head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);
    
        // Connect nodess
        linkedList.head.next = second;
        second.next = third;
    
        // printing node-value
        while (linkedList.head != null) {
          System.out.print(linkedList.head.value + " ");
          linkedList.head = linkedList.head.next;
        }
    }
}
/* 
Output: 
1 2 3  
*/
