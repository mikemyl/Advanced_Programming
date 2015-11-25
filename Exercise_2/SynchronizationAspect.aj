
public aspect SynchronizationAspect {

    private RWLock Stack.rwlock;
    
    pointcut construct(Stack stack):
        initialization(Stack.new(..)) &&
        target(stack);

    pointcut read(Stack stack):
        call (int Stack.top()) &&
        target(stack);

    pointcut write(Stack stack):
        (call (void Stack.push(int)) ||
        call (int Stack.pop())) &&
        target(stack);
    
    after(Stack stack) : construct(stack) {
        stack.rwlock = new RWLock();
    }
        

    before(Stack stack) : read(stack) {
        stack.rwlock.enterRead();
    }

    before(Stack stack) : write(stack) {
        stack.rwlock.enterWrite();
    }

    after(Stack stack) returning: read(stack) {
        stack.rwlock.exitRead();
    }

    after(Stack stack) returning: write(stack) {
        stack.rwlock.exitWrite();
    }

}
