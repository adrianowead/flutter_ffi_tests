# CMake

Para gerar a estrutura do projeto C++ para seu sistema operacional, como Visual Studio para windows, execute:

```bash
cmake -S . -B ./build
```

Será criada a pasta **build** com todo o projeto, basta abrir esse projeto na sua IDE de C++.

Ou use o comando abaixo para compilar pelo **cmake** via cli.

```bash
cmake --build ./build/
```
