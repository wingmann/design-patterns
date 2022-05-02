#include "concrete_command.h"
#include "receiver.h"
#include "invoker.h"

int main()
{
    auto cc = std::make_shared<concrete_command>(std::make_shared<receiver>());

    auto inv = std::make_shared<invoker>();
    inv->set(cc);
    inv->confirm();

    return 0;
}
