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

struct testDefnVector3D {string testName; int passedCases;};


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

/*
* <-------------------------------------------------------------------------------------------------->
* 
*                                       Testing Bin
*
* <-------------------------------------------------------------------------------------------------->
*/

int main () {
    int numTest = 1000;
    int componetX = 0;
    int componetY = 0;
    int componetZ = 0;
    int magnitude = 0;
    int addition = 0;
    int subtraction = 0;
    int mulitplyScalar = 0;
    int divideScalar = 0;
    int scalarProduct = 0;
    int vectorProduct = 0;
    int unitVector = 0;
    int orthogonal = 0;

    testDefnVector3D testVectors[TEST_NO_VECTOR] = {
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
                    componetY++;
                }
                if (testCompontentZ(v, z)) {
                    componetZ++;
                }
                if (testMagnitude(v, expectedMagnitude(x,y,z))) {
                    magnitude++;
                }
                if (testAddition(v, test, Vector3D(x+TEST_X,y+TEST_Y,z+TEST_Z))){
                    addition++;
                }
                if (testSubtraction(v, test, Vector3D(x-TEST_X,y-TEST_Y,z-TEST_Z))){
                    subtraction++;
                }
                if (testMultiplyByScalar(v, SCALAR, Vector3D(x*SCALAR,y*SCALAR,z*SCALAR))){
                    mulitplyScalar++;
                }
                if (testDivideByScalar(v, SCALAR, Vector3D(x/SCALAR,y/SCALAR,z/SCALAR))){
                    divideScalar++;
                }
                if (testScalarProduct(v, test, x*TEST_X+y*TEST_Y+z*TEST_Z)){
                    scalarProduct++;
                }
                if (testVectorProduct(v, test, Vector3D(y*TEST_Z-z*TEST_Z, z*TEST_X-x*TEST_Z, x*TEST_Y-y*TEST_X))){
                    vectorProduct++;
                }
                if (testUnitVector(v,  expectedUnit(x ,y ,z) )){
                    unitVector++;
                } 
                if (testOrthogonal(v, test, (0==(x*TEST_X+y*TEST_Y+z*TEST_Z)) ) ){
                    orthogonal++;
                } 
            }
        }
    }
    cout << "Test Componet x:            " << testVectors[0].passedCases << "/" << numTest << endl;
    cout << "Test Componet y:            " << componetY << "/" << numTest << endl;
    cout << "Test Componet z:            " << componetZ << "/" << numTest << endl;
    cout << "Test Magnitude:             " << magnitude << "/" << numTest << endl;
    cout << "Test Addition:              " << addition << "/" << numTest << endl;
    cout << "Test Subtract:              " << subtraction << "/" << numTest << endl;
    cout << "Test Multiply Scalar:       " << mulitplyScalar << "/" << numTest << endl;
    cout << "Test Divide Scalar:         " << mulitplyScalar << "/" << numTest << endl;
    cout << "Test Scalar Product:        " << scalarProduct << "/" << numTest << endl;
    cout << "Test Vector Product:        " << vectorProduct << "/" << numTest << endl;
    cout << "Test Unit Vector:           " << unitVector << "/" << numTest << endl;
    cout << "Test Orthogonal:            " << orthogonal << "/" << numTest << endl;

    return 0;


}