#include <iostream>
#include <SFML/Graphics.hpp>
#include "clases.h"

int main()
{
    // Crea la ventana de dibujo
    sf::RenderWindow window(sf::VideoMode(900, 600), "Juego Sokoban");

    Circle c1( 100, 100, 100, &window);
    Square s1( 200, 200, 200, &window);


/*
    // Dibujar el circulo 1
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::White);

    // Circulo 2
    sf::CircleShape shape2(100.f);
    sf::Color c1(255, 0, 0, 128);
    shape2.setFillColor(c1);
    shape2.setPosition(100, 100);
*/
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Permite dibujar las figuras en la pantalla
        window.clear();
  /*
        window.draw(shape2);
        window.draw(shape);
  */
        c1.dibujar(sf::Color::Blue);
        s1.dibujar(sf::Color::Green);
        window.display();
    }

    return 0;
}