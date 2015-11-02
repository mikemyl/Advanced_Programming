all: WindowsOS.o XubuntuOS.o MacOS.o Scheduler.o RandomScheduler.o ThreadedScheduler.o SchedulerVisitor.o ThreadedSchedulerVisitor.o main

clean: 
	rm *.o

WindowsOS.o: WindowsOS.cpp WindowsOS.hpp AbstractVisitor.hpp
	g++ -Wall -c WindowsOS.cpp

XubuntuOS.o: XubuntuOS.cpp XubuntuOS.hpp AbstractVisitor.hpp
	g++ -Wall -c XubuntuOS.cpp

MacOS.o: MacOS.cpp MacOS.hpp AbstractVisitor.hpp
	g++ -Wall -c MacOS.cpp

Scheduler.o: Scheduler.cpp Scheduler.hpp
	g++ -Wall -c Scheduler.cpp

RandomScheduler.o: RandomScheduler.cpp RandomScheduler.hpp
	g++ -Wall -c RandomScheduler.cpp

ThreadedScheduler.o: ThreadedScheduler.cpp ThreadedScheduler.hpp
	g++ -Wall -c ThreadedScheduler.cpp

SchedulerVisitor.o: SchedulerVisitor.cpp SchedulerVisitor.hpp
	g++ -Wall -c SchedulerVisitor.cpp

ThreadedSchedulerVisitor.o: ThreadedSchedulerVisitor.cpp ThreadedSchedulerVisitor.hpp
	g++ -Wall -c ThreadedSchedulerVisitor.cpp

RandomSchedulerVisitor.o: RandomSchedulerVisitor.cpp RandomSchedulerVisitor.hpp
	g++ -Wall -c RandomSchedulerVisitor.cpp

main.o: main.cpp
	g++ -Wall -c main.cpp

main: main.o WindowsOS.o XubuntuOS.o MacOS.o SchedulerVisitor.o ThreadedSchedulerVisitor.o RandomSchedulerVisitor.o ThreadedScheduler.o RandomScheduler.o
	g++ -Wall -g main.o WindowsOS.o XubuntuOS.o MacOS.o SchedulerVisitor.o ThreadedSchedulerVisitor.o RandomSchedulerVisitor.o Scheduler.o ThreadedScheduler.o RandomScheduler.o -o main

