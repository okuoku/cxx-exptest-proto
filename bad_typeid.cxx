#include <typeinfo>
class nothing {virtual void x(){}; };
int
main(int ac, char** av){
    nothing* n = nullptr;
    (void)typeid(*n).name();
    return 1;
}
