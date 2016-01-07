import java.util.NoSuchElementException;

/**
 * Created by milonaki on 22/12/2015.
 */
public class LinkedList {

    private Node first;
    private Node last;
    private int size;

    public int size() {
        return size;
    }

    public void add(Node node) {
        if (last == null) {
            first = node;
            last = first;
            size++;
            return;
        }
        last.next = node;
        last = last.next;
        size++;
    }

    public Node get(int index) {
        if (first == null || index >= size)
            throw new NoSuchElementException();
        Node node = first;
        int current=0;
        while (current < index) {
            node = node.next;
            current++;
        }
        return node;
    }
}

class Node {
    Node next;
}
