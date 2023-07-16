cmake_minimum_required(VERSION 3.26.4)
project(urna)

add_executable(
    ${PROJECT_NAME}
    urna.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    Winmm.lib
)
