#ifndef Test
#define Test

#include <iostream>
using namespace std;
#include "Bin.h"
#include <cmath>

#endif

#define TEST_X 1
#define TEST_Y 1
#define TEST_Z 1
#define SCALAR 3.5
#define TEST_NO_VECTOR 12
#define NO_BINS 6

/*
* Test definition
*/
struct testDefn {string testName; int passedCases;};

/*
* <-------------------------------------------------------------------------------------------------->
* 
*                                       Testing Vector3D 
*
* <-------------------------------------------------------------------------------------------------->
*/


// Our Test classes:
/*
* testComponetentX: To test whether the getX() method in the vector class returns the correct
*                   X componet
* Input:
*   v (Vector3D): The vector your testing 
*   expected (float): Your expected x componets
* Output:   
*   (bool): denotes if the x returned from Vector3D is the same as expected
*/
bool testCompontentX(Vector3D v, float expected);

/*
* testComponetentY: To test whether the getY() method in the vector class returns the correct
*                   Y componet
* Input:
*   v (Vector3D): The vector your testing 
*   expected (float): Your expected y componets
* Output:   
*   (bool): denotes if the y returned from Vector3D is the same as expected
*/
bool testCompontentY(Vector3D v, float expected);

/*
* testComponetentZ: To test whether the getZ() method in the vector class returns the correct
*                   Z componet
* Input:
*   v (Vector3D): The vector your testing 
*   expected (float): Your expected x componets
* Output:   
*   (bool): denotes if the z returned from Vector3D is the same as expected
*/
bool testCompontentZ(Vector3D v, float expected);

/*
* testMagnitude: Testing the magnitude function in the vector class
* Input:
*   v (Vector3D): The vector your testing 
*   expected (float): Your expected magnitude
* Output:   
*   (bool): denotes if the magnitude function provided by Vector3D is expected
*/
bool testMagnitude(Vector3D v, float expected);

/*
* testAddition: Testing the addition operator in the vector class
* Input:
*   v (Vector3D): The vector your testing
*   v1 (Vector3D): The vector to be added
*   expected (Vector3D): The expected Vector
* Output:   
*   (bool): denotes if the addition operator provided by Vector3D is expected
*/
bool testAddition(Vector3D v, Vector3D v1, Vector3D expected);

/*
* testSubtraction: Testing the subtraction operator in the vector class
* Input:
*   v (Vector3D): The vector your testing
*   v1 (Vector3D): The vector to be subtracted
*   expected (Vector3D): The expected Vector
* Output:   
*   (bool): denotes if the subtraction operator provided by Vector3D is expected
*/
bool testSubtraction(Vector3D v, Vector3D v1, Vector3D expected);

/*
* testMulitplyByScalar: Testing the muplication scalar operator in the vector class
* Input:
*   v (Vector3D): The vector your testing
*   scalar (float): The scalar to be applied
*   expected (Vector3D): The expected Vector
* Output:   
*   (bool): denotes if the muplication scalar operator provided by Vector3D is expected
*/
bool testMultiplyByScalar(Vector3D v, float scalar, Vector3D expected);

/*
* testDivideByScalar: Testing the division scalar operator in the vector class
* Input:
*   v (Vector3D): The vector your testing
*   scalar (float): The scalar to be applied
*   expected (Vector3D): The expected Vector
* Output:   
*   (bool): denotes if the division scalar operator provided by Vector3D is expected
*/
bool testDivideByScalar(Vector3D v, float scalar, Vector3D expected);

/*
* testScalarProduct: Testing the scalar product operator in the vector class
* Input:
*   v (Vector3D): The vector your testing
*   v1 (Vector3D): The vector to apply with scalar product of v
*   expected (float): The expected scalar product
* Output:   
*   (bool): denotes if the scalar product operator provided by Vector3D is expected
*/
bool testScalarProduct(Vector3D v, Vector3D v1, float expected);

/*
* testVectorProduct: Testing the vector product operator in the vector class
* Input:
*   v (Vector3D): The vector your testing
*   v1 (Vector3D): The vector to apply with scalar product of v
*   expected (Vector3D): The expected vector product
* Output:   
*   (bool): denotes if the vector product operator provided by Vector3D is expected
*/
bool testVectorProduct(Vector3D v, Vector3D v1, Vector3D expected);

/*
* testUnitVector: Testing the unit function  in the vector class
* Input:
*   v (Vector3D): The vector your testing
*   expected (Vector3D): The expected  unit vector
* Output:   
*   (bool): denotes if the unit vector provided by Vector3D is expected
*/
bool testUnitVector(Vector3D v, Vector3D expected);

/*
* testOrthogonal: Testing the vector product operator in the vector class
* Input:
*   v (Vector3D): The vector your testing
*   v1 (Vector3D): The vector to check if its perpendicular
*   bool (Vector3D): The exppected boolean
* Output:   
*   (bool): denotes if the vector product operator provided by Vector3D is expected
*/
bool testOrthogonal(Vector3D v, Vector3D v1, bool expected);

bool testCompontentX(Vector3D v, float expected) {
    return (v.getX()==expected);
}

bool testCompontentY(Vector3D v, float expected) {
    return (v.getY()==expected);
}

bool testCompontentZ(Vector3D v, float expected) {
    return (v.getZ()==expected);
}

bool testMagnitude(Vector3D v, float expected) {
    return (v.magnitude()==expected);
}

bool testAddition(Vector3D v, Vector3D v1, Vector3D expected) {
    Vector3D sum = v+v1;
    return (testCompontentX(sum, expected.getX()) && testCompontentY(sum, expected.getY()) && testCompontentZ(sum, expected.getZ()));
}

bool testSubtraction(Vector3D v, Vector3D v1, Vector3D expected) {
    Vector3D sum = v-v1;
    return (testCompontentX(sum, expected.getX()) && testCompontentY(sum, expected.getY()) && testCompontentZ(sum, expected.getZ()));
}

bool testMultiplyByScalar(Vector3D v, float scalar, Vector3D expected) {
    Vector3D sum = v*scalar;
    return (testCompontentX(sum, expected.getX()) && testCompontentY(sum, expected.getY()) && testCompontentZ(sum, expected.getZ()));
}

bool testDivideByScalar(Vector3D v, float scalar, Vector3D expected) {
    Vector3D sum = v/scalar;
    return (testCompontentX(sum, expected.getX()) && testCompontentY(sum, expected.getY()) && testCompontentZ(sum, expected.getZ()));
}

bool testScalarProduct(Vector3D v, Vector3D v1, float expected) {
    float sum = v*v1;
    return (sum==expected);
}

bool testVectorProduct(Vector3D v, Vector3D v1, Vector3D expected) {
    Vector3D sum = v%v1;
    return (testCompontentX(sum, expected.getX()) && testCompontentY(sum, expected.getY()) && testCompontentZ(sum, expected.getZ()));
}

bool testUnitVector(Vector3D v, Vector3D expected) {
    Vector3D sum = v.unit();
    return (testCompontentX(sum, expected.getX()) && testCompontentY(sum, expected.getY()) && testCompontentZ(sum, expected.getZ()));
}

bool testOrthogonal(Vector3D v, Vector3D v1, bool expected) {
    return (v.orthogonal(v1)==expected);
}

float expectedMagnitude(float x, float y, float z) {
    return sqrt((x*x)+(y*y)+(z*z));
}

Vector3D expectedUnit(float x, float y, float z) {
    float mag = expectedMagnitude(x,y,z);
    if (mag==0) {
        return Vector3D(0,0,0);
    }
    return Vector3D(x/mag,y/mag,z/mag);
}

void runAllVectorTests() {
    // These test includes normal, erronous values for each method
        int numTest = 1000;
    testDefn testVectors[TEST_NO_VECTOR] = {
        {"Testing componet x", 0},
        {"Testing componet y", 0},
        {"Testing componet z", 0},
        {"Testing magnitude", 0},
        {"Testing addition", 0},
        {"Testing subtraction", 0},
        {"Testing scalar multiplication", 0},
        {"Testing scalar division", 0},
        {"Testing scalar product", 0},
        {"Testing vector division", 0},
        {"Testing unit vector", 0},
        {"Testing orthogonal", 0},
    };


    for (int x = 0; x<10; x++) {
        for (int y = 0; y<10; y++ ) {
            for (int z = 0; z<10; z++) {
                Vector3D v = Vector3D(x,y,z);
                Vector3D test = Vector3D(TEST_X,TEST_Y, TEST_Z);
                if (testCompontentX(v, x)) {
                    testVectors[0].passedCases++;
                }
                if (testCompontentY(v, y)) {
                    testVectors[1].passedCases++;
                }
                if (testCompontentZ(v, z)) {
                    testVectors[2].passedCases++;
                }
                if (testMagnitude(v, expectedMagnitude(x,y,z))) {
                    testVectors[3].passedCases++;
                }
                if (testAddition(v, test, Vector3D(x+TEST_X,y+TEST_Y,z+TEST_Z))){
                    testVectors[4].passedCases++;
                }
                if (testSubtraction(v, test, Vector3D(x-TEST_X,y-TEST_Y,z-TEST_Z))){
                    testVectors[5].passedCases++;
                }
                if (testMultiplyByScalar(v, SCALAR, Vector3D(x*SCALAR,y*SCALAR,z*SCALAR))){
                    testVectors[6].passedCases++;
                }
                if (testDivideByScalar(v, SCALAR, Vector3D(x/SCALAR,y/SCALAR,z/SCALAR))){
                    testVectors[7].passedCases++;
                }
                if (testScalarProduct(v, test, x*TEST_X+y*TEST_Y+z*TEST_Z)){
                    testVectors[8].passedCases++;
                }
                if (testVectorProduct(v, test, Vector3D(y*TEST_Z-z*TEST_Z, z*TEST_X-x*TEST_Z, x*TEST_Y-y*TEST_X))){
                    testVectors[9].passedCases++;
                }
                if (testUnitVector(v,  expectedUnit(x ,y ,z) )){
                    testVectors[10].passedCases++;
                } 
                if (testOrthogonal(v, test, (0==(x*TEST_X+y*TEST_Y+z*TEST_Z)) ) ){
                    testVectors[11].passedCases++;
                } 
            }
        }
    }

    cout << "________________________________________________\n";
    cout << "           TEST FOR VECTOR3D CLASS\n";
    cout << "________________________________________________\n";
    for (int i = 0; i<TEST_NO_VECTOR;i++){
        cout << "------------------------------------------------\n";
        cout << "       Test " << i << ": " << testVectors[i].testName << "\n";
        cout << "   successfully completed " << testVectors[0].passedCases  << "/" << numTest << " test cases\n";
        cout << "------------------------------------------------\n";
        
    }
};


/*
* <-------------------------------------------------------------------------------------------------->
* 
*                                       Testing Bin
*
* <-------------------------------------------------------------------------------------------------->
*/

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
*                add function works correctly to add nth number of elements when 
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
*               works correctly to add n+1th number off elements when our bin size
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

bool assertEqualBin(Bin b, float expectedIndex, float expectedSize) {
    if ( !(b.getSize()==expectedSize) && (b.getIndex()==expectedIndex) ) {
        return false;
    }  
    return true;
}

Bin add(Bin b, int maxSize) {
    for (int i = 0; i<maxSize; i++){
        b.add(Vector3D(i+1,TEST_Y,TEST_Z));
    }
    return b;
}

bool testCpyConstructor()  {
    Bin pstTest = Bin(5); 
    pstTest = add(pstTest, 5);
    Bin cpyTest = pstTest; 
    pstTest.remove(2);
    cout << "---------------------Test 1 ---------------------\n";
    cout << pstTest;
    cout << cpyTest;
    cout << "------------------------------------------------\n";
    return (assertEqualBin(pstTest, 3, 4) && assertEqualBin(cpyTest, 4,5));
}

bool testAssignmentOp()  {
    Bin normalTest = Bin(3);
    normalTest = add(normalTest, 3);
    cout << "---------------------Test 1 ---------------------\n";
    cout << normalTest;
    cout << "------------------------------------------------\n";

    cout << "Error values - assigning a Bin object into the same object" << ":" << endl;
    Bin errorTest = Bin(1);
    errorTest = add(errorTest, 2);
    errorTest = errorTest;
    cout << "---------------------Test 2 ---------------------\n";
    cout << errorTest;
    cout << "------------------------------------------------\n";
    return (assertEqualBin(normalTest, 2, 3) && assertEqualBin(errorTest, 1, 2));

}

bool testXComponetBin() {
    Bin test = Bin(3);
    test = add(test, 3);
    cout << "---------------------Test 1 ---------------------\n";
    float normal = test.getX(2);
    cout << test.getX(2) << endl;
    cout << "------------------------------------------------\n";

    cout << "Range value - Input of data not within array length" << ":" << endl;
    test = Bin(2);
    test = add(test, 2);
    cout << "---------------------Test 2 ---------------------\n";
    float range = test.getX(-1);
    cout << range << endl;
    cout << "------------------------------------------------\n";
    return (normal==3 && range==0);
}

bool testYComponetBin() {
    Bin test = Bin(1);
    test = add(test, 2);
    cout << "---------------------Test 1 ---------------------\n";
    float normal = test.getY(1);
    cout << normal << endl;
    cout << "------------------------------------------------\n";

    cout << "Range value - Input of data not within array length" << ":" << endl;
    test = Bin(2);
    test = add(test, 2);
    cout << "---------------------Test 2 ---------------------\n";
    float range = test.getY(2);
    cout << range << endl;
    cout << "------------------------------------------------\n";
    return (normal==1 && range==0);

}

bool testZComponetBin() {
    Bin test = Bin(1);
    test = add(test, 2);
    cout << "---------------------Test 1 ---------------------\n";
    float normal = test.getZ(1);
    cout << normal << endl;
    cout << "------------------------------------------------\n";

    test = Bin(3);
    test = add(test, 2);
    cout << "---------------------Test 2 ---------------------\n";
    float range = test.getZ(5);
    cout << range << endl;
    cout << "------------------------------------------------\n";
    return (normal==1 && range==0);
}

Bin testBins[NO_BINS] = {
    Bin(0), 
    Bin(1), 
    Bin(2),
    Bin(3),
    Bin(4),
    Bin(5),
};

Bin testBins2[NO_BINS] = {
    Bin(0), 
    Bin(1),
    Bin(2),
    Bin(3),
    Bin(4),
    Bin(5),
};


bool testAddBin() {
    bool pass = true;

    testDefn testingBinsAdd[3] = {
        {"Normal values - add elements within size range", 0},
        {"Range values - add elements outside of size range", 0},
    };
    
    // normal values
    cout << "------------------------------------------------\n";
    cout << endl;
    cout << testingBinsAdd[0].testName << endl;
    cout << endl;
    for (int i=0; i<NO_BINS;i++){ // cannnot do add
        testBins[i] = add(testBins[i], i); //asignment operator
        cout << "---------------------Test "<< i << " ---------------------\n";
        cout << testBins[i];
        pass = pass && assertEqualBin(testBins[i], i-1, i);
    }
    cout << "------------------------------------------------\n";

    // out of range values
    cout << "------------------------------------------------\n";
    cout << endl;
    cout << testingBinsAdd[1].testName << endl;
    cout << endl;
    for (int i=0; i<NO_BINS;i++){
        cout << "---------------------Test "<< i << " ---------------------\n";
        testBins2[i] = add(testBins2[i], i+1);
        cout << testBins2[i];
        pass = pass && assertEqualBin(testBins[2], i, i+1);
    }
    cout << "------------------------------------------------\n";
    return pass;

};

bool testRemoveBin() {
    bool pass = true;
    testDefn testingBinsRemove[3] = {
        {"Normal values - remove elements within size range", 0},
        {"Range values - remove elements outside of size range", 0},
        {"Error values - remove elements which are not initialized", 0},
    };
    
    //normal value
    cout << "------------------------------------------------\n";
    cout << endl;
    cout << testingBinsRemove[0].testName << ":" << endl;
    cout << endl;
    for (int i=0; i<NO_BINS;i++) { // bin sizes -> 0,1,2,3,4,5
        cout << "---------------------Test "<< i << " ---------------------\n";
        testBins[i].remove(i/2);
        cout << testBins[i];
        pass = pass && assertEqualBin(testBins[i], i-2, i-1); // additional -1 as I remove 1 element
    }
    cout << "------------------------------------------------\n";

    //range value
    cout << "------------------------------------------------\n";
    cout << endl;
    cout << testingBinsRemove[1].testName << ":" << endl;
    cout << endl;
    for (int i=0; i<NO_BINS;i++) { // bin sizes -> 1,2,3,4,5,6
        cout << "---------------------Test "<< i << " ---------------------\n";
        testBins2[i].remove(-1);
        testBins2[i].remove(testBins2[i].getSize());
        cout << testBins2[i];
        pass = pass && assertEqualBin(testBins[i], i, i+1);
    }

    cout << "------------------------------------------------\n";
    cout << endl;
    //error value: when we try to remove an element that has no values
    cout << testingBinsRemove[2].testName << ":" << endl;
    cout << endl;
    Bin test  = Bin(4);
    test.remove(1);
    cout << "---------------------Test 1 ---------------------\n";
    cout << test;
    cout << "------------------------------------------------\n";
    pass = pass && assertEqualBin(test, 3, 4);
    return pass;
}

void runAllBinTests() {
    bool pass = true;
    testDefn testingBins[7] = {
        {"TEST COPY CONSTRUCTOR", 0},
        {"TEST ASSIGNMENT OPERATOR", 0},
        {"TEST GET X FUNCTION", 0},
        {"TEST GET Y FUNCTION", 0},
        {"TEST GET Z FUNCTION", 0},
        {"TEST ADD FUNCTION", 0},
        {"TEST REMOVE FUNCTION", 0},
    };

    cout << "________________________________________________\n";
    cout << "           TEST FOR BIN CLASS\n";
    cout << "________________________________________________\n";

    for (int i = 0; i<7; i++){
        cout << "================================================\n";
        cout << endl;
        string testName = testingBins[i].testName;
        cout << testName << endl;
        if (i==0) {
            pass = testCpyConstructor();
            cout << endl;
            cout << testName << " has passed: " << boolalpha << pass;
        }
        if (i==1) {
            pass = testAssignmentOp();
            cout << endl;
            cout << testName << " has passed: " << boolalpha << pass;
        }
        if (i==2) {
            pass = testXComponetBin();
            cout << endl;
            cout << testName << " has passed: " << boolalpha << pass << endl;
        }
        if (i==3) {
            pass = testYComponetBin();
            cout << endl;
            cout << testName << " has passed: " << boolalpha << pass << endl;
        }
        if (i==4) {
            pass = testZComponetBin();
            cout << endl;
            cout << testName << " has passed: " << boolalpha << pass << endl;
        }
        if (i==5) {
            pass = testAddBin();
            cout << endl;
            cout << testName << " has passed: " << boolalpha << pass << endl;
        }
        if (i==6) {
            pass = testAddBin();
            cout << endl;
            cout << testName << " has passed: " << boolalpha << pass << endl;
        }
        cout << endl;
        cout << "================================================\n";

    }

}

int main () {
    runAllVectorTests();
    cout << endl;
    cout << endl;
    cout << endl;
    runAllBinTests();
    return 0;
}