#include "player.h"

player::player()
{
    texture_1.loadFromFile("gracz.png");
    sprite.setTexture(texture_1);
}

void player::ruch(int ruszek)
{
    switch(ruszek)
    {
    case 1:
        sprite.move(10,0);
        break;

    case 2:
        sprite.move(-10,0);
        break;
    }
}
