#ifndef B_HPP
#define B_HPP

class B {
    public:
        B();
        ~B();
        void init(int);
        void benchmark(int);
    
    private:
        LinkedList *node_list;
};

#endif
