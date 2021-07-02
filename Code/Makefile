all:Employee Person Waiter Receptionist

Test:Employee test.cpp	
	g++ employee.o person.o test.cpp -o Test

Person:person.h person.cpp
	g++ -c person.cpp

Employee:Person employee.h employee.cpp
	g++ -c employee.cpp

Waiter:Employee waiter.h waiter.cpp
	g++ -c waiter.cpp

Receptionist: Employee receptionist.h receptionist.cpp	
	g++ -c receptionist.cpp

clean:
	rm -f *.o Test