import java.util.Random;


public class TestcaseGenerator {
    
    public static void main(String[] args) {

        if (args.length < 2) {
            System.out.println("\nUsage: java -jar TestcaseGenerator <count> <upperbound>\n");
            System.out.println("Example: java -jar TestcaseGenerator 100 42 will generate 100 numbers between 0-41");
            return;
        }
        int n = Integer.parseInt(args[0]);
        int upperBound = Integer.parseInt(args[1]);
        
        Random rand = new Random();
        
        for (int i = 0; i < n; i++) {
            System.out.println(rand.nextInt(upperBound) + "|" + rand.nextInt(upperBound));
        }
    }

}
