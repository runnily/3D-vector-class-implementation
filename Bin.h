/*
    Bin: The bin interface 
    @file vector3D.h
    @author Adanna Obibuaku
    @date 14/11/20
*/

#ifndef VECT_HEADER
#define VECT_HEADER
#include "Vector3D.h"
#endif
 
#ifndef IO
#define IO
#include <iostream>
using namespace std;
#include <iomanip>
#endif

#define EMPTY 0
#define INIT 1

class Bin {


    public:

        /*
        * constructor: To initalise our class
        * Input:
        *   Size (int): Denotes the size of out class
        */
        Bin(int num);

        /*
        * copy constructor: To copy the class
        * Input:
        *   bin (Bin): An address of a bin, which copies content of our class
        */
        Bin(const Bin &bincpy);

        /*
        * deconstructor: To remove elements
        */
        virtual ~Bin();

        /*
        * getIndex: To return index of bin
        * Output:
        *   (int): index of array
        */
        int getIndex();

        /*
        * getSize: To return size of bin
        * Output:
        *   (int): Size of array
        */
        int getSize();

        /*
        * getX: Provides the x component of the [a]th Vector3D element in the bin.
        * Input:
        *   a (int): The postion of vector within bin
        * Output:
        *   (float): This would return the x componets in position a
        *            or 0.0 if ath value does not exits
        */
        float getX(int a);

        /*
        * getY: Provides the y component of the [a]th Vector3D element in the bin.
        * Input:
        *   a (int): The postion of vector within bin
        * Output:
        *   (float): This would return the y componets in position a
        *            or 0.0 if ath value does not exits
        */
        float getY(int a);

        /*
        * getZ: Provides the z component of the [a]th Vector3D element in the bin.
        * Input:
        *   a (int): The postion of vector within bin
        * Output:
        *   (float): This would return the z componets in position a
        *            or 0.0 if ath value does not exits
        */
        float getZ(int a);

        /*
        * add: adds a given vector into the bin
        * Input:
        *   v (Vector): The vector to be added
        */
        void add(Vector3D v);

        /*
        * remove: removes a vector from the bin
        * Input:
        *   b (int): The postion of vector within bin
        */
        void remove(int b);

        /*
        * Operator = assigns another operator to bin
        * Input:
        *   Bin (rhs): The rhs of the bin
        */
        Bin operator= (const Bin &rhs);

        /*
        * Operator []: returns the index at c
        * Input:
        *   c (int): The position of the vector within b
        * Output:
        *   (Vector3D): The vector at postion b.
        */
        Vector3D operator[] (int c);




    private:
        Vector3D *bin;
        int size;
        int index;
        int init;

        /*
        * vectorCpy: To paste content from vector pst to vector cpy
        * Input:
        *   cpy (Vector3D[]): An array off vector which caries the pasted contents.
        *   pst (Vector3D[]): An array off vector which you want to copy from and paste into vector
        *                     cpy
        *   size (int): The size of the vector
        */
        void vectorCpy(Vector3D cpy[], Vector3D pst[],int index, int size);

    
};
/*
* Operator>>: To define the string output
*/
ostream& operator<< (ostream& ostr , Bin& Bin);
