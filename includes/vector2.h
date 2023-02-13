/*
    vectors manupilation in 2-Dimension
*/
#pragma once

#include <iostream>

class Vector2
{

private:
    /*
        vector = xi+yj
        Variables:
            x = X_COMPONENT
            y = Y_COMPONENT
    */
    double X_COMPONENT;
    double Y_COMPONENT;

public:
    // constructor'
    Vector2() {}
    Vector2(double X_IN, double Y_IN) : X_COMPONENT(X_IN), Y_COMPONENT(Y_IN) {}

    // deconstructor
    ~Vector2() {}

    // Operations on vector
    Vector2 operator+(const Vector2 &other);     // Addition
    Vector2 operator-(const Vector2 &other);     // Subraction
    bool operator==(const Vector2 &other) const; // Checks Equality
    double operator*(const Vector2 &other);      // Multiplication
    // Vector2 operator=(const Vector2 &other);  // Assigning Values
    friend std::ostream &operator<<(std::ostream &stream, const Vector2 &other);
};

std::ostream &operator<<(std::ostream &stream, const Vector2 &other); // Printing Vectors2