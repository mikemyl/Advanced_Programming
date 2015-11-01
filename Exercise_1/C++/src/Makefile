all: main

clean:
	rm *.o

main: main.o Alarm.o AlarmObserver.o
	g++ -Wall Alarm.o AlarmObserver.o main.o -o main

main.o: main.cpp
	g++ -Wall -c main.cpp

Alarm.o: Alarm.cpp Alarm.h AlarmObserver.h
	g++ -Wall -c Alarm.cpp

AlarmObserver.o: AlarmObserver.cpp AlarmObserver.h
	g++ -Wall -c AlarmObserver.cpp
