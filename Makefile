CXX=g++

test: Bin.o Vector3D.o Test.o 
	$(CXX) -o test Test.o Bin.o Vector3D.o 

Bin.o: Bin.cpp Bin.h
	$(CXX) -c -Wall -pedantic Bin.cpp

Vector3D.o: Vector3D.cpp Vector3D.h
	$(CXX) -c -Wall -pedantic Vector3D.cpp

Test.o: Test.cpp TestVector3D.h TestBin.h
	$(CXX) -c -Wall -pedantic Test.cpp

clean: 
	rm *.o test