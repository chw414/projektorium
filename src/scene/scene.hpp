#pragma once
#include "projector.hpp"
#include <vector>

class Scene
{
    private:
        std::vector<Projector> projectors;
    public:
        void addProjector(const Projector& projector);
        std::size_t getProjectorCount() const;
        const Projector& getProjector(std::size_t index);
};


