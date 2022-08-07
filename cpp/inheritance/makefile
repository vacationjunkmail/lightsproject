main: main.o teacher.o user.o
	g++ main.o teacher.o user.o -o main

main.o:main.cpp
	g++ -c main.cpp

teacher.o: teacher.cpp
	g++ -c teacher.cpp

user.o: user.cpp
	g++ -c user.cpp


clean:
	rm -rf *.o main
