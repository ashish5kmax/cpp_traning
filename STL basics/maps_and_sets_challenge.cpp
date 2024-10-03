/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<pair<int,int>, string>guests;
    int n;
    cin>>n;
    
    while(n>0) {
        int f;
        int r;
        cin>>f>>r;
        
        if((f<0 || f>21) || (r<1 || r>15)) {
            cout<<"Floor or room doesn't exist!!"<<endl;
            continue;
        }
        
        pair<int,int>p;
        string name;
        cin>>name;
        
        p.first = f;
        p.second = r;
        
        guests.insert({p,name});
        n--;
    }
    
    cout<<endl;
    cout<<"guest details : "<<endl;
    for(auto it = guests.begin(); it!=guests.end(); it++) {
        cout<<"Floor : "<<it->first.first<<", Room : "<<it->first.second<<", Name:"<<it->second<<endl;
    }
    
    int f,r;
    cout<<"Remove the particular gest : ";
    cin>>f;
    cin>>r;
    
    guests.erase({f,r});
    
    cout<<endl;
    cout<<"guest details after removal: "<<endl;
    for(auto it = guests.begin(); it!=guests.end(); it++) {
        cout<<"Floor : "<<it->first.first<<", Room : "<<it->first.second<<", Name:"<<it->second<<endl;
    }
    return 0;
}