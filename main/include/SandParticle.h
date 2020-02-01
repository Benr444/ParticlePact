#ifndef SAND_PARTICLE_H
#define SAND_PARTICLE_H

#include "Particle.h"
#include "MassProperty.h"

namespace ParticlePact
{
    class SandParticle : Particle
    {
        private:
            MassProperty mass;

        public:
            ~SandParticle();
            SandParticle();
    };
}

#endif