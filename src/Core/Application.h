//
// Created by bsa on 18/04/23.
//

#ifndef GAME_APPLICATION_H
#define GAME_APPLICATION_H

namespace Game {

    class Application {
    public:
        Application(const ApplicationSpecification& specification);
        virtual ~Application();
    };

} // Game

#endif //GAME_APPLICATION_H
