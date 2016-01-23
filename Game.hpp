#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "utils.hpp"
#include "Scene.hpp"
#include "Resources.hpp"
#include "SceneChanger.hpp"
#include "TextBoxManager.hpp"


class Game {
friend class SceneMenu;
friend class SceneCutScene;
public:
    Game();
    ~Game();

    void start();

    void changeScene(SceneChanger* sC);


private:
    sf::RenderWindow _window;
    std::map<std::string, Scene*> _scenes;
    Scene* _currentScene;
    Scene* _lastScene;

    sf::Mutex _mutex;
    sf::Thread* _thread;

    void loadScenes();
    void loadScene(std::string sceneName);

    void initInput();
};

#endif
