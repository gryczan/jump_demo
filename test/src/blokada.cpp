#include "blokada.h"

blokada::blokada(int wybor, sf::Vector2f kordy)
{
    if(wybor == 1)
    {
        texture_1.loadFromFile("podloga.png");
    }
    if(wybor == 2)
    {
        texture_1.loadFromFile("platforma.png");
    }

    sprite.setTexture(texture_1);
    sprite.setPosition(kordy);
}
