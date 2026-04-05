#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the no. = ";
    cin>>a;
    if(a%2 == 0){
        cout<<"Even = "<<a<<endl;
    }
    else{
        cout<<"Odd = "<<a<<endl;
    }
    return 0;
}