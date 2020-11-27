CONTENTS
1. FILES AND EXPLANATION
2. COMPILING TEST AND APPLICATION
3. OPTIMISATION TECHNIQUES USED
4. UNDERSTANDING THE TEST FILES
------------------------------------------------------------------------------
FILES AND EXPLANATION
9 files belong to this project.
(1) Bin.h : Contains the classss definition of bin
(2) Bin.cpp : The implementation of bin
(3) Vector3D.h : Contains class definitions of vector
(4) Vector3D.cpp : The implementation of vector
(5) TestBin.h : Contains function definitions for testing the bin class
(6) TestVector3D.h : Contains function definitions for testing the vector class
(7) Test.cpp : This implements function declarations within testBin and testVector header files
(8) Makefile : This is to compile the program
(9) test_output.txt : This is an example of the test output.
------------------------------------------------------------------------------
COMPILING TEST AND APPLICATION
Within this directory, there should be a Makefile. This will allow you to compile the test program. 
The relevant make command will create an output application.

To compile tests, enter the following at the command line prompt in the  submission directory:
    # make

To clean up before compiling do:
    # make clean

Assuming compilation is done. The following binary output application and-o files will be included in this directory
    Test.o    
    Vector3D.o    
    Bin.o     
    test (The output application)

Within the command line you could run:    
    # ./test 
    This would run the test file

OR you could run    
    # ./test > test_output.txt
This would allow the output of the test to show within the test_output.txt file.

------------------------------------------------------------------------------
OPTIMISATION TECHNIQUES USED
(1) Within the Vector3D and Bin3D class I used an initializer list. If I did not 
    use an initializer list the base class will get constructed first. However, 
    using the initializer list I the variables where initialised first, then 
    the class was constructed.

(2) I use Initialization over Assignment where possible within my Vector3D and Bin classes. 
    I initialize a variable (Vector 3D *temp etc) at the moment it's declared. Initializing 
    an object invokes the object's copy constructor only. Defining and then assigning an 
    object invokes both the default constructor and then the assignment operator, 
    which may take longer.

(3) Within my Bin class. For the add function, instead of increasing the size by one when 
    the array becomes full. I double to array size. This would mean the array does not get 
    full very quickly and less operations to be frequently performed

(4) Within my Bin class. For the assignment operator and the copy constructor. Instead of 
    passing an object by value, I passed it by reference. This is because passing my vale 
    requires the entire object to be copied, whereas passing by reference does not invoke
    a copy constructor.
------------------------------------------------------------------------------
UNDERSTANDING THE TEST FILES

There are 3 test files     

(1) TestVector3D.h : Includes function declarations for testing the vector class    
(2) TestBin.h : Includes function declarations for testing the bin class    
(3) Test.cpp : Implements these functions

TestBin.h will include comments on what it is testing and the expected outcome, 
to get moreunderstanding of what Test.cpp is testing look within the TestBin.h file.

TestVector3D.h will include comments on what it is testing and the expected outcome. 
To get aa better understanding of what Test.cpp is testing look within the TestVector3D.h file.

Test.cpp implements TestVector3D.h function declarations. It has a function called "runAllVectorTests" which runs 
all the tests for testing the vector class. It does this for 1000 different vectors.

Test.cpp implementation TestBin.h function declarations. It has a function called "runAllBinTests" which runs all 
the tests for the Bin class. It does this for a normal value input of 5 bins with sizes (0,1,2,3,4,5). 
In addition to another range value input of 5 bins with sizes (1,2,3,4,5,6). 
