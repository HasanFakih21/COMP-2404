all: p1 p2 p3

p1: p1.o
	g++ -o p1 p1.o
p1.o: p1.cc
	g++ -c p1.cc
p2: p2.o
	g++ -o p2 p2.o
p2.o: p2.cc
	g++ -c p2.cc
p3: p3.o
	g++ -o p3 p3.o
p3.o: p3.cc
	g++ -c p3.cc
clean:
	rm -f p1 p2 p3 *.o
