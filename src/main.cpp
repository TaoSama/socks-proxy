#include <iostream>

#include "hello.h"

int main(int argc, char** argv) {
    std::cout << HelloWorld::Greet() << std::endl;
    return 0;
}
