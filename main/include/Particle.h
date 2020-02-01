#ifndef PARTICLE_H
#define PARTICLE_H

namespace ParticlePact
{
    class Particle
    {
        public:
            ~Particle();
            Particle();
            
            void update();
            
            void addProperty();
            void removeProperty();
            void getProperty();

            void addBehavior();
            void removeBehavior();
            void getBehavior();
    };
}

#endif