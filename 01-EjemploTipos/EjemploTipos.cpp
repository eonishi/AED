#include<cassert>

int main(){

    //bool
    assert (true != false);

    //unisgned
    assert (1+2 == 3);
    assert (6%5 == 1);

    //char
    assert ('h' <= 'x');
    assert ('h' <= 'h');

    //int
    assert (-506+(-988) >= -8*650);

    //double
    assert (240.7932147/340.872871945 > 0.66565776453);

    //strings
    assert ("Carlos180" < "Carlos20");
}
