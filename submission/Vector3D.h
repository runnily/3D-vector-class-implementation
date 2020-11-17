/**
    Vector: The vector interface 
    @file vector3D.h
    @author Adanna Obibuaku
    @date 14/11/20
*/
#ifndef IO
#define IO
#include <iostream>
using namespace std;
#endif

#define SIZE 3


class Vector3D {

    public: 
        /*
        * Consturctor: creates our vector
        * Input:
        *   x (int): The x componet of the vector
        *   y (int): The y componet of the vector
        *   z (int): The z componet of the vector
        */
        Vector3D(float x, float y, float z);

        /*
        * Consturctor: No input, will initialize with
        *              default values.
        */
        Vector3D();


        /*
        * magnitude: Find the magnitude of this vector
        */
        float magnitude(); 

        /*
        * unit: Caculate the unit of our vector
        */
        Vector3D unit(); 

        /*
        * orthongonal: will caculate if the vectors are orthogonal (vectors) are perpendicular
        * Input:
        *   rhs (Vector): The vector in the right hand said
        * Output:
        *   (bool): Denotes True when two vectors are perpendicular or false when not.
        */
        bool orthogonal(Vector3D rhs); 

        /*
        * getX: This will get the x componet
        * Ouput:
        *   (float): componet x of the vector
        */
        float getX();

        /*
        * getY: This will get the y componet
        * Output:
        *   (float): componet y of the vector
        */
        float getY();

        /*
        * getZ: This will get the z componet
        * Output:
        *   (float): componet z of the vector
        */
        float getZ();

        /*
        * Operator +: Addition of a vector
        * Input:
        *   rhs (Vector): A given vector
        * Output:
        *   (Vector3D): A vector equal to (this) vector additioned with the input vector
        */
        Vector3D operator+ (Vector3D rhs); 

        /*
        * Operator -: Subtraction of a vector
        * Input:
        *   rhs (Vector): A given vector
        * Output:
        *   (Vector3D): A vector equal to (this) vector subtracted with the  input vector
        */
        Vector3D operator- (Vector3D rhs); 

        /*
        * Operator %: Vector product
        * Input:
        *   rhs (Vector): A given vector
        * Output: 
        *   (Vector): A vector equal to the Vector product of (this) vector with the input vector
        */
        Vector3D operator% (Vector3D rhs); 

        /*
        * Operator *: Scalar product
        * Input:
        *   rhs (Vector): A given scalae
        * Output:
        *   (float): The scalar
        */
        float operator* (Vector3D rhs); 


        /*
        * Opertor *: Mutiple vector by scalar
        * Input:
        *   rhs (Vector): A given scalae
        * Output:
        *   (Vector): A vector equal to the Multiplication of (this) vector with the input vector
        */
        Vector3D operator* (float scalar); 


        /*
        * Opertor /: Vector devision
        * Inputs:
        *   rhs (Vector): A given vector
        *  Output: 
        *   (Vector): Vector with the scalar devision applied
        */
        Vector3D operator/ (float scalar);

        /*ostream& operator<< (ostream& outStream, const Vector &v);*/

    private:
        float static const DEFAULT_X;
        float static const DEFAULT_Y;
        float static const DEFAULT_Z;

        float x;
        float y;
        float z;

};

ostream& operator<< (ostream& ostream , Vector3D& v);
    