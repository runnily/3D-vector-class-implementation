CXX=g++

../test: Bin.o Vector3D.o Test.o 
	$(CXX) -o ../test Test.o Bin.o Vector3D.o

Bin.o: Bin.cpp Bin.h
	$(CXX) -c Bin.cpp

Vector3D.o: Vector3D.cpp Vector3D.h
	$(CXX) -c Vector3D.cpp

Test.o: Test.cpp 
	$(CXX) -c Test.cpp

clean: 
	rm *.o
	../test