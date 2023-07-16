#include <iostream>
#include <Windows.h>

using namespace std;

int main(int argc, char const *argv[])
{
    PlaySoundA(
        "C:\\desenvolvimento\\wead\\ffi_appclass\\assets\\som-urna\\final.wav",
        NULL,
        SND_FILENAME | SND_SYNC
    );

    cout << "Hello World!";

    return 0;
}
