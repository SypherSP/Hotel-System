all: Employee.o Person.o Waiter.o

PersonExample: person.o PersonExample.cpp
	g++ PersonExample.cpp person.cpp -o PersonExample 

Employee:Employee.o
	g++ employee.cpp 

Person.o:person.h person.cpp
	g++ -c person.cpp

Employee.o:Person.o employee.h employee.cpp
	g++ -c employee.cpp

Waiter.o:Employee.o waiter.h waiter.cpp
	g++ -c waiter.cpp

clean rm *.o PersonExample