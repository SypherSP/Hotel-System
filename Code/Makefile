all:Welcome Receptionist ResturantManager Customer Waiter Room 

test:Room Person Employee Receptionist Customer Welcome test.cpp
	g++ room.o person.o employee.o receptionist.o customer.o welcome.o test.cpp -o test.exe

Person:person.h person.cpp
	g++ -c person.cpp

Employee:employee.h employee.cpp
	g++ -c employee.cpp

Room:room.h room.cpp
	g++ -c room.cpp

Receptionist:receptionist.h receptionist.cpp	
	g++ -c receptionist.cpp

Customer:customer.h customer.cpp	
	g++ -c customer.cpp

Welcome:welcome.h welcome.cpp 
	g++ -c welcome.cpp

Waiter:waiter.h waiter.cpp
	g++ -c waiter.cpp

RestaurantManager:restaurantmanager.h restaurantmanager.cpp
	g++ restaurantmanager.cpp

clean:
	del -f *.o test.exe
