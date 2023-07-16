cmake_minimum_required(VERSION 3.26.4)
project(urna)

# a compilação de executável é apenas para nossos testes direto no .exe
# o arquivo a ser integrado com o dart será uma biblioteca dinâmica (DLL/SO)
# add_executable(
#     ${PROJECT_NAME}
#     urna.cpp
# )

# biblioteca compartilhada (shared) que será consumida pelo dart
add_library(
    ${PROJECT_NAME}
    SHARED
    urna.cpp
    urna.def # definições, no caso de funções de acesso público
)

target_link_libraries(
    ${PROJECT_NAME}
    Winmm.lib
)
