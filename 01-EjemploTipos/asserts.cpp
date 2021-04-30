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
    char A;
    char a;
    assert(a==a);
    assert(A!=a);
    assert(int(A)<=int(a));
    assert(int(a)>=int(A));
    //string
    string h = "hola";
    string m = " mundo";
    string hm = "hola mundo";
    assert(h.length() == 4);
    assert(h+m ==hm);
    assert(h != m);
    assert(h <= hm);
    assert(hm >= m);
    //int
    assert(2+2==4);
    assert(4*4==16);
    assert(10%3==1);
    assert(1 != 0);
    assert(64/8==8);
    assert(100-99 == 1);
    assert(2 - 3 == -1);
    //double
    assert(-0.3 <= -0.33);
    printf ("Todo bien\n");
}
