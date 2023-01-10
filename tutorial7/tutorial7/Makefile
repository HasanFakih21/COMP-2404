p1: StoreLocation.o Location.o
	g++ -o a3 StoreLocation.o Location.o

StoreLocation.o: StoreLocation.h StoreLocation.cc Location.h
	g++ -c StoreLocation.cc
	
Location.o: Location.cc Location.h Product.h
	g++ -c Location.cc

clean:
	rm -f p1 *.o	

