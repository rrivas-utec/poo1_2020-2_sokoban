//
// Created by rudri on 12/3/2020.
//

#ifndef SOKOBAN_CLASES_H
#define SOKOBAN_CLASES_H

#include <SFML/Graphics.hpp>
#include <vector>

using namespace std;

// clase Base
class Shape {
protected:
    int x = 0;
    int y = 0;
    float width = 0;
    float height = 0;
    sf::RenderWindow* canvas = nullptr;
public:
    Shape() = default;
    Shape(int x, int y, float width, float height, sf::RenderWindow* canvas):
        x{x}, y{y}, width{width}, height{height}, canvas{canvas} {}

    int get_x() {return x;}
    int get_y() {return y;}

    void dibujar() {
        // Crear un Objeto Rectangle Shape
        sf::RectangleShape rect;
        rect.setPosition(x, y);
        rect.setSize({width, height});
        rect.setFillColor(sf::Color::Yellow);
        // Dibujar en canvas
        canvas->draw(rect);
    }
    void dibujar(sf::Color color) {
        // Crear un Objeto Rectangle Shape
        sf::RectangleShape rect;
        rect.setPosition(x, y);
        rect.setSize({width, height});
        rect.setFillColor(color);
        // Dibujar en canvas
        canvas->draw(rect);
    }
};

/*
 * - Sobrecarga
 *
 * - Sobreescritura
 *
 */

// clases Parte
class Circle: public Shape {
public:
    Circle() = default;
    Circle(int x, int y, float radio, sf::RenderWindow* canvas):
        Shape(x, y, radio * 2, radio * 2, canvas) {}
    void dibujar() {
        // Crear un Objeto Rectangle Shape
        sf::CircleShape rect;
        rect.setPosition(x, y);
        rect.setRadius(width/2);
        rect.setFillColor(sf::Color::Yellow);
        // Dibujar en canvas
        canvas->draw(rect);
    }
    void dibujar(sf::Color color) {
        // Crear un Objeto Rectangle Shape
        sf::CircleShape rect;
        rect.setPosition(x, y);
        rect.setRadius(width/2);
        rect.setFillColor(color);
        // Dibujar en canvas
        canvas->draw(rect);
    }
};

class Square: public Shape {
public:
    Square() = default;
    Square(int x, int y, float lado, sf::RenderWindow* canvas):
        Shape(x, y, lado, lado, canvas) {}
};

// clase Todo
class Cancha {
    vector<Circle> circulos;
    Square rectangulo;
public:

};

#endif //SOKOBAN_CLASES_H
