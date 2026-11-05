#pragma once

#include <SFML/Graphics.hpp>
#include "objects/World.hpp"
#include "objects/Player.hpp"

class Game{
    public:
        Game();
        void run();

    private:
        Player m_player;
        World m_world {};

        bool isRunning {true};

        void processEvents() const;
        void update();
        void render() const;
};
