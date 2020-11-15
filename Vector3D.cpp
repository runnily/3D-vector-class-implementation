/**
    Vector: The vector class
    @file vector3D.h
    @author Adanna Obibuaku
    @date 14/11/20
*/
#ifndef vect
#define vect

#include "Vector3D.h"
#include <cmath>

#endif

const float Vector3D::DEFAULT_X =  0;
const float Vector3D::DEFAULT_Y =  0;
const float Vector3D::DEFAULT_Z =  0;


Vector3D::Vector3D(float x, float y, float z):x(x),y(y),z(z){
} 

Vector3D::Vector3D():x(DEFAULT_X),y(DEFAULT_Y),z(DEFAULT_Z){
} 

float Vector3D::magnitude() {
    return sqrt((x*x)+(y*y)+(z*z));
}

Vector3D Vector3D::unit() {
    return Vector3D(x/magnitude(),y/magnitude(),z/magnitude());
}

bool Vector3D::orthogonal(Vector3D rhs) {
    if ((*this)*rhs == 0) {
        return true;
    }
    return false;
}

float Vector3D::getX() {
    return x;
}

float Vector3D::getY() {
    return y;
}

float Vector3D::getZ() {
    return z;
}

Vector3D Vector3D::operator+ (Vector3D rhs) {
    return Vector3D(x + rhs.getX(), y+rhs.getY(), z+rhs.getZ());
}

Vector3D Vector3D::operator- (Vector3D rhs) {
    return Vector3D(x - rhs.getX(), y-rhs.getY(), z-rhs.getZ());
}

float Vector3D::operator* (Vector3D rhs) {
    return x * rhs.getX() + y*rhs.getY() + z*rhs.getZ();
}

Vector3D Vector3D::operator% (Vector3D rhs) {
    return Vector3D((y*rhs.getZ())-(z*rhs.getY()), (z*rhs.getX()-x*rhs.getZ()), (x*rhs.getY()-y*rhs.getX()));
}

Vector3D Vector3D::operator* (float scalar) {
    return Vector3D(x*scalar, y*scalar, z*scalar);
}

Vector3D Vector3D::operator/ (float scalar) {
    return Vector3D(x/scalar, y/scalar, z/scalar);
}

ostream& operator<< (ostream& ostream , Vector3D& v) { 
    ostream << "(" << v.getX() << "," << v.getY() << "," << v.getZ() << ")\n";
    return ostream;
}

/*
int main() {
    Vector3D v = Vector3D(10,4,-1);
    Vector3D v1 = Vector3D(1, 1, 14);
    Vector3D v3 = v-v1;
    cout << v.orthogonal(v1) << "\n";
    return 0;
}*/
