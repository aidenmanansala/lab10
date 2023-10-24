
#include "display.h"
#include "sound.h"

int main()
{
    std::string message = "This is Luke's branch.";
    displayString(message);

    std::cout << "This is Aiden's branch.\n";
    playSound();

    return 0;
}