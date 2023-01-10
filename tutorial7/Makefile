all: test

test: test.cc Location.o StoreLocation.o 
	g++ -o test test.cc StoreLocation.o Location.o 

StoreLocation.o: StoreLocation.h StoreLocation.cc Location.h
	g++ -c StoreLocation.cc
	
Location.o: Location.cc Location.h
	g++ -c Location.cc

clean:
	rm -f test *.o	

