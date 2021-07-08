all:Employee Person Waiter Receptionist

Test:Room Customer Welcome Receptionist test.cpp
	g++ employee.o person.o test.cpp -o test.exe

Person:person.h person.cpp
	g++ -c person.cpp

Employee:Person employee.h employee.cpp
	g++ -c employee.cpp

Waiter:Employee waiter.h waiter.cpp
	g++ -c waiter.cpp

Receptionist: Room Employee Customer receptionist.h receptionist.cpp	
	g++ -c receptionist.cpp

Room:room.h room.cpp
	g++ -c room.cpp

Customer:Person customer.h customer.cpp	
	g++ -c customer.cpp

Welcome:Customer welcome.h welcome.cpp 
	g++ welcome.cpp

clean:
	rm -f *.o Test.exe