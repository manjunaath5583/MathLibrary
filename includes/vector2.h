/*
    vectors manupilation in 2-Dimension
*/
#pragma once

#include <iostream>

class Vector2
{
public:
    /*
    vector = xi+yj
    Variables:
        x = X_COMPONENT
        y = Y_COMPONENT
        MAGNITUDE = mag(vector)
    */
    double X_COMPONENT;
    double Y_COMPONENT;
    double MAGNITUDE;
    double DIRECTION;

    // constructor
    Vector2() : X_COMPONENT(0), Y_COMPONENT(0), MAGNITUDE(0), DIRECTION(0) {} // default null or zero vector
    Vector2(double X_IN, double Y_IN) : X_COMPONENT(X_IN), Y_COMPONENT(Y_IN), MAGNITUDE(magnitudeOfVector()), DIRECTION(directionOfVector()) {}

    // deconstructor
    ~Vector2() {}

    // Operations on vector
    // Overload funtions
    Vector2 operator+(const Vector2 &other);     // Addition
    Vector2 operator-(const Vector2 &other);     // Subraction
    Vector2 operator/(double Magnitude);         // Scalar divison of vector
    bool operator==(const Vector2 &other) const; // Checks Equality
    bool operator!=(const Vector2 &other) const; // Checks for InEquality
    double operator*(const Vector2 &other);      // Multiplication
    Vector2 operator*(const double &scalar);     // scalar Multiplication

    // Custom functions
    Vector2 zeroVector();       // Converts into null/zero vector
    double magnitudeOfVector(); // Calculates magnitude of vector
    Vector2 unitVector();       // Claculates Unit Vector
    double directionOfVector(); // Gives direcction of vector

    // Friend Functions
    friend std::ostream &
    operator<<(std::ostream &stream, const Vector2 &other);
};

std::ostream &operator<<(std::ostream &stream, const Vector2 &other); // Printing Vectors2
double distanceBwVectors(Vector2 vector1, Vector2 vector2);           // Calculates distance b/w 2 Vectors
double angleBwVectors(Vector2 vector1, Vector2 vector2);              // Angle between vectors in radians
Vector2 toVector(double Radians);                                     // Converts radians inton vectors
