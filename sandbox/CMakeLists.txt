add_executable(sandbox src/sandbox.cpp)

target_link_libraries(sandbox ripe)

target_include_directories(sandbox PUBLIC ../include)
