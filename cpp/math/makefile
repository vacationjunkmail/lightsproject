math: math_stuff.o math_utls.o
	g++ math_stuff.o math_utls.o -o math

math_stuff.o: math_stuff.cpp
	g++ -c math_stuff.cpp

math_utls.o: math_utls.cpp
	g++ -c math_utls.cpp

clean:
	rm -rf *.o math
