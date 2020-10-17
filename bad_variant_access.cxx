#include <variant>
#include <string>

int
main(int ac, char** av){
    std::variant<std::string, int> x = "str";

    return std::get<1>(x);
}
