/**
    Vector: The vector class
    @file vector3D.h
    @author Adanna Obibuaku
    @date 14/11/20
*/
#ifndef BIN_HEADER
#define BIN_HEADER

#include "Bin.h"


#endif

Bin::Bin(int num):size(num),index(EMPTY-1),init(INIT) {
    bin = new Vector3D[size];
}

Bin::Bin(const Bin &bincpy):size(bincpy.size),index(bincpy.index),init(INIT)  {
    bin = new Vector3D[bincpy.size];
    for (int i = 0; i<bincpy.size; i++) {
        bin[i] = bincpy.bin[i];
    }
}

Bin::~Bin() {
    delete bin; 
    bin = NULL;

}

int Bin::getIndex() {
    return index;
}

int Bin::getSize() {
    return size;
}

float Bin::getX(int a) {
    if ((a >= EMPTY) && (a < size )) {
        return bin[a].getX();
    }
    return 0.0f;
}

float Bin::getY(int a) {
    if ((a >= EMPTY) && (a < size )) {
        return bin[a].getY();
    }
    return 0.0f;
}

float Bin::getZ(int a) {
    if ((a >= EMPTY) && (a < size )) {
        return bin[a].getZ();
    }
    return 0.0f;
}

void Bin::add(Vector3D v) {
    index++;
    if (index < size) { 
        bin[index] = v;
    } else {
        Vector3D * temp = new Vector3D[size+1]; //increase size
        temp[size] = v; // new element added in
        vectorCpy(temp, bin, 0, size);
        delete[] bin; // release old array
        bin = temp; // point to temp
        temp = NULL; // temp is null
        size++;
    }
}


void Bin::remove(int b) {
    if ((b >= EMPTY) && (b < size ) ) {
        if (index>=EMPTY) { // index needs to be greater than 0 to remove
            index--;
            size--;
            Vector3D * temp = new Vector3D[size];
            vectorCpy(temp, bin, 0, b); // copy first half elements across
            for (int i = b; i<size;i++) { // copy second half across
                temp[i] = bin[i+1];
            }
            delete[] bin; // free allocate memory, we no longer need this
            bin = temp; // resaign bin
            temp = NULL; 
        }
    }
}

void Bin::vectorCpy(Vector3D cpy[], Vector3D pst[], int index, int size){
    for (int i = index; i<size; i++) {
        cpy[i] = pst[i];
    }
}


Bin Bin::operator=(Bin rhs){
    if (rhs.init) {
        if (this == &rhs){
            return *this;
        }
        size = rhs.size;
        index = rhs.index;
        delete[] bin; // delete allocated memory
        bin = new Vector3D[size]; // create a new vector with size
        vectorCpy(bin, rhs.bin, 0, size);
        return *this;
    }
    return *this;
}

Vector3D Bin::operator[](int c) {
    return bin[c];
}


ostream& operator<< (ostream& ostream , Bin& bin) {
    ostream << endl;
    for (int i = 0; i<bin.getSize(); i++) {
        ostream << "****************\n";
        ostream << "|    "<<"(" << bin.getX(i) << "," << bin.getY(i) << "," <<  bin.getZ(i)<< ")" << "    |\n";
        ostream << "****************\n";
    }
    ostream << endl;
    return ostream;
}

/*
int main(){
    Bin b = Bin(5); 
    cout << b;
}*/