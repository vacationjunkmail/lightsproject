#classes_example: main.o #advanced_classes.o
#	g++ main.o -o main
#	g++ advanced_classes.o -o advanced_classes

main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp

#advanced_classes.o: advanced_classes.cpp
#	g++ -c advanced_classes.cpp

clean:
	rm -rf *.o  main advanced_classes
