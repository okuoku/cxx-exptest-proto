#include <functional>

int
main(int ac, char** av){
    std::function<void()> x;
    x();
    return 1;
}
