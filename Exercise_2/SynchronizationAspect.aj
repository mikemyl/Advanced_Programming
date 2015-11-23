public aspect SynchronizationAspect {

    private int readers;

    pointcut read():
        call (int Stack.top());

    pointcut write():
        call (void Stack.push(int)) ||
        call (int Stack.pop());

    before() : read() {
        enterRead();
    }

    before() : write() {
        enterWrite();
    }

    after() returning: read() {
        exitRead();

    }

    after() returning: write() {
        exitWrite();
    }

    private synchronized void enterRead() {
        while (readers == -1)
            try {
                wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                continue;
            }
        readers++;
    }

    private synchronized void enterWrite() {
        while (readers != 0)
            try {
                wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
                continue;
            }
        readers = -1;
    }
    private synchronized void exitRead() {
        readers--;
        if (readers == 0)
            notify();
    }

    private synchronized void exitWrite() {
        readers = 0;
        notifyAll();
    }
}
