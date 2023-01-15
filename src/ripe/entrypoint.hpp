#pragma once

extern  ripe::Application* ripe::create_application();

int main(int argc, const char *argv[]) {
    
    auto app = ripe::create_application();

    app->run();

    delete app;

    return 0;
}
