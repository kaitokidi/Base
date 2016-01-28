#ifndef SCENETEST_HPP
#define SCENETEST_HPP
#include "utils.hpp"
#include "Scene.hpp"

class Game;

class SceneTest : public Scene {

public:
    SceneTest(Game* g, sf::RenderWindow* w, std::string next);

    ~SceneTest();

    void init(sf::Vector2f aux = sf::Vector2f(0,0));

    void update(float deltaTime);

    void processInput();

    void render(sf::RenderTarget* target);

    void resizing();

private:

    Game* _game;
    std::string _next;
    sf::Sprite _sprite;
    sf::Texture _texture;
};

#endif // SCENETEST_HPP
