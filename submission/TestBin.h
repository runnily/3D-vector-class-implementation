#define NO_BINS 6
#define NO_BIN_TEST 7
#ifndef BIN_HEADER
#define BIN_HEADER

#include "Bin.h"

#endif
//Helper function below:

/*
* assertEqualsBin: A helper funtion. This is used to check whether two bins
                   have the same value. Two bins are equal if they have the 
*                  same class
* Input:
*   b (Bin): The bin provided by the class
*   expectedIndex (Bin): The expected index of bin
*   expectedSize (Bin): The expected index of size
* Output:
*   (bool) denotes if the two bins are equal
*/
bool assertEqualBin(Bin b, float expectedIndex, float expextedSize);

/*
* add: A helper fundtion. This is used at add elements for a given
*      bin
* Input:
*   b (Bin): The bin provided
*   maxSize (int): The size of the bin
* Output:
*   (b): The bin added with the apprioate elements
*/
Bin add(Bin b,int maxSize);

/*
* testCpyConstructor: Testing the copy constructor within Bin class.
* Expected pstTest = |(1,1,1)|
*                    |(2,1,1)|
*                    |(4,1,1)|
*                    |(5,1,1)|
* Expected cpyTest = |(1,1,1)|
*                    |(2,1,1)|
*                    |(3,1,1)|
*                    |(4,1,1)|
*                    |(5,1,1)|
* Expected -> When I remove an element from an object bin
*             it does not directly affect/change prior bin
*             object is was copied from.
*/
bool testCpyConstructor();

/*
* TestAssignmentOp: testing the assignment operator in Bin class
* Expected normalTest =  |(1,1,1)|
*                        |(2,1,1)|
*                        |(3,1,1)|
*
* Expected errorTest =   |(1,1,1)|
*                        |(2,1,1)|
* Expected -> (Normal)
*             When I assign a Bin object to a Bin object it returns
*             The correct bin. 
*             (Error)
*             When I assign a Bin object to the same
*             Bin object it returns the same Bin Object
*/
bool testAssignmentOp();

/*
* testXComponet: testing the getX() function in Bin class
* Expected normal: 3        Input: getX(2)      Enviroment: (Size = 3)
* Expected range: 0.0       Input: getX(-1)
*/
bool testXComponetBin();

/*
* testYComponet: testing the getY() function in Bin class
* Expected normal: 1        Input: getX(1)      Enviroment: (Size = 2)
* Expected range: 0.0       Input: getX(2)
*/
bool testYComponetBin();

/*
* testZComponet: testing the getZ() function in Bin class
* Expected normal: 2        Input: getZ(1)      Enviorment: (Size = 2 )
* Expected range: 0.0       Input: getZ(5)
*/
bool testZComponetBin();

/*
* testAddBin: testing add function in the Bin class
* normal values: We have bin sizes of 6 Test Bin objects which have the sizes
*                n = 0, 1, 2, 3 ,4, 5 respectivly. We are testing that that the
*                add function works correctly to add n number of elements when 
*                our bin size is within range. 
*                
* Expected testBins[0] = Nothing 
* 
* Expected testBins[1] = |(1,1,1)| 
* 
* Expected testBins[2] = |(1,1,1)| 
*                        |(2,1,1)|
* 
* Expected testBins[3] = |(1,1,1)| 
*                        |(2,1,1)|
*                        |(3,1,1)|
* 
* Expected testBins[4] = |(1,1,1)|
*                        |(2,1,1)|
*                        |(3,1,1)|
*                        |(4,1,1)|
*
* Expected testBins[5] = |(1,1,1)|
*                        |(2,1,1)|
*                        |(3,1,1)|
*                        |(4,1,1)|
*                        |(5,1,1)|
* range values: We have bin sizes of 6 test Bin objects which have the the sizes
*               n = 0, 1, 2, 3, 4, 5 respectivly. We are testing that the add function
*               works correctly to add n+1 number off elements when our bin size
*               is out of range.
* Expected testBins2[0] = |(1,1,1)|
* 
* Expected testBins2[1] = |(1,1,1)|
*                         |(2,1,1)|
* 
* Expected testBins2[2] = |(1,1,1)|
*                         |(2,1,1)|
*                         |(3,1,1)|
* 
* Expected testBins2[3] = |(1,1,1)|
*                         |(2,1,1)|
*                         |(3,1,1)|
*                         |(4,1,1)|
* 
* Expected testBins2[4] = |(1,1,1)|
*                         |(2,1,1)|
*                         |(3,1,1)|
*                         |(4,1,1)|
*                         |(5,1,1)|
*
* Expected testBins2[5] = |(1,1,1)|
*                         |(2,1,1)|
*                         |(3,1,1)|
*                         |(4,1,1)|
*                         |(5,1,1)|
*                         |(6,1,1)|
*/
bool testAddBin();


/*
* testRemoveBin: Testing the remove function in Bin class
*
* normal values: Testing we can remove element, when elements exits within the 
*                Bin object.
* Expected testBins[0] = 
* 
* Expected testBins[1] = 
* 
* Expected testBins[2] = |(1,1,1)|
* 
* Expected testBins[3] = |(1,1,1)|
*                        |(3,1,1)|
* 
* Expected testBins[4] = |(1,1,1)|
*                        |(2,1,1)|
*                        |(4,1,1)|
*
* Expected testBins[5] = |(1,1,1)|
*                        |(2,1,1)|
*                        |(4,1,1)|
*                        |(5,1,1)|
*
* range values: Testing remove function works correctly, when the element specified
*               to be removed is not within the range of bin size.
*
* Expected testBins[0] = |(1,1,1)|
* 
* Expected testBins[1] = |(1,1,1)|
*                        |(2,1,1)|
* 
* Expected testBins[2] = |(1,1,1)|
*                        |(2,1,1)|
*                        |(3,1,1)|
* 
* Expected testBins[3] = |(1,1,1)|
*                        |(2,1,1)|
*                        |(3,1,1)|
*                        |(4,1,1)|
* 
* Expected testBins[4] = |(1,1,1)|
*                        |(2,1,1)|
*                        |(3,1,1)|
*                        |(4,1,1)|
*                        |(5,1,1)|
*
* Expected testBins[5] = |(1,1,1)|
*                        |(2,1,1)|
*                        |(3,1,1)|
*                        |(4,1,1)|
*                        |(5,1,1)|
*                        |(6,1,1)|
*
* Error test: Testing the remove function works correctly, when we try to remove
*             from a bin, which has no elements.
* Expected test = |0,0,0|
*                 |0,0,0|
*                 |0,0,0|
*                 |0,0,0| 
*/
bool testRemoveBin();