public class RWLock {

    private int readers;

    public RWLock() {
        readers = 0;
    }

    public synchronized void enterRead() {
        while (readers == -1)
            try {
                wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                continue;
            }
        readers++;
        //System.out.println("Lock:  " + this + " Entering Read... Readers : " + readers);
    }

    public synchronized void enterWrite() {
        while (readers != 0)
            try {
                wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                continue;
            }
        readers = -1;
        //System.out.println("Lock:  " + this + " Entering Write....  Readers (should be -1) : " + readers);
    }

    public synchronized void exitRead() {
        readers--;
        if (readers == 0)
            notify();
    }

    public synchronized void exitWrite() {
        readers = 0;
        notifyAll();
    }

}
