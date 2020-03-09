#ifndef VECTOR_2_H
#define VECTOR_2_H

#include <cmath>
#include <ostream>

namespace ParticlePact
{
    class Vector2; // Forward declaration of the Vector2 class

	// Forward declaration of minus operator
    Vector2 operator-(Vector2 const &a, Vector2 const &b); 

    class Vector2
    {
        private:
            double x;
            double y;

        public:
            ~Vector2() {}

            Vector2() : x(0), y(0) {} // Initialize both values to zero
            
            Vector2(double xInit, double yInit) : x(xInit), y(yInit) {} // Initialize both values to the passed values

            double getX() const
            {
                return x;
            }

            void setX(double newX)
            {
                x = newX;
            }

            double getY() const
            {
                return y;
            }

            void setY(double newY)
            {
                y = newY;
            }

            double getMagnitude() const
            {
                return std::sqrt(std::pow(x, 2) + std::pow(y, 2)); 
            }

            void normalize()
            {
                double m = getMagnitude();
                x /= m;
                y /= m;
            }

            double distanceTo(const Vector2 &a) const
            {
                return (a - *this).getMagnitude();
            }

            // Returns true if the current vector is within the given distance of the second vector
            bool within(double distance, const Vector2 &a) const
            {
                return (a.distanceTo(*this) <= distance);
            }
    };

    // These operator overloads are outside the class to allow greater precision in definition

    Vector2 operator+(Vector2 const &a, Vector2 const &b)
    {
        return Vector2(a.getX() + b.getX(), a.getY() + b.getY());
    }
    
    Vector2 operator*(double const f, Vector2 const &b)
    {
        return Vector2(f * b.getX(), f * b.getY());
    }

    Vector2 operator-(Vector2 const &a, Vector2 const &b)
    {
        return a + (-1.0 * b);
    }

    // This operator just reverses the order of the other (*) operator
    Vector2 operator*(Vector2 const &b, float const f)
    {
        return f * b;
    }

    // Called "dot" instead of just multiplication so it's use is more explicit
    Vector2 dot(Vector2 const &a, Vector2 const &b)
    {
        return Vector2(a.getX() * b.getX(), a.getY() * b.getY());
    }

    std::ostream& operator<<(std::ostream &stream, Vector2 const &a)
    {
        return stream << "(" << a.getX() << ", " << a.getY() << ")";
    }
}

#endif