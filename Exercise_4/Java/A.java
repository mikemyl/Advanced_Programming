import java.util.Random;
import java.util.List;

public class A {

    private final LinkedList nodeList;

    public A() {
        nodeList = new LinkedList();
    }

    public void init(int size) {
        for (int i=0; i< size; i++) {
            Node node = new Node();
            if (doConnect()) {
                nodeList.add(node);
            }
        }
    }

    private boolean doConnect() {
        Random random = new Random();
        return random.nextBoolean();
    }

    private void benchmark(int operations) {
        for (int i = 0; i < operations; i++) {
            nodeList.get(nodeList.size() - 1);
        }
    }


    public static void main(String[] args) {
        A a = new A();
        System.out.println("Initializing...");
        a.init(120000000);
        long startTime = System.currentTimeMillis();
        int operations = 1500;
        System.out.println("Benchmarking " + operations + " Operations.");

        a.benchmark(operations);
        long endTime = System.currentTimeMillis();
        System.out.println("Time elapsed (secs): " + (endTime - startTime)/1000);
    }
}
