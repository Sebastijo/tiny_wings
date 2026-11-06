#include "logic/Game.hpp"

Game::Game()
    : m_player{0.0f, 0.0f, 0.0f, 0.0f}
{
}

void Game::run()
{
    while (isRunning)
    {
        processEvents();
        update();
        render();
    }
}
