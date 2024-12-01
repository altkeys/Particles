#include "../include/engine.h"

Engine::Engine() {
    sf::VideoMode mode = sf::VideoMode::getDesktopMode();
    m_window.create(mode, "Parmticles !!!!");
}

void Engine::run() {
    //sf::Clock clock;

    //sf::Vector2i idk = { (int)m_window.getSize().x / 2, (int)m_window.getSize().y / 2 };

    Particle particle(m_window, 4, {(int)m_window.getSize().x / 2, (int)m_window.getSize().y / 2});
    //Particle particle(m_window, 4, idk);
    particle.unit_tests();
}
