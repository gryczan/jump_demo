#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>


class player
{
    public:
        player();
        sf::Sprite sprite;
        sf::Texture texture_1;
        int i_ruch;
        void ruch(int ruszek);


    protected:

    private:
};

#endif // PLAYER_H
