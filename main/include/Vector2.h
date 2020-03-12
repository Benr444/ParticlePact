#ifndef VECTOR_2_H
#define VECTOR_2_H

#include <cmath>
#include <ostream>

namespace ParticlePact
{
    class Vector2; // Forward declaration of the Vector2 class

    // These operator overloads are outside the class to allow greater precision in definition

    Vector2 operator+(Vector2 const &, Vector2 const &);
    
    Vector2 operator*(double const, Vector2 const &);

    // This operator just reverses the order of the other (*) operator
    Vector2 operator*(Vector2 const &, float const);

    Vector2 operator-(Vector2 const &, Vector2 const &);

    // Called "dot" instead of just multiplication so it's use is more explicit
    Vector2 dot(Vector2 const a, Vector2 const &);

    std::ostream& operator<<(std::ostream &, Vector2 const &);

    class Vector2
    {
        private:
            double x;
            double y;

        public:
            Vector2();
            Vector2(double, double);
            ~Vector2();
            
            double getX() const;
            void setX(double);
            double getY() const;
            void setY(double);

            double getMagnitude() const;
            void normalize();
            double distanceTo(const Vector2 &) const;
            bool within(double, const Vector2 &) const;
    };
}

#endif