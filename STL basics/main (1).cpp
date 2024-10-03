/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

template <typename T>

T maxof(const T &a, const T &b) {
    return (a>b ? a:b);    
}

int main()
{
    int a = 9;
    int b = 7;
    
    cout<<"max of a and b is : "<<maxof<int>(a,b)<<endl;
    return 0;
}