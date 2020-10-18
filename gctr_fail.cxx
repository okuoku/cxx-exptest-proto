class Crash {
public:
    Crash(){
        throw 10;
    };
};

Crash T;

int
main(int ac, char** av){
    return 1;
}
