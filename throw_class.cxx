class myexp { virtual void x(){} };

int
main(int ac, char** av){
    throw myexp();

    return 1;
}
