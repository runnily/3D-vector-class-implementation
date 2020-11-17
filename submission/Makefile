CXX=g++

test: Bin.o Vector3D.o Test.o 
	$(CXX) Test.o Bin.o Vector3D.o -o test

Bin.o: Bin.cpp Bin.h
	$(CXX) -c Bin.cpp

Vector3D.o: Vector3D.cpp Vector3D.h
	$(CXX) -c Vector3D.cpp

Test.o: Test.cpp TestVector3D.h TestBin.h
	$(CXX) -c Test.cpp

clean: 
	rm *.o test