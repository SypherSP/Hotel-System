all:Welcome Receptionist ResturantManager Customer Waiter Room 

Test:Room Customer Welcome Receptionist test.cpp
	g++ room.o employee.o person.o welcome.o receptionist.o test.cpp -o test.exe

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

ResturantManager:Employee restaurantmanager.h restaurantmanager.cpp
	g++ restaurantmanager.cpp



clean:
	rm -f *.o 