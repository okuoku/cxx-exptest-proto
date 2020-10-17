#include <memory>

int
main(int ac, char** av){
    auto p1 = std::make_shared<void*>(nullptr);
    std::weak_ptr<void*> p2(p1);

    p2.reset();

    // ref
    auto p3 = std::shared_ptr<void*>(p2);

    (void)p3;

    return 1;
}
