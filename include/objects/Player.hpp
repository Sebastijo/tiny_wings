#pragma once

#include <SFML/Graphics.hpp>
#include <cmath>
#include "objects/World.hpp"
#include "Config.hpp"
#include "logic/Utils.hpp"

class Player
{
private:
    sf::Vector2f m_q{};
    sf::Vector2f m_p{};
    bool m_falling{false};
    World m_world{};
    bool touchedFloorLastIter{false};

public:
    Player(float q_x, float q_y, float p_x, float p_y);
    float getSpeed() const;
    float getRotation() const;
    float getHeight() const;
    void move(float dt);
    void redirect(float dt);
    sf::Vector2f q() const;
    sf::Vector2f p() const;
    void updateTouchedFloorLastIter();
};
