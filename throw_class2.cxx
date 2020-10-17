#include <exception>

class myexp : std::exception { using std::exception::exception; virtual void x(void){ }; };

int
main(int ac, char** av){

    throw myexp("WHAT");

    return 1;
}
