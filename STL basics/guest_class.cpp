/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

class guest {
public:
    string name;
    int age;
    string gender;
    static int sum;
    
    guest(string n, int a, string g) {
        this->name = n;
        this->age = a;
        sum = sum+a;
        if(g[0]=='b' || g[0]=='m' || g[0]=='M' || g[0]=='m') {
            this->gender = "Boy";
        }
        else {
            this->gender = "Girl";
        }
    }
};

int guest::sum = 0;

int main()
{
    vector<guest>my_container;
    my_container.push_back(guest("Ashish",21,"male"));
    my_container.push_back(guest("Anshu",21,"female"));
    my_container.push_back(guest("Aman",22,"male"));
    my_container.push_back(guest("Akash",22,"male"));
    my_container.push_back(guest("Anjali",22,"female"));
    
    for(auto it = my_container.begin(); it!=my_container.end(); it++) {
        cout<<it->name<<endl;
        cout<<it->age<<endl;
        cout<<it->gender<<endl;
        cout<<endl;
    }
    
    cout<<my_container[3].name<<endl;
    cout<<my_container[3].age<<endl;
    cout<<my_container[3].gender<<endl;
    
    guest::sum-=my_container[3].age;
    my_container.erase(my_container.begin()+3);
    cout<<endl;
    
    cout<<my_container[3].name<<endl;
    cout<<my_container[3].age<<endl;
    cout<<my_container[3].gender<<endl;
    
    int n = my_container.size();
    float avg = (float)(guest::sum)/n;
    
    cout<<"Average age of the whole guest = "<<avg<<endl;
    
    return 0;
}