#include <iostream>
using namespace std;


struct Bar{
    int x;
    int y;
    string input;
};

struct Bar funct(){
    struct Bar result;
    result.x = 0;
    result.y = 1;
    result.input = "";
    return result;
};

/* method 2 */
void funct2(int *x, int *y, string *input);
void funct2(int *x, int *y, string *input){
    /* dereferencing and setting */
    *x  = 13;
    *y  = 132;
    *input = "akls;df j";
}

int main(int argc, char* argv[]) {
    struct Bar dunno = funct();
    int x,y;
    string adsf;
    funct2(&x, &y, &adsf);

    cout << "the value of x: " << x << endl;
    cout << "the value of y: " << y << endl;
    cout << "the value of string: " << adsf << endl;

    return 0;
}