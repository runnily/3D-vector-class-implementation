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
    vectorCpy(&bin, 0, bincpy.size);
    /*
    for (int i = 0; i<bincpy.size; i++) {
        bin[i] = bincpy.bin[i];
    }*/
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
        //vectorCpy(&temp, 0, size);
        temp[size] = v; // new element added in
        for (int i = 0; i<size; i++) {
            temp[i] = bin[i];
        }

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
            vectorCpy(&temp, 0, b);
            vectorCpy(&temp, b+1, size);
            for (int i = b; i<size;i++) {
                temp[i] = bin[i+1];
            }
            delete[] bin;
            bin = temp;
            temp = NULL;
        }
    }
}

void Bin::vectorCpy(Vector3D *cpy[], int index, int size){
    for (int i = index; i<size; i++) {
        *cpy[i] = bin[i];
    }
    cpy = NULL; // once we finished with null point to nothing
}


Bin Bin::operator=(Bin rhs){
    delete[] bin;
    bin = NULL;
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
    Bin b = Bin(1);
    b.add(Vector3D(5,7,8));
    b.add(Vector3D(5,7.4,8));
    b.add(Vector3D(5,7.4,8));
    b.add(Vector3D(5,7.4,8));
    b.add(Vector3D(5,7.4,8));
    cout << b;
}