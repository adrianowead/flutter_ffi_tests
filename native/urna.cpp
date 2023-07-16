#include "urna.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    playAudio("C:\\desenvolvimento\\wead\\ffi_appclass\\assets\\som-urna\\final.wav");
    olaMundo();

    return 0;
}

// acessando o caminho do arquivo via ponteiro
void playAudio(const char* path) {
    PlaySoundA(
        path,
        NULL,
        SND_FILENAME | SND_ASYNC // neste caso é assincrono, mas toda a execução nativa trava a thread principal
        // é importante então considerar abrir uma nova thread para as execuções nativas
    );
}

void olaMundo() {
    cout << "Hello World!";
}
