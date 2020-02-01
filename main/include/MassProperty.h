#ifndef PARTICLE_PROPERTY_H
#define PARTICLE_PROPERTY_H

#include "ParticleProperty.h"

namespace ParticlePact
{
    class MassProperty : ParticleProperty
    {
        private:
            float mass;
        public:
            ~MassProperty() {}
            MassProperty() {}

            MassProperty(float initialMass)
            {
                this->set(initialMass);
            }
            
            inline void set(float newMass)
            {
                this->mass = newMass;
            }
            
            inline float get()
            {
                return this->mass;
            }
    };
}

#endif