#pragma once

#include <SFML/Graphics.hpp>
#include <cmath>
#include "objects/World.hpp"

class Player
{
private:
    sf::Vector2f m_q{};
    sf::Vector2f m_p{};
    bool m_falling{false};
    double m_gravity{9.8};

public:
    Player(float q_x, float q_y, float p_x, float p_y);
    double getSpeed() const;
    double getRotation() const;
    double getHeight(const World &world) const;
    //void move(double t);
};
