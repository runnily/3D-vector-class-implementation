/**
    Vector: The vector class
    @file vector3D.h
    @author Adanna Obibuaku
    @date 14/11/20
*/
#ifndef binHeader
#define binHeader

#include "Bin.h"


#endif

Bin::Bin(int num):size(num),index(EMPTY) {
    bin = new Vector3D[size];
}

Bin::Bin(const Bin &bincpy):size(bincpy.size),index(EMPTY) {
    bin = new Vector3D[bincpy.size];
    for (int i = 0; i<bincpy.size; i++) {
        bin[i] = bincpy.bin[i];
    }
}

Bin::~Bin() {
    delete bin;
    bin = NULL;
}

int Bin::getSize() {
    return size;
}

float Bin::getX(int a) {
    return bin[a].getX();
}

float Bin::getY(int a) {
    return bin[a].getY();
}

float Bin::getZ(int a) {
    return bin[a].getZ();
}

void Bin::add(Vector3D v) {
    if (index < size) { 
        bin[index] = v;
        index++;
    } else {
        Vector3D * temp = new Vector3D[size+1]; //increase size
        temp[size] = v; // new element added in
        vectorCpy(temp, 0, size);
        delete[] bin; // release old array
        bin = temp; // point to temp
        temp = NULL; // temp is null
        size++;
        index++;   
    }
}


void Bin::remove(int b) {
    if ((b >= EMPTY) && (b < size ) ) {
        if (index>EMPTY) {
            index--;
            size--;
            Vector3D * temp = new Vector3D[size];
            vectorCpy(temp, 0, b); // copy first half elements across
            for (int i = b; i<size;i++) { // copy second half across
                temp[i] = bin[i+1];
            }
            delete[] bin; // free allocate memory, we no longer need this
            bin = temp; // resaign bin
            temp = NULL; 
        }
    }
}

void Bin::vectorCpy(Vector3D cpy[], int index, int size){
    for (int i = index; i<size; i++) {
        cpy[i] = bin[i];
    }
}


Bin Bin::operator=(Bin rhs){
    delete[] bin; // delete bin
    bin = NULL; // ensure bin is null
    return rhs;
}


ostream& operator<< (ostream& ostream , Bin& bin) {
    ostream << "----------------\n";
    for (int i = 0; i<bin.getSize(); i++) {
        ostream << "|    "<<"(" << bin.getX(i) << "," << bin.getY(i) << "," <<  bin.getZ(i)<< ")" << "    |\n";
        ostream << "----------------\n";
    }
    return ostream;
}

int main(){
    Bin b = Bin(3);
    b.add(Vector3D(1,7,8));
    b.add(Vector3D(2,7.4,8));
    b.add(Vector3D(3,7.4,8));
    b.add(Vector3D(4,7.4,20));
    b.add(Vector3D(5,7.4,8));
    b.add(Vector3D(8,18.4,8));
    b.remove(-1);
    cout << b;
}