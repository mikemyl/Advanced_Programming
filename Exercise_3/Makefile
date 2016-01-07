all: main

clean: 
	rm *.o main

C1.o: C1.cpp
	g++ -Wall -g -c C1.cpp

C2.o: C2.cpp
	g++ -Wall -g -c C2.cpp

C3.o: C3.cpp
	g++ -Wall -g -c C3.cpp

C4.o: C4.cpp C1.cpp C2.cpp
	g++ -Wall -g -c C4.cpp C1.cpp C2.cpp 

C5.o: C5.cpp C2.cpp C3.cpp
	g++ -Wall -g -c C5.cpp C2.cpp C3.cpp

C6.o: C6.cpp C4.cpp C2.cpp
	g++ -Wall -g -c C6.cpp C4.cpp C2.cpp

main.o: main.cpp
	g++ -Wall -g -c main.cpp

main: main.o C6.o C5.o C4.o C3.o C2.o C1.o
	g++ -Wall -g -fdump-class-hierarchy -o main main.o C6.o C5.o C4.o C3.o C2.o C1.o
