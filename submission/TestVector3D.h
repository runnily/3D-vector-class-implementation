#define TEST_X 1
#define TEST_Y 1
#define TEST_Z 1
#define SCALAR 3.5
#define TEST_NO_VECTOR 12

#ifndef VECT_HEADER
#define VECT_HEADER

#include "Vector3D.h"

#endif

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