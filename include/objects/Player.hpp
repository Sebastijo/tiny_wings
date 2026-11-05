#pragma once

#include <SFML/Graphics.hpp>
#include <cmath>
#include "objects/World.hpp"

class Player
{
private:
    sf::Vector2f m_position{};
    sf::Vector2f m_velocity{};
    bool m_falling{};
    double m_gravity = 9.8;

public:
    double getSpeed() const;
    double getRotation() const;
    double getHeight(const World &world) const;
    void move(double t);
};
