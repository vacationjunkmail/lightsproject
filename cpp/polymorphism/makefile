main: main.o teacher.o user.o student.o
	g++ main.o teacher.o user.o student.o -o main

main.o:main.cpp
	g++ -c main.cpp

teacher.o: teacher.cpp
	g++ -c teacher.cpp

student.o: student.cpp
	g++ -c student.cpp
	
user.o: user.cpp
	g++ -c user.cpp


clean:
	rm -rf *.o main
