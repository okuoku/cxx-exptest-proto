// Object creation
class nothing {};
int
main(int ac, char** av){
    int i;
    while(1){
        nothing* n;
        n = new nothing();
        (void)n;
    }
    // Should not be here.
    return 1;
}
