// Example program
#include <iostream>
#include <string>
using namespace std;
void goo(){
    cout<< "goo";
    }
void foo(){
    cout<< "foo";
    goo();
    }
    void boo(){
    cout<< "boo";
    foo();
    }
int main()
{
    boo();
return 0;
}
