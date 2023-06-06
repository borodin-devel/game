//
// Created by bsa on 18/04/23.
//

#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include "raylib-cpp.hpp"
#include <memory>

namespace Game {

    class Window {

    public:
        Window(int width, int height, const std::string& title = "Game");
        int init(int width, int height, const std::string& title = "Game");
        ~Window();

    private:
        std::unique_ptr<raylib::Window> m_raylib_window;
    };

} // Game

#endif //GAME_WINDOW_H
