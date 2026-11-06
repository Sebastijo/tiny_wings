#pragma once

#include <SFML/Graphics.hpp>
#include "logic/Utils.hpp"
#include "Config.hpp"

struct World
{
private:
    sf::Vector2f m_gravity{0, -Config::GRAVITY};

public:
    double getHeight(double x) const;
    sf::Vector2f getTangent(double x) const;
    sf::Vector2f gravity() const;
};
