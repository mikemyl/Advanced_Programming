all: main

clean:
	rm *.o main

Publisher.o: Publisher.cpp Publisher.hpp AbstractSubscriber.hpp
	g++ -Wall -c Publisher.cpp

AbstractSubscriber.o: AbstractSubscriber.hpp
	g++ -Wall -c AbstractSubscriber.hpp

Siren.o: Siren.cpp Siren.hpp AbstractSubscriber.hpp 
	g++ -Wall -c Siren.cpp

Keypad.o: Keypad.cpp Keypad.hpp AbstractSubscriber.hpp 
	g++ -Wall -c Keypad.cpp

Mailer.o: Mailer.cpp Mailer.hpp AbstractSubscriber.hpp 
	g++ -Wall -c Mailer.cpp

Alarm.o: Alarm.cpp Alarm.hpp Publisher.hpp
	g++ -Wall -c Alarm.cpp

main: main.o Alarm.o Siren.o Mailer.o Keypad.o Publisher.o
	g++ -Wall Alarm.o Mailer.o Keypad.o Siren.o main.o Publisher.o -o main

main.o: main.cpp
	g++ -Wall -c main.cpp

