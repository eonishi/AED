#include <cassert>
#include <string>

using namespace std::string_literals;

int main(){

    //bool 
    assert (true != false);
    assert(not false); 

    //unisgned
    assert(56u + 57u == 113u);

    //char
    assert ('h' <= 'x');
    assert ('h' <= 'h');
    assert('C' + 2 == 'E');
    assert('C' - 2 == 65);

    //int
    assert (-506+(-988) >= -8*650);

    //double
    assert (240.7932147/340.872871945 > 0.66565776453);
    assert(0.03 == 3e-2);

    //strings
    assert ("Carlos180"s < "Carlos20"s);
    assert(7 == "bom Dia"s.length());
    assert(14 < "bom dia parceiro"s.length());
    assert("skill"s == "s"s + "kill"s);
}
