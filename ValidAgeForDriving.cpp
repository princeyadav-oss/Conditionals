#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    
    if(age >= 18){
        cout<<"You can DRIVE"<<endl;
        cout<<"But you need a driving liscence";
    } 
    else cout<<"You cannot drive";
}