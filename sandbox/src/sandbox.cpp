#include <ripe.hpp>
#include <stdio.h>

class Sandbox: public ripe::Application {
public:
    Sandbox() {}
    ~Sandbox() {}

    void run() override {
        puts("Sandbox created");
        while(true) {}
    }
};

ripe::Application* ripe::create_application() {
    return new Sandbox();
}

