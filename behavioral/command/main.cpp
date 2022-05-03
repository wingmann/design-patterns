#include "concrete_command.h"
#include "receiver.h"
#include "invoker.h"

int main() {
    auto command = std::make_shared<ConcreteCommand>(std::make_shared<Receiver>());

    auto invoker = std::make_shared<Invoker>();
    invoker->set(command);
    invoker->confirm();

    return 0;
}
