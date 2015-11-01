all: main

clean:
	rm *.o main

Alarm.o: Alarm.cpp Alarm.hpp AlarmObserver.hpp
	g++ -Wall -c Alarm.cpp

AlarmObserver.o: AlarmObserver.cpp AlarmObserver.hpp
	g++ -Wall -c AlarmObserver.cpp

main: main.o Alarm.o AlarmObserver.o
	g++ -Wall Alarm.o AlarmObserver.o main.o -o main

main.o: main.cpp
	g++ -Wall -c main.cpp

