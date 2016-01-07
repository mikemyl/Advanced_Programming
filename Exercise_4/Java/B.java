import java.util.Random;

/**
 * Created by milonaki on 22/12/2015.
 */
public class B {

    private final LinkedList nodeList;

    public B() {
        nodeList = new LinkedList();
    }

    public void init(int size) {
        for (int i=0; i< size; i++) {
            Node node = new Node();
            node.next = null;
            nodeList.add(node);
        }
    }


    private void benchmark(int operations) {
        Random random = new Random();
        for (int i = 0; i < operations; i++) {
            Node newNode = new Node();
            newNode.next = null;
            nodeList.add(newNode);
            nodeList.get(42);
        }
    }

    static long getFreeMemory () {
        // waits for free memory measurement to stabilize
        long init = Runtime.getRuntime().freeMemory(), init2;
        int count = 0;
        do {
            System.out.println("waiting..." + init);
            System.gc();
            try { Thread.sleep(250); } catch (Exception x) { }
            init2 = init;
            init = Runtime.getRuntime().freeMemory();
            if (init == init2) ++ count; else count = 0;
        } while (count < 5);
        System.out.println("ok..." + init);
        return init;
    }

    public static void main(String[] args) {
        B b = new B();
        System.out.println("Initializing...");
        b.init(70000000);
        long startTime = System.currentTimeMillis();
        int operations = 50500000;
        System.out.println("Benchmarking " + operations + " Operations.");
        b.benchmark(operations);
        long endTime = System.currentTimeMillis();
        System.out.println("Time elapsed (secs): " + (endTime - startTime)/1000);
    }
}
