#include "logic/Game.hpp"

Game::Game()
    : m_player{0.0f, 0.0f, 0.0f, 0.0f}
{
}

void Game::run()
{
    std::chrono::steady_clock::time_point previousTime{std::chrono::steady_clock::now()};
    while (isRunning)
    {

        processEvents();

        std::chrono::steady_clock::time_point currentTime{std::chrono::steady_clock::now()};
        float dt{std::chrono::duration<float>(
                     currentTime - previousTime)
                     .count()};

        update(dt);
        previousTime = currentTime;
        render();
    }
}
