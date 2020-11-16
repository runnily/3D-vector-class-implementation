#ifndef Test
#define Test

#include "Bin.h"
#include <iostream>
using namespace std;
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
*   expected (Bin): The expected bin
* Output:
*   (bool) denotes if the two bins are equal
*/
bool assertEqualBin(Bin b, Bin expected);

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
bool assertEqualBin(Bin b, Bin expected) {
    if ( !(b.getSize()==expected.getSize()) && (b.getIndex()==expected.getIndex()) ) {
        return false;
    }
    for (int i = 0; i<getSize(); i++) {
        if ( !(b.getX(i)==expected.getX(i)) && (b.getY(i)==expected.getY(i)) && (b.getZ(i)==expected.getZ(i)) ) {
            return false;
        }
    }
    return true;
}*/

Bin add(Bin b, int maxSize) {
    for (int i = 0; i<maxSize; i++){
        b.add(Vector3D(i+1,TEST_Y,TEST_Z));
    }
    return b;
}


void runAllBinTests() {
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

    // Add function

    /* normal values 
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
    */
    for (int i=0; i<5;i++){ // cannnot do add
        testBins[i] = add(testBins[i], i);
        cout << "________________\n";
        cout << "Test " << i << endl;
        cout << testBins[i];
        cout << "________________\n";
    }

    // out of range values
    /*
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
    */
    for (int i=0; i<NO_BINS;i++){
        testBins2[i].add(Vector3D(i+1, TEST_Y,TEST_Z));
        cout << testBins[i];
    }

    // Error Value
    testBins[0] = Bin(1);
    Vector3D v;
    testBins[0].add(v);
    

    //Remove function

    //normal values
    /*
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
    */
    for (int i=0; i<NO_BINS;i++) {
        testBins[i].remove(i/2);
        cout << testBins[i];
    }

    //range values
     /*
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
    */
    for (int i=0; i<NO_BINS;i++) {
        testBins2[i].remove(-1);
        testBins2[i].remove(testBins2[i].getSize());
        cout << testBins[i];
    }

    //error value
    /*
    * test1 = Nothing
    * 
    */
    Bin test1 = Bin(5);
    test1.remove(1);
    cout << test1;


}



int main () {
    runAllVectorTests();
    runAllBinTests();
    return 0;


}