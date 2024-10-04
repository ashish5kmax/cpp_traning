#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {
    array<int ,5> arr = {1,2,3,4,5};

    cout<<"Size of array : "<<arr.size();
    int n = arr.size();
    cout<<endl;
    for(int i = 0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}