all: driver.o country.o continent.o
	g++ -Wall driver.o country.o continent.o -o ./Driver.out

country.o : country.cpp
	g++ -Wall -c country.cpp

continent.o : continent.cpp
	g++ -Wall -c continent.cpp

driver.o: driver.cpp
	g++ -Wall -c driver.cpp

run:	
	./Driver.out

clean:
	rm -rf *.o
	rm -f *.out
	rm -f *~ *.h.gch *#

