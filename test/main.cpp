#include <SFML/Graphics.hpp>
#include <player.h>
#include <funkcja_1.h>
#include <blokada.h>

blokada floor(1, sf::Vector2f(0, 420));
blokada platform (2, sf::Vector2f(220, 300));


int kontrol = 1;
int main()
{
    sf::RenderWindow okno( sf::VideoMode( 640, 480, 32 ), "test grawitacji" );
    while( okno.isOpen() )
    {
        sf::Event zdarzenie;
        while( okno.pollEvent( zdarzenie ) )
        {
            if( zdarzenie.type == sf::Event::Closed )
                 okno.close();

            if( zdarzenie.type == sf::Event::KeyPressed && zdarzenie.key.code == sf::Keyboard::Escape )
                 okno.close();

            if( zdarzenie.type == sf::Event::MouseButtonPressed && zdarzenie.mouseButton.button == sf::Mouse::Middle )
                 okno.close();

        }
        if(kontrol == 1)
        {
            funkcja_1();
        }
        okno.clear( sf::Color( 12, 12, 12 ) );
        okno.display();
    }
    return 0;
}
