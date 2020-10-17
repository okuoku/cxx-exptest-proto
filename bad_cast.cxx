#include <string>
class nothing {virtual void x(){}};
class nothing2 : nothing {};
int
main(int ac, char** av){
    nothing n;
    nothing2& nn = dynamic_cast<nothing2&>(n);
    (void)nn;
    return 1;
}
