#ifndef Test
#define Test

#include "Bin.h"
#include <iostream>
using namespace std;

#endif

/*
* <-------------------------------------------------------------------------------------------------->
* 
*                                       Testing Vector3D 
*
* <-------------------------------------------------------------------------------------------------->
*/


bool testCompontentX(Vector3D v, float expected) {
    cout << "Testing Componet X:    ";
    return (v.getX()==expected);
}

bool testCompontentY(Vector3D v, float expected) {
    cout << "Testing Componet Y:    ";
    return (v.getY()==expected);
}

bool testCompontentZ(Vector3D v, float expected) {
     cout << "Testing Componet Z:    ";
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

bool testUnitVector(Vector3D v, Vector3D v1, bool expected) {
    return (v.orthogonal(v1)==expected);
}

void testAll() {
    for (int x = 0; x<=10; x++) {
        for (int y = 0; y<=10; y++ ) {
            for (int z = 0; z<=10; z++) {
                Vector3D v = Vector3D(x,y,z);
                cout << "-------------------------------------------\n";
                cout << "       Testing Vector  " << v << endl;
                cout << "-------------------------------------------\n";
                if (testCompontentX(v, x)) {
                    cout <<  "Passed\n";
                } else {
                    cout << "Failed\n";
                }
                if (testCompontentY(v, y)) {
                    cout << "Passed\n";
                } else {
                    cout << "Failed\n";
                }
                if (testCompontentZ(v, z)) {
                    cout << "Passed\n";
                } else {
                    cout << "Failed\n";
                }
                cout << "___________________________________________\n";
            }
        }
    }
}


/*
* <-------------------------------------------------------------------------------------------------->
* 
*                                       Testing Bin
*
* <-------------------------------------------------------------------------------------------------->
*/

int main () 
    int testComponetX = 0;
    int testComponetY = 0;
    int testComponetZ = 0;

    for (int x = 0; x<=10, x++) {
        for (int y = 0; x <=10, y++) {
            for (int z = 0; z <= 10; z++) {
                Vector3D v = Vector3D(X,Y,Z);
                if (testComponetX(v, x)) {
                    testComponetX++
                }
                if (testComponetY(v, y)) {
                    testComponetY++
                }
                if (testComponetY(Z, z)) {
                    testComponetZ++
                }
            }
        }
    }
    return 0;
}