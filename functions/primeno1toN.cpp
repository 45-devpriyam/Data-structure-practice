#include<iostream>
using namespace std;
int primeno(int n){
    bool isPrime = true;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int main(){
    cout<<"Prime No. ="<<primeno(5)<<endl;

    return 0;
}