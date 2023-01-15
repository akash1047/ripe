#pragma once

namespace ripe {

class Application {
    public:
    Application();
    virtual ~Application();

    virtual void run();
};

Application* create_application();

}
