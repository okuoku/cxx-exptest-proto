#include <any>

int
main(int ac, char** av){
    std::any x = false;

    (void)std::any_cast<void*>(x);

    return 1;
}
