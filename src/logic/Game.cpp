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

void Game::processEvents() const
{
}

void Game::update()
{
}

void Game::render() const
{
}
