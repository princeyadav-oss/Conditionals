#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter cost price: ";
    cin>>cp;
    int sp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp > cp) cout<<"Profit is "<<sp-cp;
    else if(sp < cp) cout<<"Loss is "<<cp-sp;
    else cout<<"No Profit, No Loss";
    // if(sp > cp) cout<<"Profit";
    // if(sp < cp) cout<<"Loss";
    // if(sp == cp) cout<<"No Profit, No Loss";
}
