#include <stdio.h>
#include <exception>
#include <stdexcept>

int
main(int ac, char** av){
    try {
        throw std::runtime_error("WHAT");
    } catch (std::exception& e){
        printf("PTR0 = %p\n", &e);
        throw;
    }
}

