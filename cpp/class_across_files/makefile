main: main.o user.o
	g++ main.o user.o -o main

main.o:main.cpp
	g++ -c main.cpp

user.o: user.cpp
	g++ -c user.cpp

#main: main.o
#	g++ main.o -o main

#main.o: main.cpp
#	g++ -c main.cpp

clean:
	rm -rf *.o main
