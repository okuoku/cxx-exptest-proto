#include <optional>

int
main(int ac, char** av){
    std::optional<int> p;

    return p.value();
}
