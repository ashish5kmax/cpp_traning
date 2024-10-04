#include <iostream>
using namespace std;

template <typename T>
constexpr T pi = T(3.1415926535897932385L);

template <typename T>
T area_of_circle(const T &r) {
    return r * r * pi<T>;
}

int main() {
    cout.precision(20);
    cout<< pi<long double> <<endl;
    cout<<"Area of circle = "<<area_of_circle<long double>(5)<<endl;
    return 0;
}