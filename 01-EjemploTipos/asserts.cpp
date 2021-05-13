#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;

//Comprobar con asserts todas las operaciones de los tipos de datos
// bool, char, unsigned, int, double, string.

int main(){
    //bool
    assert(true == true);
    assert(true != not true);
    assert(true and true);
    assert(true or false);
    assert(not false);

    //char
    assert('a'=='a');
    assert('A'!='a');
    assert('A'<='a');
    assert('a'>='A');
    assert('A'+1 == 'B');
    //string

    assert("hola" == "hola");
    assert("hola" != "chau");
    assert("hola"s+ " mundo"s=="hola mundo");
    assert("hola"s.length()==4);

    //int
    assert(1 == 1);
    assert(1 != 0);
    assert(1 >= 0);
    assert(0 <= 1);
    assert(2+2==4);
    assert(100-99 == 1);
    assert(4*4==16);
    assert(64/8==8);
    assert(10%3==1);

    //double
    assert(1.0 == 1.0);
    assert(1.0 != 2.0);
    assert(1.0 >= 0.0);
    assert(0.0 <= 1.0);
    assert(2.5+2.5==5.0);
    assert(3.5-2.5==1.0);
    assert(4.0*4.0==16.0);
    assert(64.0/8.0==8.0);

    assert(10E-3==0.01);
    assert(10E+3==10000);

    //unsigned 
    assert(1u == 1u);
    assert(1u != 0u);
    assert(1u >= 0u);
    assert(0u <= 1u);
    assert(2u+2u==4u);
    assert(100u-99u == 1u);
    assert(4u*4u==16u);
    assert(64u/8u==8u);
    assert(10u%3u==1u);


    printf ("Todo bien\n");
}