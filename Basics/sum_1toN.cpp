#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. = ";
    cin>>n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum +=i;
    }
    /* int count = 1;
    while(count<=n){
        sum += count;
        count++;
    }*/
    cout<<sum<<endl;
    return 0;
}