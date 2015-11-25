import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.NoSuchElementException;

/**
 * 
 * @author Mike Milonakis
 * This class represents a stack of integers
 *
 */
public class Stack {
    private int size;
    private Node first;

    
    private static class Node{
        private int number;
        private Node next;
    }

    /**
     * Default Constructor
     * Constructs an initially empty stack
     */
    public Stack() {
        first = null;
        size = 0;
    }

    /**
     * Returns the size of the Stack
     * @return size The size of the stack
     */
    public int size() {
        return size;
    }
    
    /**
     * Checks if the stack is empty
     * @return True if empty, Else otherwise
     */
    public boolean isEmpty() {
        return first == null;
    }

    /**
     * Pushes an item at the top of the stack
     * @param number The item to be pushed
     */
    public void push(int number) {
        Node oldfirst = first;
        first = new Node();
        first.number = number;
        first.next = oldfirst;
        size++;
    }

    /**
     * Have a look at the stack's first number, without removing it
     * @return the top number of the stack
     */
    public int top() {
        if (isEmpty())
            throw new NoSuchElementException("");
        return first.number;
    }
    
    /**
     * Pop the first (top) number of the stack
     * @return item The first number of the stack
     */
    public int pop() {
        if (isEmpty()) throw new NoSuchElementException("");
        int item = first.number;        
        first = first.next;            
        size--;
        return item;                   
    }
    
    /**
     * Helper function, prints all stack numbers
     */
    public String toString() {
        StringBuilder s = new StringBuilder();
        for (int num = 0; num < size; num++)
            s.append(num + " ");
        return s.toString();
    }
    
    
    /**
     * Main method
     * This main method represents a simple client for the stack class
     * It waits for user input and executes the operations top()
     * pop(), push() based on that
     * @param args
     */
    public static void main(String[] args) {
        
        System.out.println("This is a basic integer stack implementation.");
        System.out.println("Usage:");
        System.out.println("\t    - (+ newline) corresponds to pop operation");
        System.out.println("\t    = (+ newline) corresponds to top operation");
        System.out.println("\t    <number> (+ newline) corresponds to push(number) operation");
        System.out.println("\t    EOF terminates this program");
        System.out.println("");
        
        Stack s = new Stack();
        InputStreamReader in= new InputStreamReader(System.in);
        BufferedReader input = new BufferedReader(in);
        String userInput;
        try {
            while ((userInput = input.readLine()) != null) {
                if ((!userInput.equals("-")) && (!userInput.equals("="))) { 
                    try {
                        s.push(Integer.parseInt(userInput));
                    }
                    catch (NumberFormatException e) {
                        System.out.println("Please provide either a vaild number, or '-' , '='");
                        continue;
                    }
                    System.out.println("Number successfully pushed in stack");
                }
                else if (!s.isEmpty()) {
                    if (userInput.equals("-"))
                        System.out.println(s.pop() + " ");
                    else if (userInput.equals("="))
                        System.out.println(s.top() + " ");
                    else
                        System.out.println("Unsupported Operation");
                }
                else
                    System.out.println("Cannot use top() or pop() on an empty stack..");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println("(" + s.size() + " left on stack)");
    }

}
