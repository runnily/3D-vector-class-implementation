/*
    Test: To test the Bin class and the vector class
    @file vector3D.h
    @author Adanna Obibuaku
    @date 14/11/20
*/
#ifndef Test
#define Test

#include <iostream>
using namespace std;
#include "TestBin.h"
#include "TestVector3D.h"
#include <cmath>

#endif



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

bool testOrthogonal(Vector3D v, Vector3D v1, Vector3D expected) {
    Vector3D sum = v.orthogonal(v1);
    return (testCompontentX(sum, expected.getX()) && testCompontentY(sum, expected.getY()) && testCompontentZ(sum, expected.getZ()));
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


    for (int x = -5; x<5; x++) {
        for (int y = -5; y<5; y++ ) {
            for (int z = -5; z<5; z++) {
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
                if (testVectorProduct(v, test, Vector3D(y*TEST_Z-z*TEST_Y, z*TEST_X-x*TEST_Z, x*TEST_Y-y*TEST_X))){
                    testVectors[9].passedCases++;
                }
                if (testUnitVector(v,  expectedUnit(x ,y ,z) )){
                    testVectors[10].passedCases++;
                } 
                if (testOrthogonal(v, test, expectedUnit(y*TEST_Z-z*TEST_Y, z*TEST_X-x*TEST_Z, x*TEST_Y-y*TEST_X)) ){
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
}


/*
* <-------------------------------------------------------------------------------------------------->
* 
*                                       Testing Bin
*
* <-------------------------------------------------------------------------------------------------->
*/


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
    errorTest = errorTest; // generates a warning but for testing purposes so ignore
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
    for (int i=0; i<NO_BINS;i++){ // 0,1,2,3,4,5
        cout << "---------------------Test "<< i << " ---------------------\n";
        testBins2[i] = add(testBins2[i], i+1); // 0,0
        cout << testBins2[i];
        pass = pass && assertEqualBin(testBins[2], i, i+1);
    }
    cout << "------------------------------------------------\n";
    return pass;

}

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
    for (int i=0; i<NO_BINS;i++) { // inial bin sizes -> 0,1,2,3,4,5
        cout << "---------------------Test "<< i << " ---------------------\n";
        testBins2[i].remove(-1);
        testBins2[i].remove(testBins2[i].getSize());
        cout << testBins2[i];
        if (i==0) {
           pass = pass && assertEqualBin(testBins[i], i, 2); 
        } else {
            pass = pass && assertEqualBin(testBins[i], i, i*2);
        }
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
    testDefn testingBins[NO_BIN_TEST] = {
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

    for (int i = 0; i<NO_BIN_TEST; i++){
        cout << "================================================\n";
        cout << endl;
        string testName = testingBins[i].testName;
        cout << testName << endl;
        if (i==0) {
            pass = testCpyConstructor();
        }
        if (i==1) {
            pass = testAssignmentOp();
        }
        if (i==2) {
            pass = testXComponetBin();
        }
        if (i==3) {
            pass = testYComponetBin();
        }
        if (i==4) {
            pass = testZComponetBin();
        }
        if (i==5) {
            pass = testAddBin();
        }
        if (i==6) {
            pass = testRemoveBin();
        }
        cout << endl; // put this at the end
        cout << testName << " has passed: " << boolalpha << pass;
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
