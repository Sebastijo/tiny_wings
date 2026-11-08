#pragma once

#include <chrono>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "objects/World.hpp"
#include "objects/Player.hpp"
#include "Config.hpp"

class Game
{
public:
    Game(float q_x, float q_y, float p_x, float p_y, bool headless);
    void run();

private:
    Player m_player;

    bool m_headless{};

    void processEvents(sf::Window &window) const;
    void update(float dt);
    void render(sf::RenderWindow &window) const;
};
