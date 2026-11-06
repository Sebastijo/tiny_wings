#pragma once

#include <chrono>
#include <SFML/Graphics.hpp>
#include "objects/World.hpp"
#include "objects/Player.hpp"
#include "Config.hpp"

class Game
{
public:
    Game(float q_x, float q_y, float p_x, float p_y);
    void run();

private:
    Player m_player;

    bool isRunning{true};

    void processEvents() const;
    void update(float dt);
    void render() const;
};
