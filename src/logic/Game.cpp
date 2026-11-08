#include "logic/Game.hpp"

Game::Game(float q_x, float q_y, float p_x, float p_y, bool headless)
    : m_player{q_x, q_y, p_x, p_y}, m_headless{headless}
{
}

void Game::run()
{
    bool isRunning;
    if (m_headless)
    {
        sf::Clock clock;
        while (true)
        { // Here I will have to implement the headless version. I need to implement Python events.
            sf::Time dt = clock.restart();
            update(dt.asSeconds());
        }
    }
    else
    {
        sf::RenderWindow window(sf::VideoMode({800, 600}), "Tiny Wings");
        window.setVerticalSyncEnabled(true);

        sf::Clock clock;
        while (window.isOpen())
        {
            processEvents(window);

            sf::Time dt = clock.restart();
            update(dt.asSeconds());
            
            render(window);
        }
    }
}
