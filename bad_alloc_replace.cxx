#include <cstdlib>
#include <new>
#ifdef _MSC_VER
#include <malloc.h>
#endif

int new_limit = 5;

// new replacements
#ifdef __cpp_aligned_new
void* operator new(std::size_t n, std::align_val_t al) noexcept(false) {
    new_limit--;
    if(new_limit < 0){
        throw std::bad_alloc();
    }
#ifdef _MSC_VER
    return _aligned_malloc(n, static_cast<size_t>(al));
#else
    return std::aligned_alloc(static_cast<size_t>(al), n);
#endif
}
void operator delete(void* p, std::align_val_t al) noexcept { 
    std::free(p);
}
#endif

void* operator new(std::size_t n) noexcept(false) { 
    new_limit--;
    if(new_limit < 0){
        throw std::bad_alloc();
    }
    return std::malloc(n); 
}

void operator delete(void* p) noexcept { 
    std::free(p); 
};



// Object creation
class nothing {};
int
main(int ac, char** av){
    int i;
    for(i=0;i!=50;i++){
        nothing* n;
        n = new nothing();
        (void)n;
    }
    // Should not be here.
    return 1;
}
